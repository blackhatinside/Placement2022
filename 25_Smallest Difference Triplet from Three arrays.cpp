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

int mini(int a, int b, int c)
{
    return min(min(a, b), c);
}

int maxi(int a, int b, int c)
{
    return max(max(a, b), c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    while (tcs--)
    {
        int m, n, p; cin >> m >> n >> p;
        int arr1[m], arr2[n], arr3[p];
        int i, j, k;
        for (i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        for (j = 0; j < n; j++)
        {
            cin >> arr2[j];
        }
        for (k = 0; k < p; k++)
        {
            cin >> arr3[k];
        }
        sort(arr1, arr1 + m);
        sort(arr2, arr2 + n);
        sort(arr3, arr3 + p);
        int summ, diff = INT_MAX;
        int res_min, res_max, res_mid;
        int max = 0, min = 0, sum = 0;
        i = 0, j = 0, k = 0;
        while (i < n && j < n && k < n)
        {
            sum = arr1[i] + arr2[j] + arr3[k];
            max = maxi(arr1[i], arr2[j], arr3[k]);
            min = mini(arr1[i], arr2[j], arr3[k]);
            if (min == arr1[i])
            {
                i++;
            }
            else if (min == arr2[j])
            {
                j++;
            }
            else
            {
                k++;
            }
            if ((max - min) < diff)
            {
                diff = max - min;
                summ = max + min;
                res_mid = sum - summ;
                res_max = max;
                res_min = min;
            }
        }
        cout << res_max << " ";
        cout << res_mid << " ";
        cout << res_min << " ";
        cout << "\n";
    }
}


/*

//----INPUT----

1
3
3
3
5 2 8
10 7 12
9 14 6

//----OUTPUT----

7 6 5

*/