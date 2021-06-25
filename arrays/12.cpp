/*You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// this method used when the n is very large to avoid overflow
// int getMissingNo(int a[], int n)
// {
//     int i, total = 1;
//     for (i = 2; i <= (n + 1); i++)
//     {
//         total += i;
//         total -= a[i - 2];
//     }
//     return total;
// }

int getMissingNo(int arr[], int n)
{
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
        total -= arr[i];
    }
    return total;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}