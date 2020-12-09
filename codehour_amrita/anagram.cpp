#include <iostream>
#include <set>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1,s2;
    for(int i=0;i<n;i++)
    {
        cin >> s1 >> s2;
        sort(s1.begin(), s1.end());
        sort(s2.begin(),s2.end());
        // cout << s1 << " " << s2;
        if(s1.length()!=s2.length())
        {
            cout << "NO" << endl;
            break;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i] != s2[i]){
                cout << "NO" << endl;
                break;
            }
        }
        cout << "YES" << endl;
    }
}