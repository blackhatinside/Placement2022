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
    {
        int n; cin >> n; int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x, s = 0, c = 0; cin >> x;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            s = s + a[i];
            if (s > x) break;
            c = c + 1;
        }
        cout << c << "\n";
    }
}


/*

//----INPUT----

1
5
24 21 23 25 22
66

//----OUTPUT----

3

*/