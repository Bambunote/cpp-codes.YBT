#include<bits/stdc++.h>
using namespace std;
int u[8]={1,2,2,1,-1,-2,-2,-1},v[8]={-2,-1,1,2,2,1,-1,-2},
	a[100][100]={0},num=0,search(int,int,int),print();
bool b[100][100]={0};
int main()
{
	a[1][1]=1;b[1][1]=1;
	search(1,1,2);
	cout<<num<<endl;
	return 0;
}
int search(int i,int j,int n)
{
	int k,x,y;
	if(n>25){print();return 0;}
	for(k=0;k<=7;k++)
	{
		x=i+u[k];y=j+v[k];
		if(x<=5&&x>=1&&y<=5&&y>=1&&(!b[x][y]))
		{
			b[x][y]=1;a[x][y]=n;
			search(x,y,n+1);
			b[x][y]=0;
			a[x][y]=0;
		}
	}
}
int print()
{
	num++;
	if(num<=5)
	{
		for(int k=1;k<=5;k++)
		{
			for(int kk=1;kk<=5;kk++)
				cout<<setw(5)<<a[k][kk];
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
/*5*5的棋盘中一只在(1,1)出发的马，不能重复跳或出界，要求每个格都跳一下*/ 
