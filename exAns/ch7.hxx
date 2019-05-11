//
// Created by ys on 2019/5/10.
//

#ifndef CPP_CH7_HXX
#define CPP_CH7_HXX

#include <string>
#include <c++/iostream>

using std::string;
using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
struct Sales_data;

istream &read(istream &, Sales_data &);

struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;


    Sales_data() = default;

    Sales_data(const string &s) : bookNo(s)
    {}

    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n)
    {}

    Sales_data(istream &is)
    { read(is, *this); };

    string isbn() const
    { return bookNo; }

    Sales_data &comnine(const Sales_data &);

    double avg_price() const;
};


Sales_data add(const Sales_data &, const Sales_data &);

ostream &print(ostream &, const Sales_data &);


struct Person
{
    string name;
    string address;

    Person() = default;

    Person(const string s, const string addr) : name(s), address(addr)
    {}

    string getName() const
    { return name; }

    string getAddr() const
    { return address; }

    void print()
    { cout << name << " " << address << endl; }

    istream &read(istream &is)
    {
        is >> name >> address;
        return is;
    }
};

void test_ch7();

void ex7_3();

#endif //CPP_CH7_HXX
