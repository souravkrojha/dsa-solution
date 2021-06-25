//Given an array arr[] of size N, the task is to sort this array in ascending order in C.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {0, 23, 14, 12, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);

    sort(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);

    return 0;
}
