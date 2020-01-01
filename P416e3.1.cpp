#include<cstdio>
using namespace std;
int n,m,tree[101];//一维数组记录父结点 
int main(){
	int i,x,y,root,maxroot,sum=0,j,Max=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++){
		scanf("%d %d",&x,&y);
		tree[y]=x;
	}
	for(i=1;i<=n;i++)
		if(tree[i]==0){
			root=i;break;
		}
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<=n;j++)
			if(tree[j]==i)
				sum++;
		if(sum>Max){
			Max=sum;maxroot=i;
		}
	}
	printf("%d\n%d\n",root,maxroot);
	for(int i=1;i<=n;i++)
		if(tree[i]==maxroot)
			printf("%d ",i);
	return 0;
}
/*
in:
8 7
4 1
4 2
1 3
1 5
2 6
2 7
2 8
out:
4
2
6 7 8
*/
