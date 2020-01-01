#include<bits/stdc++.h>
using namespace std;
bool flag[6]={1,1,1,1,1,1},
	 like[5][6]={{0,0,1,1,0},{1,1,0,0,1},{0,0,1,1,0},{0,0,0,1,0},{0,1,0,0,1}};
int book[6]={0},search(int),print(),ans;
int main()
{
	search(1);
	return 0;
}
int search(int i)
{
	for(int j=0;j<5;j++)
		if(flag[j]&&like[i][j])
		{
			flag[j]=0;
			book[i]=j;
			if(i==5)print();
			else search(i+1);
			flag[j]=1;
			book[i]=0;
		}
}
int print()
{
	ans++;
	cout<<"answer "<<ans<<":"<<endl;
	for(int i=0;i<=4;i++)cout<<i<<":"<<char(65+book[i])<<endl;
}
/*每人选一本自己喜欢的书：
	A	B	C	D	E
1			#	#
2	#	#			#
3		#	#
4				#
5		#			#*/ 
