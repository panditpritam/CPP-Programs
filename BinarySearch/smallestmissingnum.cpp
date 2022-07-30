#include <iostream>
using namespace std;
int smalllest_missing_num(int arr[], int s, int e)
{

    while (s <= e)
    {
        if (s > e)
        {
            return e + 1;
        }
        if (s != arr[s])
        {
            return s;
        }

        int mid = (s + e) / 2;
        if (arr[mid] == mid)
        {
            return smalllest_missing_num(arr, mid + 1, e);
        }
        else
        {
            return smalllest_missing_num(arr, s, mid);
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = n;

    int result = smalllest_missing_num(arr, 0, n - 1);
    cout << "The smallest missing element in the array is : " << result;

    return 0;
}