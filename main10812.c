/*
========UVA10812========
====Beat the Spread!====
功能：給兩數相加,兩數相減值算出兩數(結果不為負) 
*/

#include <stdio.h>
#include <stdlib.h>

int x=0,y=0;       //宣告兩數
 
int spread(int n1,int n2)//判斷兩數副程式 
{
  int s=0;                  //宣告判斷變數 
  
  x=(n1+n2)/2;              //(兩數相加)/2算出x(大值) 
  y=(n1-n2)/2;              //(兩數相減)/2算出y(小值) 
  if((x+y==n1)&(x-y==n2)){
    if((x>0)&(y>0)) s=1;    //若結果合理輸出1 
  }else{
    s=0;                    //不合理輸出0 
  }
  
  return s;                 //回傳判斷值 
}
int main(int argc, char *argv[])
{
  int n=0,yn=0;                     //宣告筆數值,判斷值 
  int a[100],b[100];                //宣告兩數紀錄值陣列 
  int i;                            //for迴圈變數 
  
  scanf("%d",&n);                   //輸入比數值 
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);     //輸入兩數和值及兩數差值 
  }
  for(i=0;i<n;i++){
    yn=spread(a[i],b[i]);           //將數值放入陣列判斷兩數的值是否合理 
    if(yn==1) printf("%d %d\n",x,y);//合理,輸出兩數 
    else printf("impossible\n");    //不合理,輸出"impossible" 
  }
	
  return 0;
}
