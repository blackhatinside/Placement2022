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
        int ans = arr[0];
        int max_value = arr[0];
        int min_value = arr[0];
        int choice1, choice2;
        for (int i = 1; i < n; i++)
        {
        choice1=arr[i]*max_value;
	    choice2=arr[i]*min_value;
	    max_value=max(arr[i],max(choice1,choice2));
	    min_value=min(arr[i],min(choice1,choice2));
	    ans=max(ans,max_value);
        }
        cout << ans << "\n";
    }
}

/*

//----INPUT----

4
5
6 -3 -10 0 2
10
8 -2 -2 0 8 0 -6 -8 -6 -1
7
9 0 8 -1 -2 -2 6
9
2 4 3 1 8 -6 9 5 7

//----OUTPUT----

180
288
24

*/
