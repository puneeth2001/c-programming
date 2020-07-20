# include <iostream>

using namespace std;
void multiply(int a[2][2],int b[2][2])
{
	int mul[2][2];
	for (int i=0;i<2;i++)
	{
		for(int j=0;i<2;j++)
		{
			mul[i][j] = 0;
			for(int k=0;k<3;k++)
			{
				mul[i][j] += a[i][k]+b[k][i];
			}
		}
	}

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			a[i][j] = mul[i][j];
		}
	}
}

int power(int c[2][2],int n,int a,int b)
{

	int l[2][2] = {{a,b},{1,0}};

	if(n==1)
	{
		return c[0][0] + c[0][1];
	}

	power(c,n/2,a,b);
	multiply(c,c);

	if(n%2 !=0)
	{
		multiply(c,l);
	}

	return c[0][0]+c[0][1];
}

int findNthTerm(int n, int a,int b,int c, int d) 
{ 
  	
    int F[2][2] = {{c,d}, {1,0}} ; 
  
    //Base cases 
    if(n==1) 
        return a; 
    if(n==2) 
        return b; 
  
    return power(F, n-2,c,d); 
} 

int main()
{
		int t,a,b,c,d,n,k,total=0;
	cin >> t;
	int arr[5];
	for(int i=0;i<t;i++)
	{
		cin >> a >> b >> c >> d >> n;
		cout << findNthTerm(n,a,b,c,d) << endl;
	}
}