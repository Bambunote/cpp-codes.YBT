#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int f[10001];
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		f[i]=1;
		for(int j=1;j<=i/2;j++)
			f[i]+=f[j];
	}
	cout<<f[n];
	return 0;
}

