#include<iostream>
#include<cstring>
using namespace std;
int n,x,y,a[51][51][4];
int main(){
	cin>>n;
	memset(a,0,sizeof(a));
	for(x=1;x<=n;x++)
		for(y=1;y<=x;y++){
			cin>>a[x][y][1];
			a[x][y][2]=a[x][y][1];
			a[x][y][3]=0;
		}
	for(x=n-1;x>=1;x--)
		for(y=1;y<=x;y++)
			if(a[x+1][y][2]>a[x+1][y+1][2]){
				a[x][y][2]=a[x][y][2]+a[x+1][y][2];
				a[x][y][3]=0;
			}
			else{
				a[x][y][2]=a[x][y][2]+a[x+1][y+1][2];
				a[x][y][3]=1;
			}
	cout<<"max="<<a[1][1][2]<<endl;y=1;
	for(x=1;x<n;x++){
		cout<<a[x][y][1]<<"->";
		y=y+a[x][y][3];
	}
	cout<<a[n][y][1]<<endl;
	return 0;
}

