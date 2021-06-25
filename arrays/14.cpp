//Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printRepeating(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[abs(arr[i])] >= 0)
        {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        }
        else
        {
            cout << abs(arr[i]) << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 1, 3, 6, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, arr_size);
    return 0;
    return 0;
}
