#include<bits/stdc++.h>
using namespace std;
int  ju[9][9]={{0,0,0,0,0,0,0,0,0},
              {0,1,0,0,0,1,0,1,1},
              {0,0,1,1,1,1,0,1,1},
              {0,0,1,1,0,0,1,1,1},
              {0,0,1,0,1,1,1,0,1},
              {0,1,1,0,1,1,1,0,0},
              {0,0,0,1,1,1,1,1,0},
              {0,1,1,1,0,0,1,1,0},
              {0,1,1,1,1,0,0,0,1}};
int a[101],b[101];bool s[9];
int out(int d)
{
	cout<<char(a[d]+64);
	while(b[d])
	{
		d=b[d];
		cout<<"--"<<char(a[d]+64);
	}
	cout<<endl;
}
void doit()
{
	int head=0,tail=1,i;
	a[1]=1;b[1]=0;s[1]=1;
	do
	{
		head++;
		for(i=1;i<=8;i++)
			if((ju[a[head]][i]==0)&&(s[i]==0))
			{
				tail++;
				a[tail]=i;
				b[tail]=head;
				s[i]=1;
				if(i==8){out(tail);head=tail;break;}
			} 
	}while(head<tail);
}
int main()
{
	memset(s,0,sizeof(s));
	doit();
	for(int i=0;i<9;i++)cout<<a[i]<<" ";
	cout<<endl;
	for(int i=0;i<9;i++)cout<<b[i]<<" ";
	return 0;
}
