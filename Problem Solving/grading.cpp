# include <iostream>

using namespace std;

int main()
{
	int n,k;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> k;
		if(k>=38){
			int l = k%10;
			if(l>=8 )
			{
				k=k+10-l;			
			}
			else if(l==3 | l==4)
			{
				k = k+5-l;
			}	

		}
		cout << k << endl;
	}
}