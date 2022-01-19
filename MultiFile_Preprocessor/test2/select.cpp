#include <cstdio>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <random>
#include <string>
#include <ctime>
using namespace std;

int n;
string s;

int main()
{
    srand(time(NULL));
    n = rand()%11+1;
    switch (n)
    {
#define defin(a, b) \
    case a:         \
        s = b;      \
        break;
#include "WitchToLearn.txt"
#undef defin
    }
    cout << s << endl;
    getchar();
    return 0;
}