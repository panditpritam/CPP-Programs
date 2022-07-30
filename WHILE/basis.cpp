#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter any number : ";
    cin >> n;

    while (n > 0)
    {
        cout << n << endl;
        cout << "This is a positive number." << endl;
        cin >> n;
    }

    return 0;
}