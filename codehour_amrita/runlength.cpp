#include <iostream>
#include <bits/stdc++.h>
#include <strings.h>

using namespace std;

int main()
{
    int sum=1;
    string s;
    cin >> s;
    int len = s.length();

    for(int i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
        {
            sum++;
        }
        else{
            cout <<s[i];
            cout << sum;
            sum=1;
        }
    }

}