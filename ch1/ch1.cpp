//
// Created by ys on 2019/4/30.
//

#include <iostream>

int main()
{
    //exercise 1.9  the sum 50-100
    int start = 50;
    int sum = 0;
    while (start <= 100)
    {
        sum += start;
        ++start;
    }
    std::cout << "the sum between 50 to 100 is " << sum << std::endl;

    // 1.10   10-0֮�������
    int end = 10;
    while (end >= 0)
    {
        std::cout << end << std::endl;
        --end;
    }

    //1.11�����������֮�����������
    int v1 = 0, v2 = 0;
    std::cout << "please two input number:" << std::endl;
    std::cin >> v1 >> v2;
    while (v2 >= v1)
    {
        std::cout << v1 << std::endl;
        ++v1;
    }

    system("pause");
    return 0;

}

