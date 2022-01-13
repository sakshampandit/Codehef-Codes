#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    // int n;
    // cin >> n;
    // int arr[n-1];
    // for(int i = 0; i < n-1; i++)
    //     cin >> arr[i];

    // for(int i = 1; i <= n; i++) {
    //     int idx = search(arr, i, n-1);
    //     if(idx == -1){
    //         cout << i;
    //     }
    // }
    // cout << endl << "finish";

    int s, t, x, y, m, n;
    cin >> s;
    cin >> t;
    cin >> x;
    cin >> y;
    cin >> m;
    cin >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int a1[m], b1[n];
    for (int i = 0; i < m; i++)
    {
        a1[i] = x + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b1[i] = y + b[i];
    }
    int c1 = 0, c2 = 0;

    for (int i = 0; i < m; i++)
    {
        if(a1[i] >= s && a1[i] <= 11)
            c1++;
    }
    for (int i = 0; i < n; i++)
    {
        if(b1[i] <= t && b1[i] >= s)
            c2++;
    }
    cout << c1 << endl;
    cout << c2 << endl;

    return 0;
}