//
// Created by ys on 2019/5/2.
//

#include "ch2.h"
#include <iostream>


void ex2_3()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    std::cout << sizeof(unsigned) << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    std::cout << "ÖÐÎÄ" << std::endl;
    //std::cout << "\1234" << "\x1234" << std::endl;
}


void ex2_4()
{
    int month = 9, day = 7;
    //int month1 = 09, day1 = 07;
    auto a = 1024.f;

}

void ex2_8()
{
    std::cout << 2 << "\115\012" << std::endl;
    std::cout << 2 << "\t\115\012" << std::endl;
}

void ex2_9()
{
    //std::cin >> int input_value;
    double wage;
    double salary = wage = 9999.99;


    int local_int;
    int _;
    int __ = 12;
    int _A = 13;
    std::cout << __ << " and " << _A << std::endl;
    std::string local_str;
    std::cout << "var local int" << std::endl;
    std::cout << local_int << std::endl << local_str << std::endl;
}


void ex2_20()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << " and " << i << std::endl;
}


void test()
{


    ex2_20();

    /*
    int a = 1;
    int &b = a;
    int &c = b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    int *p1 = nullptr;
    int *p2 = 0;
    int *p3 = NULL;

    double pi = 3.14, *p = &pi;
    void *pv = &pi;
    pv = p;


*/
    //ex2_9();
    //ex2_8();
    //ex2_3();
}
