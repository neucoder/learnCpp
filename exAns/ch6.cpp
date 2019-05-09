//
// Created by ys on 2019/5/8.
//

#include "ch6.hxx"
#include <iterator>
#include <iostream>
#include <vector>
#include <cstddef>
#include <stdexcept>
#include <initializer_list>


using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::begin;
using std::end;


size_t count_calls()
{
    static size_t ctr = 0;
    return ++ctr;
}


void pSwap(int *p1, int *p2)
{
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void rSwap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

using std::initializer_list;

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
    {
        cout << *beg << " ";
    }
    cout << endl;
}

int sumInt(initializer_list<int> s)
{
    int sum = 0;
    for (const auto &c : s)
    {
        sum += c;
    }
    return sum;
}

void swap()
{

    return;
}


bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
    {
        return str1 == str2;
    }
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i])
            return 0;
    }
}

using Iter = std::vector<int>::const_iterator;

void ex6_34(Iter b, Iter e)
{
    if (b == e)
    {
        cout << "Over!" << endl;
        return;
    }
    cout << *b << " " << endl;
    ex6_34(++b, e);

}

int fun()
{

}

void fun(int a)
{

}


void f()
{

}

void f(int)
{

}

void f(int, int)
{

}

void f(double, double)
{

}

void test_ch6()
{


    /*
    vector<int > v = {1,2,3,4,5};
    ex6_34(v.begin(), v.end());

*/

    //error_msg({"fatal", "error", ":", "stop!"});
    //cout << "The sum of the list is {1,3,5,7,9}:" << sumInt({1,3,5,7,9}) << endl;

    /*
    int a = 3, b = 5;
    cout << "a: " << a << " b: " << b << endl;
    pSwap(&a, &b);
    cout << "a: " << a << " b: " << b << endl;
    a = 3, b = 5;
    rSwap(a, b);
    cout << "a: " << a << " b: " << b << endl;
    */

    /*
    for (int i = 0; i < 10; ++i)
    {
        cout << count_calls() << endl;
    }
     */
}