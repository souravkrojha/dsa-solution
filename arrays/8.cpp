// Given an array arr of integer elements, the task is to find the range and coefficient of range of the given array where:
//Range : Difference between the maximum value and the minimum value in the distribution.Coefficient of Range : (Max – Min) / (Max + Min).

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void findRangeAndCoefficient(int arr[], int n)
{
    int min = getMin(arr, n);
    int max = getMax(arr, n);

    int range = max - min;
    float coefficient = (max - min) / (max + min);

    cout << "Range:" << range << endl;
    cout << "Coefficient:" << coefficient << endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 10, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    findRangeAndCoefficient(arr, n);
    return 0;
}
