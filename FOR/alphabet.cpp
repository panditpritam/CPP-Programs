#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << endl
         << "Alphabet from A to Z are : " << endl
         << endl;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch << "  ";
    }

    return 0;
}