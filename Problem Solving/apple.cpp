# include <iostream>

using namespace std;

int main()
{
	int s,z,t,d,a,b,m,n,app=0,oran=0;
	cin >> s >> t;
	cin >> a >> b;
	cin >> m >> n;
	int arr1[m],arr2[n];
	for(int i=0;i<m;i++)
	{
		cin >> d;
		z = a+d;
		if(z >= s && z <= t)
		{
			app++;
		} 

	}
	for(int j=0;j<n;j++)
	{
		cin >> d;
		z = b+d;
		if(z >= s && z <= t)
		{
			oran++;
		} 
	}

	cout << app << endl;
	cout << oran << endl;

}