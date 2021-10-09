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
        int ans = 0;
        for (int i = 0, j = n - 1; i <= j;)
        {
            if (arr[i] == arr[j])
            {
                i++;
                j--;
            }
            else if (arr[i] > arr[j])
            {
                j--;
                arr[j] = arr[j] + arr[j + 1];
                ans++;
            }
            else
            {
                i++;
                arr[i] = arr[i] + arr[i - 1];
                ans++;
            }
        }
        cout << ans << "\n";
    }
}


/*

//----INPUT----

2
7
3 7 90 20 10 50 40
5
1 4 5 9 1

//----OUTPUT----

4
1

*/