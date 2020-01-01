#include<cstdio>
#define maxn 999999999
using namespace std;
int n,i,j,x,y,p,c,z,min1,head,tail,
	tot,u,a[801][801],b[501],dis[801],
	num[801],w[801][801],team[1601];
bool exist[801];
int main(){
	scanf("%d%d%d",&n,&p,&c);
	for(i=1;i<=p;i++){
		b[i]=0;num[i]=0;
		for(j=1;j<=p;j++)
			w[i][j]=maxn;
	}
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=c;i++){
		scanf("%d%d%d",&x,&y,&z);
		w[x][y]=w[y][x]=z;
		a[x][++num[x]]=y;
		a[y][++num[y]]=x;
	}min1=maxn;
	for(i=1;i<=p;i++){
		for(j=1;j<=p;j++){
			dis[j]=maxn;
			team[j]=0;
			exist[j]=false;
		}
		dis[i]=0;team[1]=i;head=0;tail=1;exist[i]=1;
		do{
			head=(head%1601)+1;
			u=team[head];
			exist[u]=true;
			for(j=1;j<=num[u];j++)
				if(dis[a[u][j]]>dis[u]+w[u][a[u][j]]){
					dis[a[u][j]]=dis[u]+w[u][a[u][j]];
					tail=(tail%1601)+1;
					team[tail]=a[u][j];
					exist[a[u][j]]=true;
				}
		}while(head!=tail);
		tot=0;for(j=1;j<=n;j++)tot+=dis[b[j]];
		if(tot<min1)min1=tot;
	}
	printf("%d",min1);
	return 0;
}
/*
3 4 5
2
3
4
1 2 1
1 3 5
2 3 7
2 4 3
3 4 5
		P2
P1@--1--@C1
  \    /\
   \  /  \
    5 7  3
    \ /   \
    P2@-5-@C3
          P4
*/
