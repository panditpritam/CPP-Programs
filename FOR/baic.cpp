#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number you want to print : ";
    cin >> n;

    int sum = 0;
    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
    }

    cout << sum << endl;
    return 0;
}