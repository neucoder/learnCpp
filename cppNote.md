# cpp Primer Note

## 变量和基本类型

- ### 内置类型

- 数字类型
  - 数字类型
  ![num](img/numberType.jpg)
    - int and unsigned一起运算，int->unsigned int 类型转换 ，不能混用无符号有符号数。
    - 字面值
    ![chara](img/characterLiterals.jpg)
    - 转义字符
      ![\n](img/zhuanyi.jpg)
- 变量
  - 列表初始化

  ```c++
  int units_sold = 0;
  int units_sold = {0};
  int units_sold{0};
  int units_sold(0);
  long double ld = 3.1415926536;
  int a{ld}, b = {ld}; // error: narrowing conversion required
  int c(ld), d = ld; // ok: but value will be truncated
  ```

  - 初始化 函数内部的内置变量未初始化是未定义的
  - 声明和定义 只能声明一次

  ```c++
  extern int a;//声明
  extern int a = 1;//声明加定义
  int a;//定义
  ```

  - 第一次使用变量时再定义它
  - `::`可以访问全局作用域变量
  - 复合类型
    - 引用 必须初始化，是一个别名

    ```c++
    //类型必须匹配，并且只能绑定到对象上
    //初始化常量引用时，可以是任意表达式
    int a = 1;
    int &b = a;
    int &c = b;
    ```

    - 指针

    ```c++
    //允许指向常量的指针指向一个非常量对象
    //无法定义指向引用的指针，引用不是对象，没有地址
    /*

    */
    int a = 10;
    int *p = &a;
    //空指针
    int *p1 = nullptr; //最好使用这种用法
    int *p2 = 0;
    int *p3 = NULL;

    //void *指针, 可以存放任意的对象
    double pi = 3.14, *p = &pi;
    void *pv = &pi;
    pv = p;

    ```

    - 指向指针的引用
    复杂的声明语句，从右向左阅读辨别类型
    ![pointer](img/pointerRef.jpg)
    - const 关键字定义常量

     ```cpp
       //一般情况下只在本文件内有效
       //在文件间共享，都用extern声明
       const int i = get_size(); // ok: initialized at run time
       const int j = 42; // ok: initialized at compile time
       const int k; // error: k is uninitialized const
    ```

      - 常量引用
      
      ```cpp
         //可以定义常量的引用
         //指向常量的指针和引用，不能通过指针和引用修改对象的值
         //const修饰引用的时候不能改变它的值
         //const可以引用非常量，知识不允许修改他的值
         int i = 42;
         const int &r1 = i; // we can bind a const int& to a plain int object
         const int &r2 = 42; // ok: r1 is a reference to const
         const int &r3 = r1 * 2; // ok: r3 is a reference to const
         int &r4 = r * 2; // error: r4 is a plain, non const reference
      ```
      - 类型别名
      `using SI = Sales_item;`  //SI是一个别名
    - auto 自动推到类型，使用引用时，得到的是引用对象的类型。不能推导顶层的const
    - decltype 顶层的const
    
    - 预处理器
    ```
    
    ```
    