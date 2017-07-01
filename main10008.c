/*
=========UVA10008=========
===What's Cryptanalysis===
功能：計算一段話各個字母的個數 
*/

#include <stdio.h>
#include <stdlib.h>

char n[100][1000];            //宣告紀錄句子字元陣列 

void count(int x)//計數字元副程式 
{
  char c[26];                                           //宣告A~Z字元變數 
  int d[26];                                            //宣告計數字母變數 
  int i,j;                                              //宣告for迴圈變數 
  
  for(i=0;i<26;i++)
  {c[i]=65+i; d[i]=0;}                                  //將字元變數A~Z填入,將計數變數值填0 
  for(i=0;i<=x;i++){
    for(j=0;j<100;j++){
      if((n[i][j]>96)&(n[i][j]<123)) d[n[i][j]-97]++;   //若為a~z就將該計數值+1 
      if((n[i][j]>64)&(n[i][j]<91)) d[n[i][j]-65]++;    //若為A~Z就將該計數值+1
    }
  }
  for(j=26;j>0;j--){
    for(i=0;i<26;i++){
     if(d[i]==j) printf("%c %d\n",c[i],d[i]);           //依照計數大小值輸出 
    }
  }
}
int main(int argc, char *argv[])
{
  int a;                //宣告行數變數 
  int i;                //宣告for迴圈變數 
  
  scanf("%d",&a);       //輸入行數 
  for(i=0;i<=a;i++)
  {gets(n[i]);}         //輸入句子 
  count(a);             //將行數傳入副程式 
	
  return 0;
}
