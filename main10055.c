/*
===========UVA10055==========
==Hashmat the Brave Warrior==
璸衡蛮よ畉ぶ(ㄢ计搭) 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  unsigned long long n1=0,n2=0,a=0;         //疭跑计=>计1计2搭 
  while(scanf("%lld%lld",&n1,&n2)!=EOF){    
    if(n1>n2) a=n1-n2;                      //璝计1>计2,计1-计2
    if(n1<n2) a=n2-n1;                      //璝计1<计2,计2-计1
    printf("%lld\n",a);                     //块搭 
  }
  return 0;
}
