# include <bits/stdc++.h>
# include <iostream>
using namespace std;

int main()
{
    int n,f,l,sum=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> f >> l;
        sum = 0;
        int j =1;
        while(j*j<f)
        {
            j++;
        }
        while(j*j<=l)
        {
            sum++;
            j++;
        }
        cout << sum << endl;
    }
}
// sqrt takes time