# include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int h;
    int k=0;
    int i;
    cin >> n;
    cin >> h;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i]; 
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>h)
            k=k+1;
    k=k+1;
    }
    cout << k;
}