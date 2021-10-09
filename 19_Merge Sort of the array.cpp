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

void merge(int array[], int const left, int const mid, int const right)
{
    auto const SA1 = mid - left + 1;
    auto const SA2 = right - mid;
    auto *leftArray = new int[SA1],
    *rightArray = new int[SA2];
    for (auto i = 0; i < SA1; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < SA2; j++)
        rightArray[j] = array[mid + 1 + j];
    auto ind_SA1 = 0,
         ind_SA2 = 0;
    int ind_MA = left;
    while (ind_SA1 < SA1 && ind_SA2 < SA2) {
        if (leftArray[ind_SA1] <= rightArray[ind_SA2]) {
            array[ind_MA] = leftArray[ind_SA1];
            ind_SA1++;
        }
        else {
            array[ind_MA] = rightArray[ind_SA2];
            ind_SA2++;
        }
        ind_MA++;
    }
    while (ind_SA1 < SA1) {
        array[ind_MA] = leftArray[ind_SA1];
        ind_SA1++;
        ind_MA++;
    }
    while (ind_SA2 < SA2) {
        array[ind_MA] = rightArray[ind_SA2];
        ind_SA2++;
        ind_MA++;
    }
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursivly

    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    // cin >> tcs;
    for (int tc = 1; tc <= tcs; tc++)
    {
        int n; cin >> n; int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mergeSort(a, 0, n - 1);
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
}



/*

//----INPUT----

6
4 6 5 1 3 2

//----OUTPUT----

1 2 3 4 5 6

*/
