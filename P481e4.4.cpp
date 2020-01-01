#include<cstdio>
using namespace std;
double a[2001][2001],dis[2001],mmin;
int n,m,i,j,k,x,y,f[2001];
void init(){
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++){
		scanf("%d%d%lf",&j,&k,&a[j][k]);
		a[j][k]=(100-a[j][k])/100;
		a[k][j]=a[j][k];
	}
	scanf("%d%d",&x,&y);
}
void dijkstra(int x){
	for(i=1;i<=n;i++)
		dis[i]=a[x][i];
	dis[x]=1;f[x]=1;
	for(i=1;i<n;i++){
		mmin=0;
		for(j=1;j<=n;j++)
			if(f[j]==0&&dis[j]>mmin){
				k=j;mmin=dis[j];
			}
		f[k]=1;
		if(k==y)break;
		for(j=1;j<=n;j++)
			if(f[j]==0&&dis[k]*a[k][j]>dis[j])
				dis[j]=dis[k]*a[k][j];
	}
}
int main(){
	init();
	dijkstra(x);
	printf("%0.8lf",100/dis[y]);
	return 0;
}
/*
3 3
1 2 1
2 3 2
1 3 3
1 3
*/
/*
103.07153164
*/
