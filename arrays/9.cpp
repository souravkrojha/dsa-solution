//An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//two pointer approach

void shiftArr(int arr[], int left, int right)
{
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
        {
            left--;
        }
        else if (arr[left] > 0 && arr[right] < 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] > 0 && arr[right] > 0)
        {
            right--;
        }
        else
        {
            left++;
            right--;
        }
    }
}

// use this method when the order of the array elements are not  important
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main(int argc, char const *argv[])
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    shiftArr(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}
