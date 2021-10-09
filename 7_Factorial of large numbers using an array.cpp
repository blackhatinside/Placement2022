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

#define MAXDIGITS 50000
#define endl "\n"

int multiply(int x, int res[], int res_size)
{
    int i = 0,  carry = 0;
    while (i < res_size)    // multiply new val with each digit of old product
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;     // store last digit
        carry = prod / 10;      // remainging digits
        i = i + 1;
    }
    while (carry)   // final carry over digits sent to the end of the array
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size = res_size + 1;
    }
    return res_size;
}

void factorial(int n)
{
    int res[MAXDIGITS];
    res[0] = 1;
    int res_size = 1;
    for (int x = 2; x < n; x++)
        res_size = multiply(x, res, res_size);
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    // cin >> tcs;
    for (int tc = 1; tc <= tcs; tc++)
    {
        factorial(10); cout << endl;
        factorial(20); cout << endl;
        factorial(50); cout << endl;
    }
}


/*

//----INPUT----

3
10
20
50

//----OUTPUT----

362880
121645100408832000
608281864034267560872252163321295376887552831379210240000000000

*/
