#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
const int size=6;
bool b[size+1]={0};
int total=0,a[size+1]={0};
int search(int);
int print();
bool pd(int,int);
int main()
{
	a[1]=1;
	b[1]=1;
    search(2);
    cout<<total<<endl;
}
int search(int t)
{
    int i;
    for (i=2;i<=size;i++)
     if (pd(a[t-1],i)&&(!b[i]))
      {
         a[t]=i;
         b[i]=1;
         if (t==size) { if (pd(a[size],a[1])) print();}
             else search(t+1);
         b[i]=0;
      }
}
int print()
{
   total++;
   cout<<"<"<<total<<">";
   for (int j=1;j<=size;j++)
     cout<<a[j]<<" ";
   cout<<endl; 
}
bool pd(int x,int y)
{
    int k=2,i=x+y;
    while (k<=sqrt(i)&&i%k!=0) k++;
    if (k>sqrt(i)) return 1;
       else return 0;
}
/*
有1到20几个数摆成一个环，使得每相邻两数相加为素数
*/ 
