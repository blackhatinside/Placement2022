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
        unordered_set<int> hp, ans;
        int m, n; cin >> m >> n;
        int arr1[m], arr2[n];
        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
            hp.insert(arr1[i]);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[j];
            if (hp.find(arr2[j]) != hp.end())
            {
                ans.insert(arr2[j]);
            }
        }
        auto it = ans.begin();
        for (; it != ans.end(); it++)
            cout << *it << " ";
        cout << "\n";
    }
}


/*

//----INPUT----

1
7
9
1 2 5 6 2 3 5
2 4 5 6 8 9 4 6 5

//----OUTPUT----

6 5 2

*/