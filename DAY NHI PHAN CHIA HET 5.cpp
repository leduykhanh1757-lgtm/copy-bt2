#include<iostream>
#include<iomanip>

using namespace std;

bool check(string s){
	long long n=0,lt=1;
	for(int i=s.size()-1;i>=0;i--){
		n+=(s[i]-'0')*lt;
		lt*=2;
		n%=5;
		lt%=5;
	}
	return n==0;
}

int main(){
	string s;
	getline(cin,s);
	if(check(s)) cout<<"YES";
	else cout<<"NO";
}