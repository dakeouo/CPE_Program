/*
=======UVA10235=======
=====Simply Emirp=====
耞借计籔は借计 
*/

#include <stdio.h>
#include <stdlib.h>

int powX(int a,int x)//Ωよ捌祘Α(math.hいpow(┏计,Ωよ)ぃ非) 
{
  int s=0;   //┏计 
  int i;     //for癹伴跑计
  
  s=a;                        //盢┏计 
  for(i=1;i<x;i++){a*=s;}     //┏计Ωよ 
  if(x==0) a=1;               //狦Ωよ计0,┏计1 
  
  return a;                   //肚┏计 
}
int emirp(int a)//耞は借计捌祘Α
{
  int n[10]={0};        //计皚 
  int p=0,c=0,s=0,em=0; //砆埃计(璸衡ノ),(璸计),耞,は借计跑计 
  int i;                //for癹伴跑计 
  
  p=a;                                      //盢计肚倒砆埃计 
  for(i=0;i<10;i++)
  {n[c]=p%10; p=p/10; c++; if(p==0) break;} //皚=埃緇计,砆埃计=埃,+1,狦砆埃计0碞铬癹伴 
  for(i=0;i<c;i++)
  {em+=n[i]*powX(10,c-i-1);}                //はΩよ 
  c=0;                                      //耴0(跑Θ璸计ノ)
  for(i=2;i<em;i++)
  {if(em%i==0) c++;}                        //狦俱埃,璸计+1 
  if((c==0)&(a!=em)) s=1;                   //狦璸计0ぃ单计,耞=1 
  
  return s;                                 //肚耞 
}
int prime(int a)//耞借计捌祘Α 
{
  int c=0,s=0;    //璸计,耞 
  int i;          //for癹伴跑计 
  
  for(i=2;i<a;i++){if(a%i==0) c++;}        //璸衡俱埃计 
  if(c==0) s=1;                            //狦计借计,耞块1 
  if((s==1)&(a>10)) {if(emirp(a)==1) s=2;} //耞1,耞琌は借计,狦琌,耞块2
  
  return s;                                //肚耞 
}
int main(int argc, char *argv[])
{
  int n=0,s=0;     //计跑计,盎代借计跑计 
   
  while(scanf("%d",&n)!=EOF){
    s=prime(n);                                //盢计肚捌祘Α 
    if(s==2) printf("%d is emirp.\n",n);       //琌は借计 
    if(s==1) printf("%d is prime.\n",n);       //琌借计,ぃ琌は借计 
    if(s==0) printf("%d is not prime.\n",n);   //ぃ琌借计 
  }
	
  return 0;
}
