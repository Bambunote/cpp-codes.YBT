#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
char n[250];int s,i,j,k,len;
bool flag=false;
int main(){
	scanf("%s",n);
	cin>>s;len=strlen(n);
	for(i=1;i<=s;i++){
		for(j=0;j<len-1;j++)
			if(n[j]>n[j+1]){
				for(k=j;k<len-1;k++)
					n[k]=n[k+1];
				break;
			}
		len--;
	}
	for(i=0;i<len;i++){
		if(n[i]!='0')
			flag=true;
		if(flag)
			cout<<n[i];
	}
	return 0;
}

