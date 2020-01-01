#include<cstdio>
#include<cstring> 
#define maxn 99999999
using namespace std;
int g[81][81],dis[81],n,
	vis[81],miin,u,m;
char c[81];
int main(){
	for(int i=1;i<=n;i++){
		dis[i]=g[1][i];
		vis[i]=0;		
	}
	vis[u]=0;	
	scanf("%d%d",&n,&u);
	for(int i=1;i<=n;i++){
		scanf("%s",c);
		m=strlen(c);
		for(int j=0;j<=m;j++)
			if(c[j]=='-')
				g[i][j]=maxn;
			else
				g[i][j]=int(c[j]-'0');
	}
	for(int i=1;i<=n;i++){
		miin=maxn;
		for(int j=1;j<=n;j++)
			if((!vis[j])&&(dis[j]<miin))
				u=j;
		vis[u]=1;
		for(int v=1;v<=n;v++){
			if(g[u][v]<maxn)
				if(dis[u]+g[u][v]<dis[v])
					dis[v]=dis[u]+g[u][v];
		}
	}
	for(int i=1;i<u;i++)
		printf("(%d->%d)=%d\n",u,i,dis[i]);
	for(int i=u+1;i<=n;i++)
		printf("(%d->%d)=%d\n",u,i,dis[i]);
	return 0;
}
/*
5
1
0 2 - - 10
- 0 3 - 7
- - 0 4 -
- - - 0 5
- - 6 - 0
(1->2)=2
(1->3)=5
(1->4)=9
(1->5)=9
*/
