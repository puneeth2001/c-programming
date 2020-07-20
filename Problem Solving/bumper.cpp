# include <bits/stdc++.h>

using namespace std;

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
	int k=x;
while(k!=0)
{
		for(int i=0;i<x;i++)
		{
			pos[i] = pos[i] + dir[i];
			if(pos[i]==0 || pos[i] == x+1)
			{
				k--;
			}
			// pos[i+1] = pos[i+1] +dir[i+1]*0.5;
		}
		time=time+1;
}

	cout << time;
}