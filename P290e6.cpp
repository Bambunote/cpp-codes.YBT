#include<iostream>
using namespace std;
int n,st,sp;char c[101];
void print(){
	int i,m=2*(n+1);
	cout<<"step"<<st<<":";
	for(i=1;i<=m;i++)
		cout<<c[i];
	cout<<endl;
	st++;
}
void init(int n){
	int i;
	st=0;sp=2*n+1;
	for(i=1;i<=n;i++)
		c[i]='o';
	for(i=n+1;i<=2*n;i++)
		c[i]='*';
	c[sp]='-';c[sp+1]='-';
	print();
}
void move(int k){
	int i;
	for(i=0;i<=1;i++){
		c[sp+i]=c[k+i];
		c[k+i]='-';
	}
	sp=k;
	print();
}
void mv(int n){
	int i,k;
	if(n==4){
		move(4);move(8);move(2);move(7);move(1);
	}
	else{
		move(n);move(2*n-1);mv(n-1);
	}
}
int main(){
	cin>>n;
	init(n);
	mv(n);
	return 0;
}
