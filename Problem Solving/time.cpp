# include <iostream>
# include <string>

using namespace std;


void time_conv(string s)
{
	char day = s.at(8);
	// cout << day;

	if(day == 'A'){
		if(s.at(0) == '1' && s.at(1) == '2'){
			cout << "00:" << s.substr(3,5);

		}
		else{
			string r = s.substr(0,8);
			cout << r;	
		}	
	}
	

	else{
		if(s.at(0) == '1' && s.at(1) == '2'){
			cout << "12:" << s.substr(3,5);

		}
		else{
		int k = stoi(s.substr(0,2));
		k = k +12;
		string l = to_string(k);
		cout << l << ":"<< s.substr(3,5);
		}	

	}
}

int main()
{
	string s;
	cin >> s;
	time_conv(s);
}