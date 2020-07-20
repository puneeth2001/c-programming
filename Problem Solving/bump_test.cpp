# include <bits/stdc++.h>

using namespace std;

int min(int arr[],int n)
{
	int min =arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	return min;
}


int min_index(int arr[],int n)
{
	int mini =arr[0];
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<mini)
		{
			mini = arr[i];
			k=i;
		}
	}
	return k;
}

int max_index(int arr[],int n)
{
	int k=0;
	int mini = arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<mini)
		{
			k=i;
		}
	}
	return k;
}


int max(int arr[],int n)
{
	int min =arr[1];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>min)
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int x,n;
	cin >> x >> n;
	int time = 0;
	int dir[x];
	int pos[x];

	for(int i=0;i<x;i++)
	{
		cin >> pos[i];
	}

	for(int i=0;i<x;i++)
	{
		cin >> dir[i];
	}

	int minimun = min(pos,x);

	int maximum = max(pos,x);

	int k = minimun - 1;
	cout << k;
	int l = n - maximum;
	cout << dir[min_index(pos,n)];
	if(k<=l)
	{
		if(dir[min_index(pos,n)] == 1)
		{
			cout << n-minimun +1;
		}
	}
	else
	{
		if(dir[max_index(pos,n)] == 1)
		{
			cout << maximum;
		}
	}



}