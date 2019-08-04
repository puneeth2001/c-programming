# include<iostream>
# include<cstring>
using namespace std;
int chartoint(char x){
    int z = x-48;
  
    return z;
    
}
int main(){
    int sum=0,i;
    string c;
    int arr[4];
    for(i=0;i<4;i++){
        cin >> arr[i];
    }
    cin >> c;
    int l = c.length();
    for(i=0;i<l;i++){
        int k = chartoint(c[i]);
        sum = sum+arr[k-1];     
    }
    cout << sum;


}