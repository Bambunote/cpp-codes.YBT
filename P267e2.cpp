#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int n,ave,step,a[102],i,j;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];ave+=a[i];
	}ave/=n;
	for(i=1;i<=n;i++)
		a[i]-=ave;
	i=1;j=n;
	while(a[i]==0&&i<n)i++;
	while(a[j]==0&&j>1)j--;
	while(i<j){
		a[i+1]+=a[i];
		a[i]=0;
		step++;i++;
		while(a[i]==0&&i<j)
			i++;
	}
	cout<<step<<endl;
	return 0;
}
