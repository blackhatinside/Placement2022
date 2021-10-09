/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

bool mycomp(int a, int b)
{
    return a > b;
}

int main()
{
    int tcs; cin >> tcs; while (tcs--)
    {
        int x, n; cin >> n; vi arr;
        for (int i = 0; i < n; i++)
        {
            cin >> x; arr.PB(x);
        }
        sort(arr.B(), arr.E(), mycomp);
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

8 6 3 2 0 -1 -4 -5
-1 -2 -3 -4 -5 -6 -7 -8

*/