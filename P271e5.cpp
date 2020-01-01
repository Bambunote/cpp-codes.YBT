#include<iostream>
using namespace std;
int n,begin[1001],end[1001];
void init(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>begin[i]>>end[i];
}
void qsort(int x,int y){
	int i=x,j=y,mid=end[(x+y)/2],t;
	while(i<=j){
		while(end[i]<mid)i++;
		while(end[j]>mid)j--;
		if(i<=j){
			t=end[j];end[j]=end[i];end[i]=t;
			t=begin[j];begin[j]=begin[i];begin[i]=t;
		}
	}
	if(x<j)qsort(x,j);
	if(i<y)qsort(i,y);
}
void solve(){
	int ans=0;
	for(int i=1,t=-1;i<=n;i++)
		if(begin[i]>=t){
			ans++;
			t=end[i];
		}
	cout<<ans<<endl;
}
int main(){
	init();
	qsort(1,n);
	solve();
	return 0;
}
