#include <iostream>
using namespace std;

int main()
{
    for (int counter = 0; counter < 5; counter++)
    {
        for (int i = 5; i > counter; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}