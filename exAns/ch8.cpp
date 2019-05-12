//
// Created by ys on 2019/5/12.
//
#include "ch8.hxx"

#include <iostream>
#include <vector>
#include <cstddef>
#include <iterator>
#include <stdexcept>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::flush;
using std::ends;

istream &ex8_1(istream &is)
{
    string buf;
    while (is >> buf)
    {
        cout << buf << endl;
    }
    is.clear();
    return is;
}


void test_ch8()
{
    vector<int> v;
    cout << v.size() << " " << v.capacity() << endl;
    for (int i = 0; i < 24; ++i)
    {
        v.push_back(i);
    }
    cout << v.size() << " " << v.capacity() << endl;

    cout << "hi!" << endl;
    cout << "hi!" << ends;
    cout << "hi!" << flush;



//   ex8_1(cin);

    /*
    cout << "test ch8 function" << endl;
     */
}