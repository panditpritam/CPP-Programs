#include <iostream>
using namespace std;
int binarysearch(int arr[], int s, int e, int key)
{
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

int countoccurrence(int arr[], int n, int key)
{
    int index = binarysearch(arr, 0, n - 1, key);

    int count = 1;
    int left = index - 1;
    while (left >= 0 && arr[left] == key)
    {
        count++, left--;
    }

    int right = index + 1;
    while (right < n && arr[right] == key)
    {
        count++, right++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 6, 6, 8, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    cout << countoccurrence(arr, n, key);

    return 0;
}