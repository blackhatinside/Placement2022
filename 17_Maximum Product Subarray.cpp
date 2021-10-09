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
        int maxAns = arr[0];
        int maxVal = arr[0];
        int minVal = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < 0)
                swap(maxVal, minVal);
            maxVal = max(arr[i], maxVal * arr[i]);
            minVal = min(arr[i], minVal * arr[i]);
            maxAns = max(maxAns, maxVal);
        }
        cout << maxAns << "\n";
    }
}

/*

//----INPUT----

3
5
6 -3 -10 0 2
10
8 -2 -2 0 8 0 -6 -8 -6 -1
7
9 0 8 -1 -2 -2 6

//----OUTPUT----

180
288
24

*/
