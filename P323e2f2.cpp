#include<iostream>
using namespace std;
const int MAXN=1005;
int A[MAXN][MAXN],F[MAXN][MAXN],N;
int max(int x,int y){return x>y?x:y;}
int Dfs(int x,int y){
	if(F[x][y]==-1)
		if(x==N)
			F[x][y]=A[x][y];
		else
			F[x][y]=A[x][y]+max(Dfs(x+1,y),Dfs(x+1,y+1));
	return F[x][y];
}
int main(){
	cin>>N;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=i;j++)
			cin>>A[i][j];
	for(int i=1;i<=N;i++)
		for(int j=1;j<=i;j++)
			F[i][j]=-1;
	Dfs(1,1);
	cout<<F[1][1];
	return 0;	
}
