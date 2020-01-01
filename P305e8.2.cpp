#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,0,1,0},dy[]={0,1,0,-1},bz[100][100],num=0,n,m;
void doit(int p,int q)
{
	int x,y,t,w,i,h[1000][3];num++;bz[p][q]=0;t=0;w=1;
	h[1][1]=p;h[1][2]=q;
	do
	{
		t++;
		for(i=0;i<4;i++)
		{
			x=h[t][1]+dx[i];y=h[t][2]+dy[i];
			if((x>=0)&&(x<m)&&(y>=0)&&(y<n)&&(bz[x][y]))
			{
				w++;
				h[w][1]=x;
				h[w][2]=y;
				bz[x][y]=0;
			}
		}
	}while(t<w);
}
int main()
{
	int i,j;
	char s[100],ch;
	cin>>n>>m;
	getchar();
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			bz[i][j]=1;
	for(i=0;i<n;i++)
	{
		gets(s);
		for(j=0;j<m;j++)
			if(s[j]=='0')bz[i][j]=0;
	}
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(bz[i][j])
				doit(i,j);
	cout<<num;
	return 0;
}
