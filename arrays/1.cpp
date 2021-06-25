//Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to find that the key x present in every segment of size k in arr[].
// Input : arr[] = {3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3}
// x = 3
//k = 3
//Output : Yes
// There are 4 non - overlapping segments of size k in the array,{3, 5, 2}, {4, 9, 3}, {1, 7, 3} and {11, 12, 3}.3 is present all segments.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool findxinkwindowSize(int arr[], int x, int k, int n)
{
    int i;
    for (i = 0; i < n; i = i + k)
    {
        int j;
        for (j = 0; j < k; j++)
        {
            if (arr[i + j] == x)
            {
                break;
            }
            if (j == k)
            {
                return false;
            }
        }
    }

    if (i == n)
    {
        return true;
    }
    int j;
    for (j = i - k; j < n; j++)
    {
        if (arr[j] == x)
        {
            break;
        }
    }
    if (j == n)
    {
        return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3};
    int x = 3, k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (findxinkwindowSize(arr, x, k, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
    return 0;
}