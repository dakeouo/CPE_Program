/*
========UVA10931========
=========Parity=========
功能：將數值轉成二進位並算出1的個數 
*/

#include <stdio.h>
#include <stdlib.h>

void bin(unsigned long x)
{
  unsigned long s=0;               //宣告被除數數值 
  int b[32]={0};                   //宣告二進位陣列 
  int c=0,d=0;                     //宣告二進位位數旗標,1個數計數 
  int i;                           //宣告for迴圈變數
  
  for(i=0;i<32;i++){
    s=x/2; b[i]=x%2; x=s; c=i;     //s存x商數,二進位陣列存x餘數,s傳給x,c存位數旗標 
    if(s==0) break;                //如果商數為0,跳出迴圈 
  }
  for(i=c;i>=0;i--)
  {if(b[i]==1) d++;}               //如果該位數為1.計數值+1 
  
  //======================以下為輸出====================
  printf("The parity of ");
  for(i=c;i>=0;i--)
  {printf("%d",b[i]);}
  printf(" is %d (mod 2).\n",d);
}
int main(int argc, char *argv[])
{
  unsigned long sum[100];       //宣告輸入數值 
  unsigned long s=1;            //宣告檢測值 
  int c=0;                      //宣告筆數數值 
  int i;                        //宣告for迴圈變數 
  
  while(s!=0){
    scanf("%lld",&sum[c]);      //輸入數值 
    s=sum[c];                   //將數值傳給檢測值 
    c++;                        //計數值+1 
  }
  for(i=0;i<(c-1);i++)
  {bin(sum[i]);}                //將數值傳給副程式 
	
  return 0;
}
