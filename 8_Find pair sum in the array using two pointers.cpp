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

int n, i = 0, j = n - 1;
int isPairSum(int *A, int n, int k)
{
    while (i < j)
    {
        if (A[i] + A[j] == k)
            return 1;
        if (A[i] + A[j] > k)
            j = j - 1;
        if (A[i] + A[j] < k)
            i = i + 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    while (tcs--)
    {
        cin >> n; int A[n];
        for (int x = 0; x < n; i++)
        {
            cin >> A[i];
        }
        int key; cin >> key;
        if (isPairSum(A, n, key))
        cout << A[i] << " " << A[j] << endl;
        else
        cout << -1 << endl;
    }
}


/*

//----INPUT----

1
7
3 5 9 2 8 10 11
17

//----OUTPUT----

YES

*/
