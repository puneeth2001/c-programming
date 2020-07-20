# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int max_index(int arr[])
{
	int i,z;
	int max =arr[0];
	for(i=0;i<6;i++){
		if(arr[i]>max)
		{
			max = arr[i];
			z = i;
		}
	}
	return z;
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int sol[6]={0,0,0,0,0,0};

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		sol[arr[i]]++;
	}

	cout << max_index(sol);

}