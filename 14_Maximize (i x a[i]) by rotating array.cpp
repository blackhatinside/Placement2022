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
        int n; cin >> n; int a[n];
        int tot = 0, curval = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            tot += a[i];
            curval += i * a[i];
        }
        int ans = curval;
        for (int i = 1; i < n; i++)
        {
            int nxtval = curval - (tot - a[i - 1])
                         + a[i - 1] * (n - 1);
            curval = nxtval;
            ans = max(ans, nxtval);
        }
        cout << ans << endl;
    }
}

/*

//----INPUT----

4
4
8 3 1 2
5
11 7 15 3 7
8
2 -4 3 -1 8 -5 0 6
9
-2 -4 -8 -6 -3 -9 -1 -5 -7

//----OUTPUT----

29
110
67
-156

*/