# include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main()
{
	int n,d,m,sum = 0,count=0;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cin >> d >> m;
	if(n==m){
		sum = accumulate(arr, arr+n, sum);
		if(sum == d){
			cout<<1;
		}
	}
	else{
		for(int i=0;i<n-m+1;i++)
		{
			sum = 0;
			for(int j=i;j<m+i;j++)
			{
				sum += arr[j]; 
			}
			// cout << sum << endl;
			if(sum == d){
				count++;
			}
		}
		cout << count;		
	}

}