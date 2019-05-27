# include<iostream>
using namespace std;
int main()
{
    int n;
    int k=0;
    cin >> n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]=='A')
        {
          k=k+1;  
        }
    }
    if(k>n/2)
    {
        cout << "Anton";
    }
    else if(k==n/2 & n%2==0)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
    
}