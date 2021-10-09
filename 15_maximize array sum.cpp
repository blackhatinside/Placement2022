/*
    Author : Cyberkid
    Language : C++
    email : thehappymentorkid@gmail.com
*/

// CODE

int MaxSumContSubArr(int arr[], int size)
{   /*    KADANE'S ALGORITHM FOR POSITIVE OR NEGATIVE ARRAYS    */
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;    //for global use
    int maxSum = 0, curSum = 0, lowSum = -1000000007;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > lowSum) { lowSum = arr[i]; x2 = i; y2 = i; }
        curSum = curSum + arr[i]; y1 = y1 + 1;
        if (curSum > maxSum) { maxSum = curSum; }
        if (curSum <= 0) { curSum = 0; x1 = i + 1; y1 = i + 1; }
    }
    if (maxSum <= 0) return lowSum; else return maxSum;
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
        cout << MaxSumContSubArr(arr, n) << endl;
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

11
-1

*/