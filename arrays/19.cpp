// Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1).
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print3largest(int arr[], int n)
{
    if (n < 3)
    {
        cout << "invalid input" << endl;
        return;
    }

    int first, second, third;
    first = second = third = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }
    cout << "Three largest elements are "
         << first << " " << second << " "
         << third << endl;
}
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    print3largest(arr, n);
    return 0;
}
