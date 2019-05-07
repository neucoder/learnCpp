//
// Created by ys on 2019/5/6.
//

#include "ch4.hxx"
#include <iostream>
#include <vector>
#include <cstddef>
#include <iterator>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::begin;
using std::end;



void ex4_29()
{
    int x[10];
    int *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
}

void test_ch4()
{

    int a = 10;
    const  int &r = a;
    cout << r << endl;
    a = 110;
    cout << r << endl;
//    ex4_29();



    /*
    vector<int> v = {1,2,3,4,-1,5};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
    {
        cout << *pbeg++ << endl;
    }
     */

}