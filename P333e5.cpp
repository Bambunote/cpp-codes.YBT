#include<iostream>
using namespace std;
int f[100],c[100],a[100][100];
int main(){
	int n,i,j,x;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<n;i++)
		f[i]=1000000;
	f[n]=0;
	for(i=n-1;i>0;i--)
		for(x=i+1;x<=n;x++)
			if((a[i][x]>0)&&(f[x]!=1000000)&&(f[i]>a[i][x]+f[x])){
				f[i]=a[i][x]+f[x];
				c[i]=x;
			}
	cout<<"minlong="<<f[1]<<endl;
	x=1;
	while(x!=0){
		cout<<x<<' ';
		x=c[x];
	}
	cout<<endl;
	return 0;
}

