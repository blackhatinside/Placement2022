/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

bool mycomp(int a, int b)
{
    return a % 2 < b % 2;
}

int main()
{
    int x, n; cin >> n; vi arr;
    for (int i = 0; i < n; i++)
    {
        cin >> x; arr.PB(x);
    }
    sort(arr.B(), arr.E(), mycomp);
    for (auto& e : arr)
        cout << e << " ";
}

/*

//----INPUT----

8
2 4 3 1 8 6 5 7

//----OUTPUT----

2 4 8 6 3 1 5 7

*/