#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int max;
    cout << "Enter any three number : ";
    cin >> num1, num2, num3;

    if (num1 > num2 && num1 > num3)
    {
        // max == num1;
        cout << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        max == num2;
    }
    else
    {
        max == num3;
    }

    cout << "The max number is : " << max << endl;

    return 0;
}