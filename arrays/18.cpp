// Find the first non-repeating element in a given array of integers.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int firstNonRepeating(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[arr[i]] == 1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[] = {9, 4, 9, 6, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstNonRepeating(arr, n);
    return 0;
}