#include <bits/stdc++.h>
# include <iostream>
using namespace std;

int find_consq(list<int> s)
{
	
}

int main()
{
    int n,count = 0;
    cin >> n;
    std::list<int> k;
    std::stack<int> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n!=1){
        int rem = n % 2;
        n = n/2;
        k.push_back(rem);
    }
    k.push_back(1);
    list <int> :: iterator it; 
    for(it = k.begin(); it != k.end(); it++) 
    {
        cout << *it; 
    }
    return 0;
}
