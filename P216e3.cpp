#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,a[101];
	cout<<"input n:";
	cin>>n;
	a[1]=1;
	a[2]=2;
	cout<<"x[1]="<<a[1]<<endl;
	cout<<"x[2]="<<a[2]<<endl;
	for(i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
		cout<<"x["<<i<<"]="<<a[i]<<endl;
	}
	return 0;
}
