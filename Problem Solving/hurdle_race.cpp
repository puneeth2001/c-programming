# include <bits/stdc++.h>
# include <iostream>

using namespace std;

int main()
{
    int n,m,l=0;
    cin >> n >> m;
    int arr[n];
    int max = 0;
    for(int i=0;i<n;i++)
    {
        cin >> l;
        if(l>max){
            max = l;
        }
    }
    if(m>max)
    {
        cout << 0;
    }
    else
    {
        cout << max-m;
    }
    
}