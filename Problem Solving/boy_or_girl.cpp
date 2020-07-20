# include <iostream>
# include <cstring>
using namespace std;
int main(){
	int n,i;
	int sum=0;
	char str[101];
	cin >> str;
	int len = strlen(str);
	int a[26];
	for(int i=0;i<26;i++){
		a[i]=0;
	}
	for(i=0;i<len;i++){
		a[str[i]-97]++;
	}
	for(i=0;i<26;i++){
		if(a[i]>0){
			sum=sum+1;
		}
	}
if(sum%2!=0){
	cout<<"IGNORE HIM!";
}
else{
	cout<<"CHAT WITH HER!";
}
}