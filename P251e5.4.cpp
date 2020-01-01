#include<bits/stdc++.h>
using namespace std;
int a[100][3],t=0;
int x[4]={2,1,-1,-2},y[4]={1,2,2,1};
int search(int),print(int);
int main()
{
	a[1][1]=0;a[1][2]=0;
	search(2);
	return 0;
}
int search(int i)
{
	for(int j=0;j<=3;j++)
		if(a[i-1][1]+x[j]>=0&&a[i-1][1]+x[j]<=4&&a[i-1][2]+y[j]>=0&&a[i-1][2]+y[j]<=8)
		{
			a[i][1]=a[i-1][1]+x[j];
			a[i][2]=a[i-1][2]+y[j];
			if(a[i][1]==4&&a[i][2]==8)print(i);
			else search(i+1);
		}
}
int print(int ii)
{
	t++;
	cout<<t<<":";
	for(int i=1;i<=ii-1;i++)cout<<a[i][1]<<","<<a[i][2]<<"-->";
	cout<<"4,8"<<endl;
}
/*只能往右边走的马*/ 
