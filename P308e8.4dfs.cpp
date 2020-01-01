#include<iostream>
using namespace std;
int n,m,desx,desy,soux,souy,totstep,a[51],b[51],map[51][51];bool f;
int move(int x,int y,int step)
{
	map[x][y]=step;
	a[step]=x;b[step]=y;
	if((x=desx)&&(y=desy)){f=1;totstep=step;}
	else
	{
		if((y!=m)&&(map[x][y+1]==0))move(x,y+1,step+1);
		if((!f)&&(x!=n)&&(map[x+1][y]==0))move(x+1,y,step+1);
		if((!f)&&(y!=1)&&(map[x][y-1]==0))move(x,y-1,step+1);
		if((!f)&&(x!=1)&&(map[x-1][y]==0))move(x-1,y,step+1);
	}
}
int main()
{
	int i,j;
	cin>>n>>m;
	for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i];
	cout<<"input the enter:";cin>>soux>>souy;
	cout<<"input the exit:";cin>>desx>>desy;
	f=0;
	move(soux,souy,1);
	if(f)
	{
		for(i=1;i<=totstep;i++)
		cout<<a[i]<<","<<b[i]<<endl;
	}
	else cout<<"No way."<<endl;
	return 0;
}
/*ÃÔ¹¬ÎÊÌâdfs*/ 
