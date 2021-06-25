//Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//quick select algo with time O(n)-average and O(n^2)-wrost
int quickPartition(int arr[], int start, int end)
{
    int x = arr[end];
    int i = start;

    for (int j = start; j < end - 1; j++)
    {
        if (arr[j] <= x)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;

    return i;
}

int kthSmallestQuickSelect(int arr[], int start, int end, int k)
{

    if (k > 0 && k <= end - start + 1)
    {
        int pivot = quickPartition(arr, start, end);
        if (pivot - start == k - 1)
        {
            return arr[pivot];
        }
        if (pivot - start > k - 1)
        {
            return kthSmallestQuickSelect(arr, start, pivot - 1, k);
        }
        return kthSmallestQuickSelect(arr, pivot + 1, end, k - pivot + start - 1);
    }
    return INT_MAX;
}

// heap solution with time O(nlog(k))
int kthSmallest(int arr[], int start, int end, int k)
{
    priority_queue<int> maxheap;
    for (int i = 0; i <= end; i++)
    {
        maxheap.push(arr[i]);
        if (maxheap.size() > k)
        {
            maxheap.pop();
        }
    }
    return maxheap.top();
}
int kthLargest(int arr[], int end, int k)
{
    priority_queue<int, vector<int>, greater<int>> minheap;
    for (int i = 0; i <= end; i++)
    {
        minheap.push(arr[i]);
        if (minheap.size() > k)
        {
            minheap.pop();
        }
    }
    return minheap.top();
}
int main(int argc, char const *argv[])
{

    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr) / sizeof(arr[0]), k = 3;

    cout << "K'th smallest element is " << kthSmallestQuickSelect(arr, 0, n - 1, k) << endl;
    cout << "K'th Largest element is " << kthLargest(arr, n - 1, k) << endl;

    return 0;
}
