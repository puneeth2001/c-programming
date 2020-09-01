#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n,o,a,b,k;
    cin >> n >> o;
    int arr[n] = { };
    for(int i=0;i<o;i++)
    {
        cin >> a >> b >> k;
        for(int i=a-1;i<=b-1;i++)
        {
            arr[i] = arr[i] + k;
        }
    }

    cout<<max(arr,n);

}