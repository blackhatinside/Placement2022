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
        unordered_map<int, int> hp;
        int m, n; cin >> m >> n;
        int arr1[m], arr2[n];
        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
            hp.insert({arr1[i], i});
        }
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[j];
            hp.insert({arr2[j], j});
        }
        auto it = hp.begin();
        for (; it != hp.end(); it++)
            cout << it->first << " ";
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

9 8 4 3 1 6 2 5

*/