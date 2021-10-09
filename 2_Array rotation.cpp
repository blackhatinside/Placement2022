/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

int rotarr(int *arr, int n, int d)
{
    int j = 0, oparr[d];
    for (int i = 0; i < d; i++)
    {
        oparr[j] = arr[i];
        j = j + 1;
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = oparr[j];
        j = j + 1;
    }
}

int main()
{
    int tcs; cin >> tcs; while (tcs--)
    {
        int i, n; cin >> n; int arr[n];
        int r; cin >> r;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rotarr(arr, n, r);
        for (auto& x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

/*

//----INPUT----

2
8 2
2 -4 3 -1 8 -5 0 6
8 3
-2 -4 -8 -6 -3 -1 -5 -7

//----OUTPUT----

3 -1 8 -5 0 6 2 -4
-6 -3 -1 -5 -7 -2 -4 -8

*/