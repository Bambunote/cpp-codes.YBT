#include<bits/stdc++.h>
using namespace std;
const int LEN=8;
int sum=0;
bool b[LEN+1][LEN+1]={0};
bool isvalid(int r,int c)
{
	for(int i=1;i<c;i++)
		for(int j=1;j<=LEN;j++)
			if((r-c==i-j)||(r+c==i+j)||r==j)
			{
				return 0;
			}
}
void dfs(int n)
{
	for(int i=1;i<=LEN;i++)
		for(int k=1;k<=i;k++)
			if(isvalid(i,k))
			{
				b[i][k]=1;
				if(k==LEN)sum++;
				else dfs(k+1);
			}
}
int main()
{
	dfs(1);
	cout<<sum<<endl;
	return 0;
}
/*eight queens probelm*/ 
