#include <iostream>
using namespace std;
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a = 23;
    int b = 34;
    cout << "The sum of this two numbers is : ";
    cout << add(a, b) << endl;

    return 0;
}