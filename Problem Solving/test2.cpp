# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=2;
	cin >> n;
	long double sr = sqrt(n); 
  	if((sr - floor(sr)) == 0)
  	{
  		for(int i=2;i<=n-1;i++)
		{
			if(n%i == 0)
			{
				count=count+1;
			}
		}
  	}
  	else{
  		for(int i=2;i<n/2;i++)
		{
			if(n%i == 0)
			{
			count=count+2;
			}
		}
  	} 
	


	cout << count;
}