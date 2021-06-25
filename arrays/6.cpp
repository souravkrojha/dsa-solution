//Given an array, a[], and an element x, find a number of occurrences of x in a[].

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findFreq(int a[], int n, int x)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[a[i]]++;
    }
    return map[x];
}
int main(int argc, char const *argv[])
{
    int a[] = {1, 3, 2, 4, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << findFreq(a, n, 2) << endl;
    cout << findFreq(a, n, 3) << endl;
    cout << findFreq(a, n, 5) << endl;
    return 0;
}
