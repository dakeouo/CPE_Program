/*
========UVA10035========
===Primary Arithmetic===
功能：計算出兩數相加時，共有幾個位數有進位 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void carry(unsigned long x,unsigned long y)
{
  int za[15]={0};                                   //宣告存放陣列 
  int s=0,len=0,p=0,q=0;                            //宣告1的計數值,長度值,被除數,除數 
  int zx[10]={0},zy[10]={0},con=0,cx=0,cy=0;        //x數值存放,y數值存放 
  int i;                                            //宣告for迴圈變數 
  
  p=x; con=0;                                       //將x的值傳給p,con設為0 
  while(p!=0){q=p%10; p=p/10; zx[con]=q; con++;}    //將x的值一一存放陣列 
  cx=con;                                           //紀錄位數 
  p=y; con=0;                                       //將y的值傳給p,con設為0 
  while(p!=0){q=p%10; p=p/10; zy[con]=q; con++;}
  cy=con;
  
  int ci=0;
  if(cx>=cy){
    for(i=0;i<=cx;i++)
    {za[i]=zx[i]+zy[i]+ci; ci=za[i]/10; za[i]=za[i]%10; if(ci>0) s++;}      //數值相加(x>y) 
  }else{
    for(i=0;i<=cy;i++)
    {za[i]=zx[i]+zy[i]+ci; ci=za[i]/10; za[i]=za[i]%10; if(ci>0) s++;}      //數值相加(y>x)
  }
  
  if(s==0) printf("No carry operation.\n");                                 //沒有進位 
  if(s==1) printf("%d carry operation.\n",s);                               //進一位 
  if(s>1) printf("%d carry operations.\n",s);                               //進一位以上 
}
int main(int argc, char *argv[])
{
  unsigned long a[100]={0},b[100]={0};  //宣告兩數陣列 
  int za=1,zb=1,c=0;                    //宣告判斷值(za,zb),計數值 
  int i;                                //宣告for迴圈變數 
  
  while((za!=0)&(zb!=0))
  {
    scanf("%lld %lld",&a[c],&b[c]);      //輸入a,b
    za=a[c]; zb=b[c];                    //將a,b傳給判斷值 
    c++;                                 //計數值+1 
  }
  for(i=0;i<(c-1);i++)
  {carry(a[i],b[i]);}                    //將值傳入副程式 
  
  return 0;
}
