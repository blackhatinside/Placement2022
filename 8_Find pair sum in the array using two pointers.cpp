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

#define endl "\n"

int isPairSum(int *A, int n, int k, int &x, int &y)
{
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (A[i] + A[j] == k)
		{
			x = i; y = j; return 1;
		}
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
		int n; cin >> n; int A[n];
		int key; cin >> key;
		for (int i = 0; i < n; i++)
		{
			cin >> A[i];
		}
		int x = -1, y = -1;
		if (isPairSum(A, n, key, x, y))
			cout << "YES" << endl << A[x] << " " << A[y] << endl;
		else
			cout << "NO" << endl;
	}
}


/*

//----INPUT----

1
7 14
1 3 5 7 9 10 11

//----OUTPUT----

YES
1 6

*/
