# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int calculate_bill(int arr[], int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(i!=m){
			sum+=arr[i];
		}
	}
	return sum/2;
}

int main()
{
	int m, n, ans;
	cin >> n >> m;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >>arr[i];
	}
	cin >> ans;

	int bill = calculate_bill(arr,n,m);
	if(bill == ans){
		cout << "Bon Appetit";
	}
	else{
		cout << abs(bill - ans);
	}
}