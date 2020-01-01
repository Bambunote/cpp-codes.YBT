#include<iostream>
#include<cstring>
using namespace std;
int dx[]={-2,-2,-1,1,2,2,2,2,1,-1,-2,-2},dy[]={-1,-2,-2,-2,-2,-2,-1,1,2,2,2,2,1},
	s[101][101],que[10000][4]={0},x1,y1,x2,y2,head=1,tail=1;
int main()
{
	memset(s,0xff,sizeof(s));
	que[1][1]=1;que[1][2]=1;que[1][3]=0;
	cin>>x1>>y1>>x2>>y2;
	while(head<=tail)
	{
		for(int i=0;i<=11;i++)
		{
			int x=que[head][1]+dx[i],y=que[head][2]+dy[i];
			if(x>0&&y>0&&s[x][y]==-1)
			{
				s[x][y]=que[head][3]+1;
				tail++;
				que[tail][1]=x;que[tail][2]=y;que[tail][3]=s[x][y];
				if(s[x1][y1]>0&&s[x2][y2]<0)
				{
					cout<<s[x1][y1]<<endl<<s[x2][y2]<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
