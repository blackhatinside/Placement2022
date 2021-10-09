// CODE
#include<bits/stdc++.h>
#pragma GCC optimize ("O3")	// for CP optimize
#pragma GCC target ("sse4")	// for CP optimize
using namespace std;

#define endl "\n"

typedef vector<int> vi;
typedef long long int li;

template <typename T>
void inpV (vector<T> &vec, int n)
{
	vec.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
}

int main()
{
	ios_base::sync_with_stdio(0);	// FASTIO
	cin.tie(NULL); cout.tie(NULL);	// FASTIO

	li tcs = 1; cin >> tcs;
	for (int i = 0; i < tcs; i++)
	{
		int n; cin >> n;
		vi arr; inpV(arr, n);
		int ce = 0, co = 0, ne, no;
		for (int i = 0; i < n; i++)
		{
			ce += (arr[i] % 2 == 0);
			co += (arr[i] % 2 == 1);
		}
		ne = floor((float)n / 2);
		no = ceil((float)n / 2);
		int ans = min(no, ce) + min(ne, co);
		cout << ans << endl;
	}
}

/*

//----INPUT----

3
3
1 2 3
3
2 4 5
2
2 4

//----OUTPUT----

2
3
1

*/