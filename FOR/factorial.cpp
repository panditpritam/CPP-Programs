#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "Enter a number : ";
    cin >> n;
    for (int counter = 1; counter <= n; counter++)
    {
        k = k * counter;
    }
    cout << "The factorial of  "
         << " " << n << "is :  " << k << endl;
}