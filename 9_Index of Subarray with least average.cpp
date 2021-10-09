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
        int k; cin >> k;
        int cursum = 0, res_ind = 0;
        for (int i = 0; i < k; i++)
        {
            cursum = cursum + arr[i];
        }
        int minsum = cursum;
        for (int i = k; i < n; i++)
        {
            cursum = cursum + arr[i] - arr[i - k];

            if (cursum < minsum)
            {
                minsum = cursum;
                res_ind = i - k + 1;
            }
        }
        cout << res_ind << " " << res_ind + k - 1;
        cout << "\n";
    }
}


/*

//----INPUT----

1
7
3 7 90 20 10 50 40
3

//----OUTPUT----

3 5

*/