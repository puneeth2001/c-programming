# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=0,c=0;
	cin >> n;
	char arr[8];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i]=='U')
		{
			count++;
			if(count == 0)
			{
				c++;
			}
		}
		if(arr[i] == 'D')
		{
			count--;
		}
		// cout << count <<endl;
	}
	cout << c<<endl;
}