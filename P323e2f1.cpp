#include<iostream>
using namespace std;
const int MAXN=1005;
int A[MAXN][MAXN],F[MAXN][MAXN],N,Ans;
void dfs(int,int,int);
int main(){
	cin>>N;
	for(int i=1;i<=N;i++)
		for(int j=1;j<=i;j++)
			cin>>A[i][j];
	Ans=0;
	dfs(1,1,A[1][1]);
	cout<<Ans;
	return 0;
}
void dfs(int x,int y,int Curr){
	if(x==N){
		if(Curr>Ans)Ans=Curr;
		return;
	}
	dfs(x+1,y,Curr+A[x+1][y]);
	dfs(x+1,y+1,Curr+A[x+1][y+1]);
}
