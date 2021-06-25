// Sort an array of 0s, 1s and 2s
// without using any sorting algo

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void sortArr(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        switch (arr[i])
        {
        case 0:
            count0++;
            break;
        case 1:
            count1++;
            break;
        case 2:
            count2++;
            break;
        default:
            break;
        }
    }

    int i = 0;
    while (count0 > 0)
    {
        arr[i++] = 0;
        count0--;
    }
    while (count1 > 0)
    {
        arr[i++] = 1;
        count1--;
    }
    while (count2 > 0)
    {
        arr[i++] = 2;
        count2--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(int);

    sortArr(arr, n);
    printArr(arr, n);
    return 0;
}
