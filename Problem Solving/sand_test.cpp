# include <iostream>
# include <cmath>
using namespace std;

int no_by_2(int n)
{
	int sum=1;
	int l = n/2;
	while(l%2==0)
	{
		sum++;
		l=l/2;
	}
	return sum;
}
bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
}

int main()
{
	int n,m,sum=0;
	cin >> n >> m;
	int arr[m];
	cout << no_by_2(n);
	if(n%2 == 0)
	{
		if(isPowerOfTwo(n))
		{
			cout << m-1 <<endl;
			// cout << 1 << " " << 2;
			for(int i=1;i<=m;i++)
			{
				if(i!=n)
				{
					cout << i << " ";
				}
			}
		}
		else
		{
			int z = no_by_2(n);
			// cout<<m-z<<endl;
			for(int i=1;i<=m;i++)
			{
				if(no_by_2(i) == z)
				{
					cout << i << " ";
				}
			}
		}
	}
	else
	{
		cout << 0 << endl;
	}
}