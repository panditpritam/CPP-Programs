#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The max number is : " << a << endl;
        }
        else
        {
            cout << "The max number is : " << c << endl;
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            cout << "The max number is : " << b << endl;
        }
        else
        {
            cout << "The max number is : " << c << endl;
        }
    }
}