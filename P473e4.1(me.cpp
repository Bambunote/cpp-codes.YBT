#include<cstdio>
#include<cmath>
using namespace std;
double a[102][3],g[102][102],a1,a2,n,m,inf=10000*101;int i,j,k,t1,t2,s,e;
int main(){
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(i==j)
				g[i][j]=0;
			else
				g[i][j]=inf;
	scanf("%lf",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&t1,&t2);
		a[i][0]=i;a[i][1]=t1;a[i][2]=t2;
	}
	scanf("%lf",&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&t1,&t2);
		g[t1][t2]=g[t2][t1]=sqrt(pow(a[t1][1]-a[t2][1],2)+pow(a[t1][2]-a[t2][2],2));
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)	
			printf("%lf ",g[i][j]);
		printf("\n");
	}
	scanf("%lf%lf",&s,&e);
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if((i!=j)&&(i!=k)&&(j!=k)&&(g[i][k]+g[k][j]<g[i][j]))
					g[i][j]=g[i][k]+g[k][j];
	printf("%.2lf",g[s][e]);
	return 0;
}
/*
5
0 0
2 0
2 2
0 2
3 1
5
1 2
1 3
1 4
2 5
3 5
1 5
*/
