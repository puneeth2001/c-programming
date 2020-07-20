# include <bits/stdc++.h>
# include <string>


using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;

	for(int i=0;i<n;i++)
	{
		cin >> s;
		int l = s.length();
		// std::vector<char> c1;
		// std::vector<char> c2;
		for(int i=0;i<l;i++)
		{
			if(i%2 == 0)
			{
				cout << s[i];
			}
		}
		cout << " ";
		for(int i=0;i<l;i++)
		{
			if(i%2 != 0)
			{
				cout << s[i];
			}
		}
		cout << endl;
	}
}