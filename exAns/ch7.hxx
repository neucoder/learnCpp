//
// Created by ys on 2019/5/10.
//

#ifndef CPP_CH7_HXX
#define CPP_CH7_HXX

#include <string>
#include <c++/iostream>
#include <vector>

using std::vector;
using std::string;
using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
struct Sales_data;


class X
{
public:
    X(string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price)
    {
        cout << "委托函数三参数执行..." << endl;
    }

    X() : X("", 0, 0)
    {
        cout << "无参数构造函数执行" << endl;
    }

    X(string s) : X(s, 0, 0)
    { cout << "参数s的构造函数被执行"; }

    X(int a) : X()
    {
        units_sold = a;
        bookNo = " _";
        revenue = 0.0;
        cout << "参数a的构造函数be执行" << endl;
    }

    string bookNo;
    int units_sold = 0;
    double revenue = 0;
};


class Window_mgr;

class Screen;

class Sales_data
{
    friend Sales_data add(const Sales_data &, const Sales_data &);

    friend istream &read(istream &, Sales_data &);

    friend ostream &print(ostream &, const Sales_data &);

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    double avg_price() const;

public:
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


};

inline double Sales_data::avg_price() const
{
    if (units_sold)
    {
        return revenue / units_sold;
    }
    else
    {
        return 0;
    }
}

istream &read(istream &, Sales_data &);

Sales_data add(const Sales_data &, const Sales_data &);

ostream &print(ostream &, const Sales_data &);


class Person
{
private:
    string name;
    string address;
public:
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

class Screen;

class Window_mgr
{
public:
    using ScreenIndex = vector<Screen>::size_type;

    void clear(ScreenIndex i);

private:
    //创建一个空白的Screen
    vector<Screen> screens;
};

class Screen
{
    friend void Window_mgr::clear(Window_mgr::ScreenIndex i);

public:
    using pos = string::size_type;

    pos size() const;

    Screen() = default;

    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ')
    {}

    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c)
    {}

    char get() const
    { return contents[cursor]; }

    inline char get(pos r, pos c) const;

    Screen &move(pos r, pos c);

    void some_member() const;

    Screen &set(char);

    Screen &set(pos, pos, char);

    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }

    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(ostream &os) const
    { os << contents; }

    mutable size_t access_ctr;
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};


inline Screen &Screen::move(Screen::pos r, Screen::pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(Screen::pos r, Screen::pos c) const
{
    pos row = r * width;
    return contents[row + c];
}


inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(Screen::pos r, Screen::pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}







void test_ch7();

void ex7_3();

#endif //CPP_CH7_HXX
