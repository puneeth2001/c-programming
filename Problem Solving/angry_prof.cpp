# include <iostream>
using namespace std;

int main()
{
    int t,n,k;
    for(int i=0;i<t;i++)
    {
        cin >> n >> k;
        int arr[n];
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i]<=0){
                sum++;
            }
        }
        if(sum>k)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        
    }
}