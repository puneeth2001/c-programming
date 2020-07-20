#include <iostream>

using namespace std;

void get_total(int n,int a, int b,int c, int d)
{
	 	int arr2[n];
		int k =arr2[n-1];
		arr2[0] = a;
		arr2[1] = b;
		if(n==1){
			cout << a << endl;
		}
		else if(n ==2)
		{
			cout << b << endl;
		}
		else
		{
			for(int i=2;i<n;i++)
			{
				arr2[i] = c*arr2[i-2] + d*arr2[i-1];
				k = arr2[i];
			}
			cout << k%1000000007 << endl;			
		}
}
int main()
{	
	int t,a,b,c,d,n,k,total=0;
	cin >> t;
	int arr[5];
	for(int i=0;i<t;i++)
	{
		cin >> a >> b >> c >> d >> n;
		get_total(n,a,b,c,d);
	}

}


