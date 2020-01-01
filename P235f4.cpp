#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int h[1001],s[1001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		h[i]=1+s[i/2];
		s[i]=s[i-1]+h[i];
	}
	cout<<h[n];
	return 0;
}

