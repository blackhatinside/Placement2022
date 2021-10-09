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
        int ans = -1, n, temp; cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            ans &= temp;
        }
        cout << ans;
        cout << endl;
    }
}

/*

//----INPUT----

4
4
3 11 3 7
5
11 7 15 3 7
8
2 -4 3 -1 8 -5 0 6
9
-2 -4 -8 -6 -3 -1 -5 -7

//----OUTPUT----

3
3
0
-8

*/