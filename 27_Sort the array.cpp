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
        int x, n; cin >> n; vi arr;
        for (int i = 0; i < n; i++)
        {
            cin >> x; arr.PB(x);
        }
        sort(arr.B(), arr.E());
        for (auto& e : arr)
            cout << e << " ";
        cout << endl;
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

-5 -4 -1 0 2 3 6 8
-8 -7 -6 -5 -4 -3 -2 -1

*/