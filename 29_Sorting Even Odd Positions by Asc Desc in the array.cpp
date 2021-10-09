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

template<typename T>
void printv(vector<T> &v)
{
    if (v.empty()) return;
    for (T &i : v) cout << i << " ";
    cout << endl;
}

int mycomp(int a, int b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    for (int tc = 1; tc <= tcs; tc++)
    {
        vector<int> odd, eve, ans;
        int n; cin >> n; int arr[n];
        map<int, int> hp; int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                eve.push_back(x);
            else
                odd.push_back(x);
            hp.insert({i, x % 2});
        }
        sort(eve.begin(), eve.end());
        sort(odd.begin(), odd.end(), mycomp);
        // cout << "even: "; printv(eve);
        // cout << "odd: "; printv(odd);
        for (auto it = hp.begin(); it != hp.end(); it++)
        {
            // cout << it->second << " ";
            if (it->second == 0)
            {
                ans.push_back(eve.back());
                eve.pop_back();
            }
            if (it->second == 1 || it->second == -1)
            {
                ans.push_back(odd.back());
                odd.pop_back();
            }
        }
        // cout << "\n";
        cout << "Case #" << tc << ": "; printv(ans);
    }
}


/*

//----INPUT----

2
5
5 2 4 3 1
7
-5 -12 87 2 88 20 11

//----OUTPUT----

Case #1: 1 4 2 3 5 
Case #2: -5 88 11 20 2 -12 87 

*/
