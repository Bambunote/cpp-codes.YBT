#include<iostream>
using namespace std;
void show(int,int);
int max1,f[11][20],value[11][20];
int main(){
	int m,n,i,j,k;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>value[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++){
			max1=0;
			for(k=0;k<=j;k++)
				if(f[i-1][k]+value[i][j-k]>max1)
					max1=f[i-1][k]+value[i][j-k];
			f[i][j]=max1;
		}
	cout<<f[n][m]<<endl;
	show(n,m);
	return 0;
}
void show(int i,int j){
	int k;
	if(i==0)return;
	for(k=0;k<=j;k++)
		if(max1==f[i-1][k]+value[i][j-k]){
			max1=f[i-1][k];
			show(i-1,k);
			cout<<i<<" "<<j-k<<endl;
			break;
		}
}
