#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World" << endl;
    int a;
    a = 12;

    cout << "size of int a = " << sizeof(a) << endl;

    float b;
    cout << "size of float b = " << sizeof(b) << endl;

    char c;
    cout << "size of char c = " << sizeof(c) << endl;

    short int si;
    long int li;

    cout << "size of short int = " << sizeof(si) << endl;
    cout << "size of long int = " << sizeof(li) << endl;

    return 0;
}