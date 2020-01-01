#include<cstdio>
#include<cstring>
#define maxn 101
int g[maxn][maxn],du[maxn],circuit[maxn],n,e,circuitpos,x,y,start=1;
void find_circuit(int x){
	for(int i=1;i<=n;i++)
		if(g[x][i]){
			g[x][i]=0;g[i][x]=0;
			find_circuit(i);
		}
	circuit[++circuitpos]=x;
}
int main(){
	scanf("%d%d",&n,&e);
	for(int i=1;i<=e;i++){
		scanf("%d%d",&x,&y);
		g[x][y]=1;g[y][x]=1;
		du[x]++;du[y]++;
	}
	for(int i=1;i<=n;i++)
		if(du[i]%2==1)
			start=i;
	circuitpos=0;find_circuit(start);
	for(int i=1;i<=circuitpos;i++)
		printf("%d ",circuit[i]);
	return 0;
}
/*
5 5
1 2
2 3
3 4
4 5
5 1
*/
/*
1 5 4 3 2 1
*/ 
