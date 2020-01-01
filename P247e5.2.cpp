#include<bits/stdc++.h>
using namespace std;
int num=0,a[10001]={0},n,r;
bool b[10001]={0};
int search(int);
int print();
int main()
{
	cout<<"input n,r:";
	cin>>n>>r;
	search(1);
	cout<<"number="<<num<<endl;
}
int search(int k)
{
	int i;
	for(int i=1;i<=n;i++)
		if(!b[i])
		{
			a[k]=i;
			b[i]=1;
			if(k==r)print();
			else search(k+1);
			b[i]=0;
		}
}
int print()
{
	num++;
	for(int i=1;i<=r;i++)cout<<setw(3)<<a[i];
	cout<<endl;
}
/*
设有n个数的集合，从中任意取出r个数进行排列（r<n）试列出所有的排列
*/ 
