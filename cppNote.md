# cpp Primer Note

## �����ͻ�������

- ### ��������

- ��������
  - ��������
  ![num](img/numberType.jpg)
    - int and unsignedһ�����㣬int->unsigned int ����ת�� �����ܻ����޷����з�������
    - ����ֵ
    ![chara](img/characterLiterals.jpg)
    - ת���ַ�
      ![\n](img/zhuanyi.jpg)
- ����
  - �б��ʼ��

  ```c++
  int units_sold = 0;
  int units_sold = {0};
  int units_sold{0};
  int units_sold(0);
  long double ld = 3.1415926536;
  int a{ld}, b = {ld}; // error: narrowing conversion required
  int c(ld), d = ld; // ok: but value will be truncated
  ```

  - ��ʼ�� �����ڲ������ñ���δ��ʼ����δ�����
  - �����Ͷ��� ֻ������һ��

  ```c++
  extern int a;//����
  extern int a = 1;//�����Ӷ���
  int a;//����
  ```

  - ��һ��ʹ�ñ���ʱ�ٶ�����
  - `::`���Է���ȫ�����������
  - ��������
    - ���� �����ʼ������һ������

    ```c++
    //���ͱ���ƥ�䣬����ֻ�ܰ󶨵�������
    //��ʼ����������ʱ��������������ʽ
    int a = 1;
    int &b = a;
    int &c = b;
    ```

    - ָ��

    ```c++
    //����ָ������ָ��ָ��һ���ǳ�������
    //�޷�����ָ�����õ�ָ�룬���ò��Ƕ���û�е�ַ
    /*

    */
    int a = 10;
    int *p = &a;
    //��ָ��
    int *p1 = nullptr; //���ʹ�������÷�
    int *p2 = 0;
    int *p3 = NULL;

    //void *ָ��, ���Դ������Ķ���
    double pi = 3.14, *p = &pi;
    void *pv = &pi;
    pv = p;

    ```

    - ָ��ָ�������
    ���ӵ�������䣬���������Ķ��������
    ![pointer](img/pointerRef.jpg)
    - const �ؼ��ֶ��峣��

     ```cpp
       //һ�������ֻ�ڱ��ļ�����Ч
       //���ļ��乲������extern����
       const int i = get_size(); // ok: initialized at run time
       const int j = 42; // ok: initialized at compile time
       const int k; // error: k is uninitialized const
    ```

      - ��������
      
      ```cpp
         //���Զ��峣��������
         //ָ������ָ������ã�����ͨ��ָ��������޸Ķ����ֵ
         //const�������õ�ʱ���ܸı�����ֵ
         //const�������÷ǳ�����֪ʶ�������޸�����ֵ
         int i = 42;
         const int &r1 = i; // we can bind a const int& to a plain int object
         const int &r2 = 42; // ok: r1 is a reference to const
         const int &r3 = r1 * 2; // ok: r3 is a reference to const
         int &r4 = r * 2; // error: r4 is a plain, non const reference
      ```
      - ���ͱ���
      `using SI = Sales_item;`  //SI��һ������
    - auto �Զ��Ƶ����ͣ�ʹ������ʱ���õ��������ö�������͡������Ƶ������const
    - decltype �����const
    
## �ַ���������������
- ### using
    - `using std::cin`�����ռ�����
    - ͷ�ļ��в�Ҫʹ��using
  
- ### string
    - ��ʾ�ɱ䳤�ַ����У���ʼ����ʽ,ʹ�õȺ��ǿ�����ʼ����������ֱ�ӳ�ʼ��
      ![](img/stringInit.jpg)
    - string�Ĳ���
      ![](img/strOP.jpg)
    - string::size() ����string::size_type����
    - �����ַ����ļӺű��뱣֤������һ���ַ���
    - cctype
      ![](img/cctype.jpg)
    - ��Χfor���
      ```cpp
      string s("hello World!!!");
      //ת���ɴ�д��ʽ
      for (auto &c : s)
      {
          c = toupper(c);
      }
      cout << s << endl;
      ```
- ### vector
    - ��Χforѭ���������Ԫ�أ��ı�vector�����Ĳ���ʹ������ʧЧ
    - ��ʼ��
      ![](img/vectorInit.jpg) 
    - ��صĲ���  
      ![](img/vectorOp.jpg)
    - ��Χfor���
      ```cpp
        vector<int> v{1,2,3,4,5,6,7,8,9};
        for (auto &i : v)
        {
            i *= i;
        }
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
      ```
    - ������
      - ����������
      ![](img/vectoroper.jpg)
      ```cpp
      //������
      string s("some thing");
      for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
      {
          *it = toupper(*it);
      }
  
      cout << s << endl;
      
      //����������
      vector<int>::iterator it; // it can read and write vector<int> elements
      string::iterator it2; // it2 can read and write characters in a string
      vector<int>::const_iterator it3; // it3 can read but not write elements
      string::const_iterator it4; // it4 can read but not write characters
      //�����������
      auto it3 = v.cbegin(); 
      
      ```
      - �������ľ��룬`s.bigin()-s.end()` ������`difference_type `
      
- ### ����
    - ��Χforѭ��,�����±����,��������ָ��
    - auto ָ�� decltype ���飬ָ���������������
    -  �⺯��
    ```cpp
      int arr[] = {0,1,2,3,4,-1,5,6,7,8,9};
      
      int *start = begin(arr);
      int *stop = end(arr);
      while (start < stop && *start >= 0)
      {
          start++;
      }
      cout << *start << endl;
    ```
    - ����ָ������Ľ��Ϊ��ptrdiff_t����
    - ��ά����forѭ������ȥ���һ��ѭ���ⶼҪ�����á�Ҳ����ʹ��auto���͵�����
    - ```cpp
      int *p[4] //����ָ������
      int (*p)[4] //ָ��4������������
     
      ```
## ���ʽ

- ��ֵ�õĶ���ֵ�����ݣ�����ֵ�õĶ������ݣ��ڴ��е�λ��


## ���
- ��Χfor��䣬���������飬�ַ���
- do-while���ٻ�ִ��һ�����
- try catch throw
  ```cpp
  
  if(item1.isbn() !+ item2.isbn())
  {
      throw runtime_error("Data must refer to same ISBN");
  }
  
  
  try {
    program-statements
  }
  catch ()
  {
    handler-statements
  }
  catch ()
  {
    handler-statements
  }
  
  ```
  ![exception](img/exception.jpg)
  
## ����

- �ֲ���̬�����һ�γ�ʼ��֮���һֱ���ڣ�ֱ�������������ʧ
- �����������ı������βε�ֵ��ʹ�ó������� `void print(const int a)`
    - ʹ�����ñ��⿽�����ں��������ǲ�ϣ���ı����ݣ�����Ϊ������
    - ���������ⲿ�ı����������ã�ֵ��ı䣬��������ͨ���á�
    - ֻ��Ҫ c ��ֵ�����ʵ�ο�������ֵ(��ֵʵ���޷����������β�)������ c �������������͡�
- �������
  - c����ǽ���
  - ��׼�⴫����βָ��`void print(*begin, *end)`
  - ����ָ��������С`void print(const int *a, size_t n)`
  - ������������ `void print(int (&a)[10])`
  - ��ά����`void print(int (*mat)[10], int row)`
     `void print(int mat[][10], int row)`
     
- �ɱ��β�
  - initializer_list�β�
    ![��ز���](img/initializer_list.jpg)
    ```cpp
    int sumInt(initializer_list<int> s)
    {
        int sum = 0;
        for (const auto &c : s)
        {
            sum += c;
        }
        return sum;
    }

    ```
- ����ֵ
    - ���ܷ��ؾֲ����������ú�ָ��
    - ���÷�����ֵ�����Խ��и�ֵ`get_val(s, 0) = 'A'`
    - �������б��ʼ������ֵ  `return {"function","ok!"}`
    - ��������ָ��   `int (*func(int i))[10];`
    - β�÷������� `auto func(int i) -> int(*)[10];`
    
- ��������
    - Ĭ��ʵ�Σ�һ��ĳ���βα�������Ĭ��ֵ������������βζ�������Ĭ��ֵ
    
## ��
- ���ʿ���
  - ���ĳ����Ա�ܹ������������ڶ������ʣ���ô��Ӧ�ö���Ϊ public; ���ĳ����Աֻ�������ڲ����ʣ�
  ��ô��Ӧ�ö���Ϊ private��
  - class �� struct ��Ψһ������Ĭ�ϵķ��ʼ���ͬ��classĬ�ϵ�һ��private
  - ��Ԫ ����ʹ�������������˽�г�Ա `friend �ؼ���`
  - �ɱ����ݳ�Ա `mutable size_t access_ctr;`
  - ����̬�ڴ�������������ڿ����͸�ֵ������Ĭ�ϰ汾������ҲӦ�þ���ʹ��string �� vector �����⶯̬�����ڴ�ĸ����ԡ�



## IO


