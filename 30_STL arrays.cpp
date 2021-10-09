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

template<typename T, size_t N>
void printa(array<T, N> &a)
{
    for (T &i : a) cout << i << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    while (tcs--)
    {
        array<int, 5> arr = {1, 2, 3, 4, 5};
        int* ptr = arr.data();
        while (ptr != arr.end())
            cout << *ptr++ << " ";
        cout << "\n";
        ptr = arr.data();
        for (size_t i = 0; i < arr.size(); i++)
            cout << *ptr++ << " ";
    }
}


/*

//----INPUT----

1

//----OUTPUT----

1 2 3 4 5
1 2 3 4 5

*/