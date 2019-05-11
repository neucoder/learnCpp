//
// Created by ys on 2019/5/10.
//

#include "ch7.hxx"
#include <iostream>
#include <vector>
#include <cstddef>
#include <iterator>
#include <stdexcept>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::begin;
using std::end;
using std::cerr;
using std::ostream;
using std::istream;

Sales_data &Sales_data::comnine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}


istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.comnine(rhs);
    return sum;
}

/*
void ex7_3()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> total.revenue)
        {
            if (total.isbn() == trans.isbn())
            {
                total.comnine(trans);
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;

    }

    else
    {
        cerr << "No data?!" << endl;
    }
}
*/
class Anime
{
    string name;
    int age;
public:
    Anime(const string &s, const int a) : name(s), age(a)
    {}

    string getName() const
    { return name; }

    int getAge() const
    { return age; }

};

Screen::pos Screen::size() const
{
    return height * width;
}
void ex7_7()
{
    Sales_data total;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.comnine(trans);
            }
            else
            {
                print(cout, total);
                total = trans;
                cout << endl;
            }
        }
        print(cout, total);
        cout << endl;
    }

    else
    {
        cerr << "No data?!" << endl;
    }
}


void ex7_13()
{
    Sales_data total(cin);
    if (cin)
    {
        Sales_data trans(cin);
        while (cin)
        {
            if (total.isbn() == trans.isbn())
            {
                total.comnine(trans);
            }
            else
            {
                print(cout, total);
                total = trans;
                cout << endl;
            }
        }
        print(cout, total);
        cout << endl;
    }

    else
    {
        cerr << "No data?!" << endl;
    }
}


void Screen::some_member() const
{
    ++access_ctr;
}

int &changeValue(int &a)
{
    a = a * a;
    return a;
}

inline void Window_mgr::clear(Window_mgr::ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}








void test_ch7()
{


    X a3("999", 12, 1.2);
    /*
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";

     */
//    Anime cat("hua", 3);
//    cout << cat.getName() << " " << cat.getAge() << endl;

    //Person p("zhang", "us");
    //p.print();
    //ex7_13();
    /*
    Sales_data item1;
    print(cout, item1);
    cout << endl;
    Sales_data item2(cin);
    print(cout, item2);
    cout << endl;
    Sales_data item3("123-x",5, 4);
    print(cout, item3);
    cout << endl;
    Sales_data item4("123-x");
    print(cout, item4);
    cout << endl;
     */
    //ex7_7();
}
