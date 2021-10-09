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
void printl(list<T> &l)
{
    if (l.empty()) return;
    for (T &i : l) cout << i << " ";
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
        list<int> arr = { 1, 2, 3, 4, 5 };
        cout << arr.back() << " ";
        cout << arr.front() << "\n";
        list<int> newarr = arr;
        printl(newarr);
        cout << *(newarr.begin()) << " ";
        cout << *(newarr.end()) << "\n";
        newarr.insert(newarr.begin(), 7);
        cout << newarr.empty() << "\n";
        newarr.push_back(8);
        printl(newarr);
        newarr.pop_back();
        newarr.erase(newarr.begin(), ++newarr.begin());
        printl(newarr);
        list<int> frqarr(5, 0);
        printl(frqarr);
        frqarr.clear();
        printl(frqarr);
        int myarr[5] = {1, 3, 5, 2, 4};
        list<int> myvec{myarr, myarr + 5};
        printl(myvec);
        list<int>::iterator ptr;
        for (ptr = myvec.begin(); ptr != myvec.end(); ptr++)
            cout << *ptr << " ";
        cout << "\n";
        list<int> dupli(myvec);
        printl(dupli);
        list<int> trans(move(dupli));
        printl(trans);
        cout << dupli.size() << "\n";
        cout << *(trans.begin());
        cout << "\n";
        cout << *(trans.end());
        trans.clear();
        cout << "\n";
        cout << trans.size();
        cout << "\n";
        printl(myvec);
        trans.insert(trans.begin(), 1);
        printl(trans);
        trans.insert(trans.begin(), {4, 7, 2});
        trans.insert(trans.end(), {5, 3});
        printl(trans);
        // trans.insert()
        // frqarr = {5, {0, 0 , 0, 0, 0}};
    }
}


/*

//----INPUT----

1

//----OUTPUT----

5 1
1 2 3 4 5
1 5
0
7 1 2 3 4 5 8
1 2 3 4 5
0 0 0 0 0
1 3 5 2 4
1 3 5 2 4
1 3 5 2 4
1 3 5 2 4
0
1
5
0
1 3 5 2 4
1
4 7 2 1 5 3

*/