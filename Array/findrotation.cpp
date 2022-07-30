#include <iostream>
using namespace std;

int findrotation(int arr[], int n)
{
    int s = 0;
    int e = n;
    int count = 0;
    int lowno = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lowno)
        {
            count += 1;
        }
        return count;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int count = 0;

    cout << findrotation(arr, n);
    return 0;
}