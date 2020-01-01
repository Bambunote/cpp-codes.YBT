#include<iostream>
using namespace std;
int temp[10001],a[10001],tot=0;
void msort(int L,int R){
	if(L==R)return;
	int M=(L+R)/2;
	msort(L,M);msort(M+1,R);
	int p=L,i=L,j=M+1;
	while(i<=M&&j<=R)
		if(a[i]>a[j]){
			tot+=(M-i+1);
			temp[p++]=a[j++];
		}
		else
			temp[p++]=a[i++];
	while(i<=M)temp[p++]=a[i++];
	while(j<=R)temp[p++]=a[j++];
	for(i=L;i<=R;i++)a[i]=temp[i];
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	msort(1,n);
	cout<<tot;
	return 0;
}
