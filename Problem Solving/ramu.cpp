#include<bits/stdc++.h> 
using namespace std; 
void multiply(int a[2][2], int b[2][2]) 
{ 

    int mul[2][2]; 
    for (int i = 0; i < 2; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 2; k++) 
                mul[i][j] += a[i][k]*b[k][j]; 
        } 
    } 
    for (int i=0; i<2; i++) 
        for (int j=0; j<2; j++) 
            b[i][j] = mul[i][j];  
} 

int findNthTerm(int n,int a,int b, int c, int d) 
{ 
  
    int F[2][2] = {{d,c}, {1,0}} ; 
  	int g[2][2] = {{b,0},{a,0}};
  	multiply(F,g);
  	// cout << F[0][0];
    for(int i=0;i<n-3;i++)
	  	{
	  		multiply(F,g);
	  	}

  	return g[0][0];
} 
  
int main() 
{ 
	int t,a,b,c,d,n,k,total=0;
	cin >> t;
	int arr[5];
	for(int i=0;i<t;i++)
	{
		cin >> a >> b >> c >> d >> n;
		if(n==1){
			cout << a;
		}
		if(n==2)
		{
			cout << b;
		}
		else
		{
			cout << findNthTerm(n,a,b,c,d) << endl;	
		}
		
	}
  
   return 0; 
} 