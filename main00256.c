/*
=========UVA00256========
====Quirksome Squares====
块N,N计Quirksome Squares┮Τ秆
(Quirksome Squares:盢计眖い╊Θㄢ计,ㄢ计㎝キよ单ㄓ计) 
*/

#include <stdio.h>
#include <stdlib.h>

void format(int a,int x)//盢玡干0捌祘Α 
{
  int n[8];                               //format皚 
  int p=0,q=0,c=0;                        //砆埃计,埃计,璸计 
  int i;                                  //for癹伴跑计
  for(i=0;i<a;i++)
  {p=x/10; q=x%10; x=p; n[c]=q; c++;}     //盢计糶皚(眖计->蔼计) 
  for(i=a-1;i>=0;i--){printf("%d",n[i]);} //盢皚块 
  printf("\n");                           //传︽ 
}
void qui(int a)//тQuirksome Squares
{
  int num[100]={0};                      //魁皚 
  int i;                                 //for癹伴跑计 
  int p=1,q=1,x=0,y=0;                   //程,ち澄,ち澄ㄢ计跑计 
  int c=0;                               //璸计 
  
  for(i=0;i<a;i++) {p=p*10;}             //璸衡程 
  for(i=0;i<a/2;i++) {q=q*10;}           //璸衡ち澄 
  for(i=0;i<p;i++){
    x=i/q; y=i%q;                        //璸衡ち澄ㄢ计 
    if(((x+y)*(x+y))==i){num[c]=i; c++;} //狦才Quirksome Squares,盢计皚,璸计+1 
  }
  for(i=0;i<c;i++){format(a,num[i]);}    //盢计肚倒捌祘Α暗块 
}
int main(int argc, char *argv[])
{
  int a=0;   //块计 
  
  while(scanf("%d",&a)!=EOF){qui(a);}   //盢计肚倒捌祘Α 
	
  return 0;
}
