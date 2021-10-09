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
        int n; cin >> n; int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
            cout << a[i + n] << " ";
        }
        cout << endl;
    }
}

/*

//----INPUT----

2
2
8 3 1 2
4
2 -4 3 -1 8 -5 0 6

//----OUTPUT----

1 3 2 8
-5 2 -4 3 -1 6 0 8

*/