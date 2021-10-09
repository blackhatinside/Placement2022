/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

int xorarr(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
        xorsum ^= arr[i];
    return xorsum;
}
int main()
{
    int tcs; cin >> tcs; while (tcs--)
    {
        int x, n; cin >> n; int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << xorarr(arr, n) << endl;
    }
}

/*

//----INPUT----

2
8
2 -4 3 -1 8 -5 0 6
8
-2 -4 -8 -6 -3 -1 -5 -7

//----OUTPUT----

-9
0

*/