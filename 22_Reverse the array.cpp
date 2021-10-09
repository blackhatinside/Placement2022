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
        for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[n - 1 - i]);
        }
        for (auto& e : arr)
            cout << e << " ";
        cout << endl;
    }
}

/*

//----INPUT----

2
8
2 4 3 1 8 6 5 7
7
2 4 3 1 8 6 5

//----OUTPUT----

7 5 6 8 1 3 4 2
5 6 8 1 3 4 2

*/