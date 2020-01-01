#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int a[11],x;
void search(int,int,int);
int main(){
	cout<<"输入数据（10个从小到大排列的数：）"<<endl;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>x;
	search(x,0,9);
	return 0;
}
void search(int x,int top,int bot){
	int mid;
	if(top<=bot){
		mid=(top+bot)/2;
		if(x==a[mid])
			cout<<"YES"<<endl;
		else
			if(x<a[mid])
				search(x,mid+1,bot);
			else
				search(x,top,mid-1);
	}
	else
		cout<<"NO"<<endl;
}
