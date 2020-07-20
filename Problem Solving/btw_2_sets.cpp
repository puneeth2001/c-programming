# include <iostream>
# include <bits/stdc++.h>

using namespace std;

bool is_factor(int n,int arr[],int k)
{
    int count=0;
    for(int i=0;i<k;k++)
    {
        if(arr[i]%n==0)
        {
            return true;
        }
        else{
            return false;
        }
    }

}

bool is_multiple(int n,int arr[],int k)
{
    int count=0;
    for(int i=0;i<k;k++)
    {
        if(n%arr[i]==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
}

int main()
{
    int n, m,count=0;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++)
    {
        cin >> arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> arr2[i];
    }

    // sort(arr1,arr1+n);
    // sort(arr2,arr2+m);

    int first = arr1[n];
    int second = arr2[1];

    for(int i=first;i<=second;i=i*2)
    {
        if(is_multiple(i,arr1,n) && is_factor(i,arr2,m))
        {
            count++;
        }

    }
    cout << count;
}