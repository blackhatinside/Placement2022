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
    for (int tc = 1; tc <= tcs; tc++)
    {   //----CIRCULAR ARRAYS----
        //----O(n) time O(n) space----
        // int n; cin >> n; int a[n];
        // for (int i = 0; i < n; i++)
        //     cin >> a[i];
        // int x; cin >> x;    //rotations
        // for (int i = x; i < x + n; i++)
        //     cout << a[i % n] << " ";
        // OR
        //----O(n) time O(1) space----
        int n; cin >> n; int a[2 * n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[n + i] = a[i];
        }
        int x; cin >> x;
        for (int i = x; i < x + n; i++)
            cout << a[i] << " ";
    }
}


/*

//----INPUT----

1
5
21 22 23 24 25
3

//----OUTPUT----

24 25 21 22 23

*/