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

#define endl "\n"

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    for (int tc = 1; tc <= tcs; tc++)
    {
        int ans = 0, dec = 0;
        int n, k; cin >> n >> k; int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i - 1] - 1)
                dec++;
            else
                dec = 0;
            if (a[i] == 1 and dec >= k - 1)
                ans++;
        }
        cout << ans << endl;
    }
}


/*

//----INPUT----

3
12 3
1 2 3 7 9 3 2 1 8 3 2 1
4 2
101 100 99 98
9 6
100 7 6 5 4 3 2 1 100

//----OUTPUT----

2
0
1

*/
