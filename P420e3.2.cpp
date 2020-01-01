#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;
int i,j,n,t,k;
string s,a[8001];
int main(){
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);
	while(cin>>a[++n]);
	n--;
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]>a[j]){
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
	t=a[1].length();
	for(i=2;i<=n;i++){
		j=0;
		while(a[i][j]==a[i-1][j]&&j<a[i-1].length())j++;
		t+=a[i].length()-j;
	}
	printf("%d",t+1);
	return 0;
}

