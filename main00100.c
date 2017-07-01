/*
========UVA00100========
===The 3n + 1 problem===
块a,b絛瞅,盢簍衡猭程cycle块
簍衡猭
1)块 n
2) n
3)狦 n = 1 挡
4)狦 n 琌计 ê或 n=3*n+1
5)玥 n=n/2
6)GOTO 2
*/

#include <stdio.h>
#include <stdlib.h>

int cycle(int a)//cycle length 捌祘Α 
{
  int h[10000]={0};  //魁簍衡猭计 
  int c=1;           //璸计 
  int i;             //for癹伴跑计
  
  h[0]=a;            //cycle材计 
  while(a>1){
    if(a%2==0) a=a/2;//狦计案计碞埃 
    else a=(a*3)+1;  //狦计计碞+1 
    h[c]=a;          //盢cycle癘魁皚 
    c++;             //璸计+1 
  }
  
  return c;          //肚璸计 
}
int maxLen(int a,int b)//―程cycle捌祘Α 
{
  int n[500000]={0}; //cycle皚 
  int c=0,max=1,t=0; //璸计,程cycle,ユ传 
  int i;             //for癹伴跑计 
  
  if(a>b) {t=a; a=b; b=t;}                  //璝a>b,贱ㄢ计计が传 
  for(i=a;i<=b;i++){n[c]=cycle(i); c++;}    //硋璸衡–计cycle 
  for(i=0;i<c;i++){if(n[i]>max) max=n[i];}  //―程cycle
  
  return max;                               //肚程cycle
}
int main(int argc, char *argv[])
{
  int a=0,b=0,ans=0;                      //絛瞅(ㄢ计a,b),cycle程 
  
  while(scanf("%d %d",&a,&b)!=EOF){
    ans=0;                                //盢cycle程
    ans=maxLen(a,b);                      //盢a,bㄢ肚倒捌祘Α,―cycle程 
    printf("%d %d %d\n",a,b,ans);         //块a,b,cycle程 
  }
  	
  return 0;
}
