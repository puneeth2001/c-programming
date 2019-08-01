# include<iostream>
using namespace std;
int main(){
    int n;
    int pol=0,the=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            the++;
        }
        if(arr[i]>0){
            i=i+arr[i];
        }
    }
    cout << the;
}