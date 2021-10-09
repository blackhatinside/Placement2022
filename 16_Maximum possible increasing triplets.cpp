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
    cin >> tcs;
    for (int tc = 1; tc <= tcs; tc++)
    {
        int n; cin >> n; int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        sort(a, a + n);
        sort(b, b + n);
        sort(c, c + n);
        int cnt = 0, i = 0, j = 0, k = 0;
        while (i < n)
        {
            while (j < n and b[j] <= a[i])
                j = j + 1;
            if (j == n)
                break;
            while (k < n and c[k] <= b[j])
                k = k + 1;
            if (k == n)
                break;
            cnt = cnt + 1;
            i++; j++; k++;
        }
        cout << cnt << "\n";
    }
}


/*

//----INPUT----

3
5
9 6 14 1 8
2 10 3 12 11
15 13 5 7 4
1
10
20
30
3
1 1 1
1 1 2
2 2 2

//----OUTPUT----

3
1
0

*/
