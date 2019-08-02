#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0,dong=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            sum=sum+arr[i];
        }
        else if(arr[i]<0 && sum>0){
            sum=sum-1;
        }
        else if(arr[i]<0 && sum ==0){
            dong = dong +1;
        }
    }
    cout << dong;
}