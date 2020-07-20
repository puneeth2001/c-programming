#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    cin >>n;
    array <pair<string,int>,20> arr;
    for(int i=0;i<n;i++){
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    cout << "BEFORE ARRAY..." << endl;
    for(int i = 0; i < 10; i++) {
        // .first and .second call the first and second ints in the pair respectively
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    cout << endl;

    // sort the array by calling built in sort function
    sort(arr.begin(),arr.end());

    // prints out array
    cout << "FINAL ARRAY..." << endl;
    for(int i = 0; i < 10; i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    cout<<endl;
}
