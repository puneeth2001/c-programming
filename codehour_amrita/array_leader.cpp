#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        int arr[k];
        for(int i=0;i<k;i++)
        {
            cin >> arr[i];
        }

        for(int i=0;i<k;i++)
        {
            int j = i+1;
            if(arr[i]>arr[j])
            {
                cout << arr[i];
            }
            // if(i==k-1)
            // {
            //     cout << arr[i];
            // }
        }
    }   
}

