# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int sum = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(arr[j] == arr[i]+1 || arr[i] == arr[j])
            {
                k = j-i+1;
                if(k>sum)
                {
                    sum = k;
                }
            }
        }
    }

    cout << sum << endl;

}