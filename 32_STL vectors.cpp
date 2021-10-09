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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int tcs = 1;
    cin >> tcs;
    while (tcs--)
    {
        vector<int> arr = { 1, 2, 3, 4, 5 };
        cout << arr.back() << " ";
        cout << arr.front() << "\n";
        vector<int> newarr = arr;
        cout << newarr[0] << " ";
        cout << newarr.at(newarr.size() - 1) << "\n";
        printv(newarr);
        cout << *(newarr.begin()) << " ";
        cout << *(newarr.end()) << "\n";
        newarr.insert(newarr.begin() + 2, 7);
        cout << newarr.empty() << "\n";
        newarr.push_back(8);
        printv(newarr);
        newarr.pop_back();
        printv(newarr);
        vector<int> frqarr(5, 0);
        printv(frqarr);
        frqarr.clear();
        printv(frqarr);
        int myarr[5] = {1, 3, 5, 2, 4};
        vector<int> myvec{myarr, myarr + 5};
        printv(myvec);
        vector<int>::iterator ptr;
        for (ptr = myvec.begin(); ptr != myvec.end(); ptr++)
            cout << *ptr << " ";
        cout << "\n";
        vector<int> dupli(myvec);
        printv(dupli);
        vector<int> trans(move(dupli));
        printv(trans);
        cout << dupli.size() << "\n";
        cout << trans[0] << " " << *(trans.begin());
        cout << "\n";
        cout << trans[trans.size() - 1] << " " << *(trans.end() - 1);
        trans.clear();
        cout << "\n";
        cout << trans.size();
        cout << "\n";
        printv(myvec);
        trans.insert(trans.begin(), 1);
        printv(trans);
        trans.insert(trans.begin(), {4, 7, 2});
        trans.insert(trans.end(), {5, 3});
        printv(trans);
        // trans.insert()
        // frqarr = {5, {0, 0 , 0, 0, 0}};
    }
}


/*

//----INPUT----

1

//----OUTPUT----

5 1
1 5
1 2 3 4 5
1 0
0
1 2 7 3 4 5 8
1 2 7 3 4 5
0 0 0 0 0
1 3 5 2 4
1 3 5 2 4
1 3 5 2 4
1 3 5 2 4
0
1 1
4 4
0
1 3 5 2 4
1
4 7 2 1 5 3

*/