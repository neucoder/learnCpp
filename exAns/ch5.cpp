//
// Created by ys on 2019/5/7.
//

#include "ch5.hxx"
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

void ex1()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0;
    unsigned vtCnt = 0, newLineCnt = 0;
    char ch;

    while (cin >> std::noskipws >> ch)
    {
        switch (ch)
        {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'E':
            case 'e':
                ++eCnt;
                break;
            case 'I':
            case 'i':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'U':
            case 'u':
                ++uCnt;
                break;
            case '\n':
                ++newLineCnt;
                break;
            case '\t':
                ++vtCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            default:;
        }
    }

    cout << "Number of vowel a:\t" << aCnt << endl;
    cout << "Number of vowel e:\t" << eCnt << endl;
    cout << "Number of vowel i:\t" << iCnt << endl;
    cout << "Number of vowel o:\t" << oCnt << endl;
    cout << "Number of vowel u:\t" << uCnt << endl;
    cout << "Number of vowel space:\t" << spaceCnt << endl;
    cout << "Number of vowel vtable:\t" << vtCnt << endl;
    cout << "Number of vowel newline:\t" << newLineCnt << endl;
    cout << "hello, chapter five" << endl;
}

void ex5_12()
{
    unsigned ff = 0, fl = 0, fi = 0;
    char ch;
    while (cin >> std::noskipws >> ch)
    {
        switch (ch)
        {
            case 'f':
            {
                cin >> ch;
                switch (ch)
                {
                    case 'f':
                        ++ff;
                        break;
                    case 'l':
                        ++fl;
                        break;
                    case 'i':
                        ++fi;
                        break;
                    default:;
                }
            }
                break;
            default:;

        }
    }

    cout << "Number of vowel ff:\t" << ff << endl;
    cout << "Number of vowel fl:\t" << fl << endl;
    cout << "Number of vowel fi:\t" << fi << endl;
}

void ex5_14()
{
    string word;
    string::size_type num = 1;
    string pre;
    cin >> pre;
    while (cin >> word)
    {
        if (pre == word)
        {
            ++num;
        }
        else
        {
            cout << pre << " show " << num << " times " << endl;
            pre = word;
            num = 1;
        }
    }
    cout << word << " show " << num << " times " << endl;
}


void ex5_19()
{
    string str1, str2;
    cin >> str1 >> str2;
    do
    {

        if (str1.size() < str2.size())
        {
            cout << "The short string is " << str1 << endl;
        }
        else
        {
            cout << "The short string is " << str2 << endl;

        }
    } while (cin >> str1 >> str2);
}

void ex5_20()
{
    string pre = "", now;
    while (cin >> now)
    {
        if (pre == now)
        {
            if (!isupper(pre[0]))
            {
                continue;
            }
            cout << "The repeat word is :" << now << endl;
            break;
        }
        pre = now;
    }
    if (cin.eof())
    {
        cout << "No word repeat" << endl;
    }
}

using std::runtime_error;

void ex5_23()
{
    int a, b;
    cout << "Input two integers: ";
    while (cin >> a >> b)
    {
        try
        {
            if (b == 0) throw runtime_error("divisor is 0");
            cout << static_cast<double>(a) / b << endl;
            cout << "Input two integers: ";
        }
        catch (runtime_error err)
        {
            cout << err.what();
            cout << "\nTry Again? Enter y or n:" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
}


void test_ch5()
{

    //ex5_23();
    //ex5_20();
    //ex5_14();



    /*
    string rsp;
    do
    {
        cout << "please enter two values: ";
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        cout << "The sum of " << val1 << " and " << val2
             << " = " << val1 + val2 << "\n\n"
             << "More ? Enter yse or no:";
        cin >> rsp;
    } while(!rsp.empty() && rsp[0] != 'n');

     */
}