#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[101][101]={0};
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];
	for(int i=2;i<=n;i++)
		for(int j=1;j<=i;j++)
		{
			if(a[i-1][j]>a[i-1][j-1])
			{
				a[i][j]+=a[i-1][j];
				cout<<a[i-1][j]<<" ";
				continue;
			}
			else a[i][j]+=a[i-1][j-1];
			cout<<a[i-1][j-1]<<" ";
		}
	int ans=a[n][1];
	for(int i=2;i<=n;i++)
		if(ans<a[n][i])
			ans=a[n][i];
	cout<<ans;
	return 0;
}
/*
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
*/
