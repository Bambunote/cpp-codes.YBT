#include<cstdio>
#include<iostream>
#define inf 1000000
using namespace std;
int a[101],g[101][101],n,
	i,j,k,l,r,mmin,total;
int main(){
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			g[i][j]=inf;
	for(i=1;i<=n;i++){
		g[i][i]=0;
		cin>>a[i]>>l>>r;
		if(l>0)g[i][l]=g[l][i]=1;
		if(r>0)g[i][r]=g[r][i]=1;
	}
	for(k=1;k<=n;k++)
		for(i=1;i<=n;i++)
			if(i!=k)
				for(j=1;j<=n;j++)
					if(i!=j&&k!=j&&g[i][k]+g[k][j]<g[i][j])
						g[i][j]=g[i][k]+g[k][i];
	mmin=inf;
	for(i=1;i<=n;i++){
		total=0;
		for(j=1;j<=n;j++)
			total+=g[i][j]*a[j];
		if(total<mmin)mmin=total;
	}
	printf("%d\n",mmin);
	return 0;
}
