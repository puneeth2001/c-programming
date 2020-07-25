# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,liked,total=0;
    cin >> n;
    int shared = 5;

    for(int i=0;i<n;i++)
    {
        liked = shared/2;
        // cout << liked << endl;
        total = total + liked;
        shared = liked*3;
    }

    cout << total << endl;

}