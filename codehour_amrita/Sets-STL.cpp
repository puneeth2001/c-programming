#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,l;
    cin >> n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin >> k >> l;
        if(k == 1){
            s.insert(l);
        }
        if(k == 2)
        {
            s.erase(l);
        }
        if(k==3)
        {
            set<int>::iterator itr=s.find(l);
            if(itr != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            
        }
    }

}