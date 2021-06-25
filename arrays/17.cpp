// Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int printFirstRepeating(int arr[], int n)
{
    //code here
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (map[arr[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    int index = printFirstRepeating(arr, n);
    cout << arr[index];
}