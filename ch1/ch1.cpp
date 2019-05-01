//
// Created by ys on 2019/4/30.
//

#include <iostream>
#include "ch1.h"
#include "Sales_item.h"


void hello()
{
    std::cout << "hello" << std::endl;
}

//练习1.12
void t1_12()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << sum << std::endl;
}

// 1.16
void t1_16()
{
    int sum = 0;
    int value = 0;
    while (std::cin >> value)
    {
        sum += value;
    }

    std::cout << "Sum is: " << sum << std::endl;
}

// 1.17 和 1.18
void t1_17()
{
    int currVal = 0, val = 0;

    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << "occurs "
                          << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;

            }
        }

        std::cout << currVal << " occurs "
                  << cnt << " times " << std::endl;
    }
}

//练习1.20
void t1_20()
{
    Sales_item book;
    std::cin >> book;
    std::cout << book;
}

//练习1.21
void t1_21()
{
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    Sales_item book3;
    book3 = book1 + book2;
    std::cout << book3 << std::endl;
}

//练习1.22
void t1_22()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                total += trans;
            }
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "NO data?!" << std::endl;
        exit(-1);
    }

}


void t1_23()
{
    int cnt = 1;
    Sales_item book1;
    if (std::cin >> book1)
    {
        Sales_item book2;
        while (std::cin >> book2)
        {
            if (book1.isbn() == book2.isbn())
            {
                cnt++;
            }
            else
            {
                std::cout << book1 << " times is:" << cnt << std::endl;
                book1 = book2;
                cnt = 1;
            }
        }
        std::cout << book1 << " times is:" << cnt << std::endl;
    }
    else
    {
        std::cout << "err" << std::endl;
    }
}

void ch1()
{
    //t1_23();
    std::cout << "hello,world" << std::endl;
}



/*
    //exercise 1.9  the sum 50-100
    int start = 50;
    int sum = 0;
    while (start <= 100)
    {
        sum += start;
        ++start;
    }
    std::cout << "the sum between 50 to 100 is " << sum << std::endl;

    // 1.10   10-0之间的整数
    int end = 10;
    while (end >= 0)
    {
        std::cout << end << std::endl;
        --end;
    }

    //1.11输出两个整数之间的所有整数
    int v1 = 0, v2 = 0;
    std::cout << "please two input number:" << std::endl;
    std::cin >> v1 >> v2;
    while (v2 >= v1)
    {
        std::cout << v1 << std::endl;
        ++v1;
    }


 */