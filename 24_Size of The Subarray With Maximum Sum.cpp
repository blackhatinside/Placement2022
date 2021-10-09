/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimization ("unroll-loops")


#include<bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int MaxSumContSubArr(int arr[], int size)
{   /*    KADANE'S ALGORITHM FOR POSITIVE OR NEGATIVE ARRAYS    */
    int maxSum = INT_MIN, curSum = 0;
    int beg = 0, end = 0, start = 0;
    for (int i = 0; i < size; i++)
    {
        curSum = curSum + arr[i];
        if (curSum > maxSum)
        {
            maxSum = curSum;
            beg = start;
            end = i;
        }
        if (curSum < 0)
        {
            curSum = 0;
            start = i + 1;
        }
    }
    return end - beg + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    while (tcs--)
    {
        int n; cin >> n; int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = MaxSumContSubArr(arr, n);
        cout << ans;
        cout << "\n";
    }
}


/*

//----INPUT----

1
6
1 -2 1 1 -2 1

//----OUTPUT----

2

*/