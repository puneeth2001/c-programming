# include <iostream>

using namespace std;

int main()
{
	int n,k,test;
	cin >> n >> k;
	int owner[n],order[k];
	for(int i=0;i<n;i++)
	{
		cin >> owner[i];
	}
	for(int j=0;j<k;j++)
	{
		cin >> test;
		for(int i=n-1;i>=0;i--)
		{
			if(test == owner[i])
			{
				cout << i+1 << " ";
				owner[i] = 0;
				break;
			}
			else
			{
				if(i==0)
				{
					cout << -1 << " ";
				}
			}
		}
		// cout << owner[j] <<endl;
	}

}