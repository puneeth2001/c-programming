# include <iostream>

using namespace std;

int main(){
    int n,t;
    cin >> t;
    for(int z=0;z<t;z++)
    {
        cin >> n; //5
        int arr[n-1]; //4

        for(int i=0;i<n-1;i++)
        {
            cin >> arr[i]; //4
        }
        if(arr[n-2] == n-1)
        {
            cout << n;
        }
        else{
            for(int i=1;i<n-1;i++)
            {
                // cout << "Hello";
                if(arr[i-1]+1 != arr[i]) {
                    cout << arr[i-1] + 1 << endl;
                    break; 
                }
            }
        }
        // cout << n;

    }
}