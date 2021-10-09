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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    // cin >> tcs;
    for (int tc = 1; tc <= tcs; tc++)
    {
        int n, k; cin >> n >> k; int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int presum = 0;
        for (int i = 0; i < k; i++)
            presum += a[i];
        vector<int> ans;
        ans.push_back(presum);
        for (int i = k; i < n; i++)
        {
            presum = presum + a[i] - a[i - k];
            ans.push_back(presum);
        }
        for (auto i : ans)
        {
            cout << i << " ";
        }
    }
}


/*

//----INPUT----

8 3
2 -4 3 -1 8 -5 0 6

//----OUTPUT----

1 -2 10 2 3 1

*/
