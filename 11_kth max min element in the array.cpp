/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

int main()
{
    int tcs; cin >> tcs; while (tcs--)
    {
        int i, n; cin >> n; int arr[n];
        int k; cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << arr[k - 1] << " " << arr[n - k];
        cout << endl;
    }
}

/*

//----INPUT----

2
8 3
2 -4 3 -1 8 -5 0 6
9 5
-2 -4 -8 -6 -3 -1 -5 -7 0

//----OUTPUT----

-5 -4 -1 0 2 3 6 8
-1 3
-8 -7 -6 -5 -4 -3 -2 -1 0
-4 -4

*/