//Given an array of integers, and a number ‘sum’, find the number of pairs of integers in the array whose sum is equal to ‘sum’.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getPairsCount(int arr[], int n, int k)
{
    // code here
    int count = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        int x = k - arr[i];

        if (map[x] == 0)
        {
            map[arr[i]]++;
        }
        else
        {
            count += map[x];
            map[arr[i]]++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << getPairsCount(arr, n, sum);
    return 0;
}