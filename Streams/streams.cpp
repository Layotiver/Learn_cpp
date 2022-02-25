#include <bits/stdc++.h>
using namespace std;

// ofstream
void test1()
{
    ofstream fout("text.txt", ofstream::out);
    fout << 'a' << endl;
    fout.close();
}

// ifstream
void test2()
{
    ifstream fin("text.txt", ifstream::in);
    int x;
    fin >> x;
    printf("%d\n", x);
}

//getline
void test3()
{
    ifstream fin("text.txt",ifstream::in);
    string line;
    getline(fin,line);
    printf("%s\n",line.c_str());
    getline(fin,line);
    printf("%s\n",line.c_str());
}

int main()
{
    //test1();
    //test2();
    //test3();
}