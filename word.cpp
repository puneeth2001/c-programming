# include<iostream>
# include<cstring>
using namespace std;
void convertSmall(char s[],int l){
	for(int i=0;i<l;i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	cout<<s;
}
void convertBig(char s[],int l){
	for(int i=0;i<l;i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]=s[i]-32;
		}
	}
	cout<<s;
}
int main(){
	char s[101];
	cin >> s;
	int small=0,capital=0;
	int l = strlen(s);
	for(int i=0;i<l;i++){
		if (s[i]>=65 &&s[i]<=90)
		{
			capital=capital+1;
		}
		else{
			small =small+1;
		}
	}
	if(capital<=small){
		convertSmall(s,l);
	}
	else{
		convertBig(s,l);
	}
}