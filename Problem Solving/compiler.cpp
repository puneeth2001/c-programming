#include<bits/stdc++.h>

using namespace std;

bool balancedParanthesis(string str){
    bool balanced = true;
    stack <char> s1;
    if(balanced){
        for(int j=0;j<str.length();j++)
        {
            if(str[j] == '<')
            {
                s1.push(str[j]);
            }
            else if(s1.empty())
            {
                balanced = false;
            }
            else{
                s1.pop();
            }
        }
    }
    if(balanced && s1.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    
    cin >> n;
    string str;
    for(int i=0; i<n;i++)
    {
        cin >> str;
        cout << balancedParanthesis(str);

    }

}