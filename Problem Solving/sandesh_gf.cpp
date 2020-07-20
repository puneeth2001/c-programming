# include <iostream>
# include <cmath>

using namespace std;

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
			cout<<m/2<<endl;
			for(int i=1;i<=m;i=i+2)
			{
				cout << i << " ";
			}
		}
	}
	else
	{
		cout << 0 << endl;
	}
}