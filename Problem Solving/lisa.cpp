# include <bits/stdc++.h>

using namespace std;

// bool isperfectsquare(long int x)
// {
// 	long double l = sqrt(x);

// 	return ((l-floor(l)) ==0);
// }
int main()
{
	long int n,count=2;
	cin >> n;
	if(n==1){
		cout<<1;
	}
	else{
	
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){
			if(i==sqrt(n)){
				count++;
			}
			else
			{
				count=count+2;	
			}
			
		}
	}
	cout << count << endl;	
	}
}