//
// Created by ys on 2019/5/4.
//

#include "ch3.cxx"
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

void ex3_4()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 != s2)
    {
        if (s1 > s2)
        {
            cout << "the big string is " << s1 << endl;
        }
        else
        {
            cout << "the big string is " << s2 << endl;
        }
    }
    else
    {
        cout << "s1 == s2" << endl;
    }

    if ((s1.size() != s2.size()))
    {
        if (s1.size() > s2.size())
        {
            cout << "the big length of the string is " << s1 << endl;
        }
        else
        {
            cout << "the big length of the string is " << s2 << endl;

        }
    }
    else
    {
        cout << "s1.size() == s2.size()" << endl;
    }
}


void ex3_5()
{
    string s;
    string ss = "";
    while (cin >> s)
    {
        ss = ss + s + "\n";
    }

    cout << ss << endl;
}

void ex3_6()
{
    string s = "1abckj78992";
    cout << s << endl;
    for (char c : s)
    {
        c = 'x';
    }

    cout << s << endl;

}


void ex3_8()
{
    string s("a simple string");
    decltype(s.size()) i = 0;
    cout << s << endl;
    while (i < s.size())
    {
        s[i] = 'x';
        ++i;
    }
    cout << s << endl;
    s = "a simple string";
    for (i = 0; i < s.size(); ++i)
    {
        s[i] = 'x';
    }
    cout << s << endl;
}


void ex3_10()
{
    string s1, s2 = "";
    cin >> s1;
    for (auto c : s1)
    {
        if (!ispunct(c))
        {
            s2 += c;
        }
    }

    cout << s1 << endl;
    cout << s2 << endl;
}


void ex3_11()
{
    const string s = "Keep out!";
    for (auto &c : s)
    {
        cout << c << endl;
    }
}

void ex_vector()
{

    //统计成绩分段的程序
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade / 10];
        }
    }
    for (auto i : scores)
    {
        cout << i << " ";
    }
    /*
//    范围for语句
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for (auto &i : v)
    {
        i *= i;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;*/

//    vector<int> v2;
//    for (int i = 0; i < 100; ++i)
//    {
//        v2.push_back(i);
//    }
//
//    cout << v2.size() << endl;
}


void ex3_14()
{
    vector<int> v1;
    int a;
    while (cin >> a)
    {
        v1.push_back(a);
    }
    cout << v1.size() << endl;
}


void ex3_15()
{
    vector<string> v1;
    string a;
    while (cin >> a)
    {
        v1.push_back(a);
    }
    cout << v1.size() << endl;
}


void ex3_16()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << "v1  0 has " << v1.size() << " element" << endl;
    cout << "v2 10 has " << v2.size() << " element" << endl;
    cout << "v3 10 has " << v3.size() << " element" << endl;
    cout << "v4  1 has " << v4.size() << " element" << endl;
    cout << "v5  2 has " << v5.size() << " element" << endl;
    cout << "v6 10 has " << v6.size() << " element" << endl;
    cout << "v7 10 has " << v7.size() << " element" << endl;

}


void ex3_17()
{
    vector<string> v;
    string word;
    while (cin >> word)
    {
        v.push_back(word);
    }

    for (auto &c : v)
    {
        for (auto &a : c)
        {
            a = toupper(a);
        }
    }

    for (auto c : v)
    {
        cout << c << " ";
    }
}


void ex3_18()
{
    vector<int> ivec;
    ivec.push_back(42);
    cout << ivec[0] << endl;

}

void ex3_19()
{
    vector<int> v(10, 42);
    vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v2;
    for (int i = 0; i < 10; ++i)
    {
        v2.push_back(42);
    }


}

void ex3_20()
{
    vector<int> v;
    int num;
    while (cin >> num)
    {
        v.push_back(num);
    }
    if (v.size() == 0)
    {
        cout << "0 element can not add" << endl;
    }
    else if (v.size() == 1)
    {
        cout << "only one element can not add" << endl;
    }
    else
    {
        for (int i = 0; i < v.size() - 1; ++i)
        {
            cout << v[i] + v[i + 1] << " ";
        }
        cout << endl;
    }


    if (v.size() % 2)
    {
        for (int j = 0; j < v.size() / 2 + 1; ++j)
        {
            cout << v[j] + v[v.size() - 1 - j] << " ";
        }
    }
    else
    {
        for (int j = 0; j < v.size() / 2; ++j)
        {
            cout << v[j] + v[v.size() - 1 - j] << " ";
        }
    }


}

void print_vec_int(vector<int> v1)
{
    cout << "the size of v1 is:" << v1.size() << endl;
    for (auto c = v1.begin(); c != v1.end(); ++c)
    {
        cout << *c << " ";
    }
    cout << endl;
}


void print_vec_string(vector<string> v1)
{
    cout << "the size of v1 is:" << v1.size() << endl;
    for (auto c = v1.begin(); c != v1.end(); ++c)
    {
        cout << *c << " ";
    }
    cout << endl;
}

void ex3_21()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    print_vec_int(v1);
    print_vec_int(v2);
    print_vec_int(v3);
    print_vec_int(v4);
    print_vec_int(v5);
    print_vec_string(v6);
    print_vec_string(v7);

}


void ex3_22()
{
    vector<string> text = {"yes it is a beautiful day.\nI like it very much", "", "nice boy"};

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto c = it->begin(); c != it->end(); ++c)
        {
            *c = toupper(*c);
        }
        cout << *it << " ";
    }
}

void ex3_23()
{
    vector<int> v;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(i);
    }

    for (auto c : v)
    {
        cout << c << "\t";
    }
    cout << endl;
    for (auto c = v.begin(); c != v.end(); ++c)
    {
        *c = 2 * (*c);

    }

    for (auto c : v)
    {
        cout << c << "\t";
    }
    cout << endl;
}

void ex3_24()
{
    vector<int> v;
    int n;
    while (cin >> n)
    {
        v.push_back(n);
    }

    if (v.empty())
    {
        cout << "vector is empty" << endl;
    }
    else if (v.size() == 1)
    {
        cout << " only one element " << endl;
    }
    else
    {
        for (auto c = v.begin(); c < v.end() - 1; ++c)
        {
            cout << *c + *(c + 1) << " ";
        }
    }

    cout << endl;


    for (auto c = v.begin(), e = v.end() - 1; c <= e; ++c, --e)
    {
        cout << *c + *e << " ";
    }

    cout << endl;

}


void ex3_26()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto c = scores.begin();
    for (auto c1 : scores)
    {
        cout << c1 << " ";
    }
    cout << endl;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            (*(c + grade / 10))++;
        }
    }

    for (auto c1 : scores)
    {
        cout << c1 << " ";
    }
    cout << endl;

}


void ex3_31()
{
    int a[10] = {};
    for (size_t i = 0; i < 10; ++i)
    {
        a[i] = i;
    }

    for (auto c : a)
    {
        cout << c << " ";
    }
    cout << endl;
}

void ex3_32()
{
    int a[10] = {};
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    int b[10] = {};
    for (int j = 0; j < 10; ++j)
    {
        b[j] = a[j];
    }

    vector<int> c(10);
    for (auto iter = c.begin(); iter != c.end(); ++iter)
    {
        *iter = iter - c.begin();
    }

    for (auto iter : c)
    {
        cout << iter << " ";
    }

}



void testCh3()
{


    int arr[] = { 90, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> v(begin(arr), end(arr));

    for (auto i : v) cout << i << " ";
    cout << endl;


    /*
    int a[3][4] = {0, 3, 6, 9};

    for (auto &c : a)
    {
        for (auto t : c)
        {
            cout << t << "\t";
        }
        cout << endl;
    }
    cout << endl;
    for (auto p = begin(a); p != end(a); p++)
    {
        for (auto pp = begin(*p); pp != end(*p); ++pp)
        {
            cout << *pp << "\t";
        }
        cout << endl;
    }
*/
//    int arr[] = {0,1,2,3,4,-1,5,6,7,8,9};
//
//    int *start = begin(arr);
//    int *stop = end(arr);
//    while (start < stop && *start >= 0)
//    {
//        start++;
//    }
//    cout << *start << endl;






    // ex3_32();
    //ex3_24();



    /*
    //数组
    unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            ++scores[grade / 10];
        }
    }

    for (auto cc : scores)
    {
        cout << cc << " ";
    }
    cout << endl;


     */
    //ex3_24();
    /*
    //二分搜索
    vector<string> text = {"a", "b", "c", "d", "e", "f", "g", "h"};
    string sought = "g";
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }

        mid = beg + (end - beg) / 2;
        //mid = (beg + end) / 2;
    }
    cout << *mid << endl;
    cout << sought << endl;

     */
    //
    // ex3_23();

//    string s("some thing");
//    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
//    {
//        *it = toupper(*it);
//    }
//
//    cout << s << endl;


    //ex3_20();
    //ex_vector();
    //ex3_11();
//    const string hexdigits = "0123456789ABCDEF";
//    cout << "Enter a series of numbers between 0 and 15"
//         << " separated by spaces.Hit ENTER when finished: "
//         << endl;
//    string result;
//    string::size_type n;
//    while (cin >> n)
//    {
//        if(n < hexdigits.size())
//        {
//            result += hexdigits[n];
//        }
//    }
//
//    cout << result;


//    string s("some thing");
//    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
//    {
//        s[index] = toupper(s[index]);
//    }

//    cout << s << endl;

//    string s("some thing");
//    if(!s.empty())
//    {
//        s[0] = toupper(s[0]);
//    }
//
//    cout << s << endl;
//    string s("hello World!!!");
//    //转换成大写形式
//    for (auto &c : s)
//    {
//        c = toupper(c);
//    }
//
//    cout << s << endl;


//    string s("hello world!!!");
//    decltype(s.size()) punct_cnt = 0;
//    string::size_type n = 0;
//    for (auto c : s)
//    {
//        if(ispunct(c))
//        {
//            ++punct_cnt;
//            ++n;
//        }
//    }
//
//    cout << punct_cnt << " punctuation characters in " << s << endl;
//    cout << "the number of n is " << n << endl;
//


//    string s("hello,world");
//    string s1{"hello,worldkkk"};
//    for (auto c : s)
//    {
//        cout << c << endl;
//    }
//
//    for (auto c : s1)
//    {
//        cout << c << endl;
//    }
    //ex3_5();


//    string s1 = "abc";
//    string s2 = "abcd";
//    if(s1 > s2)
//    {
//        cout << "abc > abcd" << endl;
//    }
//    else
//    {
//        cout << "abcd > abc" << endl;
//    }




//    string word;
//    getline(cin, word);
//    cout << word << endl;
//    cin >> word;
//    cout << word << endl;
//    cout << word.size() << endl;
//    if(word.empty())
//    {
//        cout << "word is empty" << endl;
//    }
//    else
//    {
//        cout << "word is not empty" << endl;
//    }
//    string s1, s2;
//    cin >> s1 >> s2;
//    cout << s1 << s2 << endl;

}