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
			a[i][j]+=(a[i-1][j]>a[i-1][j-1]?a[i-1][j]:a[i-1][j-1]);
	int ans=a[n][1];
	for(int i=2;i<=n;i++)
		if(ans<a[n][i])
			ans=a[n][i];
	cout<<ans;
	return 0;
}
