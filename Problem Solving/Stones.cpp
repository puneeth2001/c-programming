# include<iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cin >> n;
    char arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    while(arr[i]==arr[i+1]){
        count++;
    }
    cout<<count;
}