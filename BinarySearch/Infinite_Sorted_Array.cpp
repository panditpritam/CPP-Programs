#include <iostream>
using namespace std;
int binary_search(int arr[], int key, int low, int high)
{
    int s = low;
    int e = high;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int Search_Infinite(int arr[], int key)
{
    int low = 0;
    int high = 1;
    while (arr[high] < key)
    {
        low = high;
        high = 2 * high;
    }
    return binary_search(arr, key, low, high);
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
    int key;
    cin >> key;
    Search_Infinite(arr, key);

    return 0;
}