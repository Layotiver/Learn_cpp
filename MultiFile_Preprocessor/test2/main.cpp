#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

/*
感受一下define的骚操作X Macros
*/

char N2C(int a)
{
    switch (a)
    {
#define DEFINE_N2C(number, character) \
    case number:                      \
        return character;
#include "head.h"
#undef DEFINE_N2C
    default:
        return '#';
    }
}

int main()
{
    cout << N2C(13) << endl;
}