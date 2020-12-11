#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,l,z;
    cin >> n;
    std::map <string,int> m;
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> k >> s;
        if(k==1){
            cin >> l;
            // z = m[s] + l;
            m[s]+=l;
            
        }
        if(k==2){
            m.erase(s);
        }
        if(k==3){
            map<string,int>::iterator itr=m.find(s);
            if(itr != m.end())
            {
                cout << m[s] << endl;                   
            }
        }


    }
}