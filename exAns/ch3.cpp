//
// Created by ys on 2019/5/4.
//

#include "ch3.cxx"
#include <iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;


void ex3_4()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 != s2)
    {
        if(s1 > s2)
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

    if((s1.size() != s2.size()))
    {
        if(s1.size() > s2.size())
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


void testCh3()
{

    string s("some thing");
    if(!s.empty())
    {
        s[0] = toupper(s[0]);
    }

    cout << s << endl;
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