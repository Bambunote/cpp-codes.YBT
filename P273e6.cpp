#include<iostream>
using namespace std;
int a[10001],b[10001],ssum=0,n,m;
void qsort(int,int);
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	qsort(1,n);
	for(int i=1,x=-1;i<=n;i++){
		if(x>=a[i])
			continue;
		ssum++;x=b[i];
	}
	cout<<ssum<<endl;
	return 0;
}
void qsort(int x,int y){
	int i=x,j=y,mid1=b[(x+y)/2],mid2=a[(x+y)/2],t;
	while(i<=j){
		while(b[i]<mid1||((b[i]==mid1)&&(a[i]<mid2)))i++;
		while(b[j]>mid1||((b[j]==mid1)&&(a[j]>mid2)))j--;
		if(i<=j){
			t=b[j];b[j]=b[i];b[i]=t;
			t=a[j];a[j]=a[i];a[i]=t;
			i++;j--;
		}
	}
	if(x<j)qsort(x,j);
	if(i<y)qsort(i,y);
}
