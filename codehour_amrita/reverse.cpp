#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverse(int n)
{
    int sum=0;
    while(n!=0)
    {
        int k=n%10;
        sum = sum*10+k;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        cout << reverse(k) << endl; 
    }
}