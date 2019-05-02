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
    std::cout <<"ÖÐÎÄ" << std::endl;
}

void test()
{
    ex2_3();
}
