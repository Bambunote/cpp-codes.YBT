#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
bool comp(int x,int y){return x<y;}
int main(){
	int n,r,j=0,i=1,s[100]={0},a[100],minx=0;
	cin>>n>>r;
	for(i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+1+n,comp);
	for(i=1;i<=n;i++){
		j++;
		if(j==r+1)
			j=1;
		s[j]+=a[i];
		minx+=s[j];
	}
	cout<<minx;
	return 0;
}

