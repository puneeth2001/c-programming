#include <bits/stdc++.h>

using namespace std;

void swap(int a, int b){
    int k;
    k = a;
    a = b;
    b = a;
}

int main()
{
    int n,t,val;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> t;
        int arr[t];
        for(int j=0;j<t;j++){
            cin >> arr[j];
        }
        for(int k=t-1;k>=0;k++){
            cout << arr[k-2];
            if(arr[k] >arr[k-1]){
                cout << "swapped";
                swap(arr[k],arr[k-1]);
                break;
            }
        }
        for(int j=0;j<t;j++){
            cout << "" << arr[j];
        }
    }
    
}