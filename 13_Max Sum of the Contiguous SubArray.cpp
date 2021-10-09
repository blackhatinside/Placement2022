/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{   /*    Dynamic Programming    */
    int max_so_far = a[0];
    int curr_max = a[0];
    for (int i = 1; i < size; i++)
    {
        curr_max = max(a[i], curr_max + a[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main()
{
    int tcs; cin >> tcs; while (tcs--)
    {
        int n; cin >> n; int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << maxSubArraySum(a, n);
    }
}

/*

//----INPUT----

1
8
-2 -3 4 -1 -2 1 5 -3

//----OUTPUT----

7

*/