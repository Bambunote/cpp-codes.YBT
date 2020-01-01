#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;
int ans;
void dfs(int m){
	int i;
	ans++;
	for(i=1;i<=m/2;i++)
		dfs(i);
}
int main(){
	int n;
	cin>>n;
	dfs(n);
	cout<<ans;
	return 0;
}

