#include <iostream>
using namespace std;
void findtarget(int arr[], int n, int target)
{
    bool hasFindPair = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                hasFindPair = true;
                cout << "Pair Found : " << arr[i] << " & " << arr[j] << endl;
            }
        }
    }
    if (hasFindPair == false)
    {

        cout << "Pair is not Found.";
    }
}
int main()
{
    int arr[] = {8, 7, 2, 5, 3, 1};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    findtarget(arr, n, target);

    return 0;
}