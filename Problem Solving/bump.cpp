# include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,n;
	cin >> x >> n;
	double time = 0;
	int dir[x];
	double pos[x];

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
			if(pos[i]==0 || pos[i] == 11)
			{
				k--;
			}
			else
			{
				if(pos[i+1]==pos[i])
				{
					dir[i+1]=dir[i+1]*-1;
					dir[i] = dir[i]*-1;
				}
				pos[i] = pos[i] + dir[i]*0.5;	
					// pos[i+1] = pos[i+1] +dir[i+1]*0.5;
			}
		}
		time=time+0.5;
	}
	cout << time;
}