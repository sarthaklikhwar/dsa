#include <iostream>
#include <iomanip>
using namespace std;
// before using binary search array must be sorted;
// binary search is better than linear search.
int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
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

int main()
{
    int n;
    cin >> n;
    // cout<<endl;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cin >> key;
    return 0;
}