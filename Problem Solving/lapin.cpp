#include <bits/stdc++.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    int t,len,sum=0;
    string str,str1,str2;
    cin >> t;
     cout <<endl; 
    for (int i=0; i<t; i++)
    {
        cin >> str;
        len = str.length();
        int sum = 0;
        str1 = str.substr(0,len/2);
        if(len%2!=0){
            str2 = str.substr(len/2+1,len/2);
        }
        else{
             str2 = str.substr(len/2,len/2);
        }
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
       
        if(str1 == str2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" <<endl;
        }
    }
}