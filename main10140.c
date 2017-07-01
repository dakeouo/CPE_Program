/*
========UVA10140========
=====Prime Distance=====
盢﹃计锣Θゅ糶 
*/

#include <stdio.h>
#include <stdlib.h>

void prop(unsigned long long a,unsigned long long b)//借计捌祘Α 
{
  int i,j;                              //for癹伴跑计 
  int c=0,s=0,d=0,min=1,max=1;          //借计璸计,(借计篨夹/程畉篨夹),程畉篨夹,程畉,程畉 
  unsigned long long x[100000]={0};     //借计皚
  int q=0;
   
  for(i=a;i<=b;i++){
    for(j=2;j<i;j++){if((i%j)==0) {break;} s++;}//耞借计 
    if(s==i-2) {x[c]=i; c++;}                   //盢借计糶皚 
    s=0;
  }
  min=x[1]-x[0]; s=0; d=0;                      //盢程畉篨夹,程畉篨夹,程畉,程畉﹍て 
  for(i=1;i<(c-1);i++){
    q=x[i+1]-x[i];                              //盢綟ㄢ计搭 
    if(q>max) {max=q; s=i;}                     //程畉计 
    if(q<min) {min=q; d=i;}                     //程畉计 
  }
  if(c>1) printf("%llu,%llu are closest, %llu,%llu are most distant.\n",x[d],x[d+1],x[s],x[s+1]); //块 
  else printf("There are no adjacent primes.\n");//ぃㄢ借计块 
}
int main(int argc, char *argv[])
{
  unsigned long long a=0,b=0;                 //絛瞅ぇㄢ计 
  
  while(scanf("%llu %llu",&a,&b)!=EOF){
    prop(a,b);                           //盢ㄢ计肚倒捌祘Α 
  }
	
  return 0;
}
