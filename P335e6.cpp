#include<iostream>
using namespace std;
int f[201],w[201],c[201];bool a[201][201];
int main(){
	int i,j,n,x,l,y,k,maxx;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>w[i];
	do{
		cin>>x>>y;
		if((x!=0)&&(y!=0))
			a[x][y]=true;
	}while((x!=0)||(y!=0));
	f[n]=w[n];
	for(i=n-1;i>0;i--){
		l=0;k=0;
		for(j=i+1;j<=n;j++)
			if((a[i][j])&&(f[j]>l)){
				l=f[j];k=j;
			}
		f[i]=l+w[i];
		c[i]=k;
	}
	k=1;
	for(j=2;j<=n;j++)
		if(f[j]>f[k])
			k=j;
	maxx=f[k];
	cout<<k;
	k=c[k];
	while(k!=0){
		cout<<"-"<<k;
		k=c[k];
	}
	cout<<endl<<maxx<<endl;
	return 0;
}

