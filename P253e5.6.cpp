#include<bits/stdc++.h>
using namespace std;
int data[5][5]={{13,11,10,4,7},{13,10,10,8,5},{5,9,7,7,4},{15,12,10,11,5},{10,11,8,8,4}},maxl=0,g[10],f[10],work(int,int);bool p[10]={0};
int main()
{
	work(0,0);
	for(int i=1;i<=5;i++)cout<<char(64+i)<<":n"<<g[i]<<endl;
	cout<<endl;
	cout<<"supply:"<<maxl<<endl;
}
int work(int num,int t)
{
	for(int i=1;i<=5;i++)
	{
		if(!p[i])
		{
			f[num]=i;
			p[i]=1;
			t+=data[num][i];
			if(num<5)work(num+1,t);
			else if(t>maxl)
			{
				maxl=t;
				for(int j=0;j<5;j++)g[j]=f[j];
			}
		}
		t-=data[num][i];
		p[i]=0;
	}
}
/*每人选一个工作，让效益最大
	n1	n2	n3	n4	n5
A	13	11	10	4	7
B	13	10	10	8	5
C	5	9	7	7	4
D	15	12	10	11	5
E	10	11	8	8	4 */
