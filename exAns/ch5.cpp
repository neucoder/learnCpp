//
// Created by ys on 2019/5/7.
//

#include "ch5.hxx"
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

void test_ch5()
{

}