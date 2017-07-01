/*
========UVA10929========
=====You can say 11=====
功能：判斷數值是否為11的倍數 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ch11(int x,char* n) //判斷11倍數副程式 
{
  int a=0,a1=0,a0=0,c=0;    //宣告數值加總變數、奇數紀錄值、偶數紀錄值、判斷變數 
  int i;                    //宣告for迴圈計數值
  
  for(i=0;i<x;i++)
  {
    a=n[i]-48;              //將資料的ascii-48([48~58]=>[0~9]) 
    if(i%2==0) a0+=a;       //若為偶位數,將結果紀錄於偶數紀錄值
    else a1+=a;             //若為奇位數,將結果紀錄於奇數紀錄值
  }
  if((a0-a1)%11==0) c=1;    //計算結果為11的倍數 
  else c=0;                 //計算結果非11的倍數 

  return c;                 //回傳結果值給主程式 
}
int main(int argc, char *argv[])
{
  char str[100][1000],kin[100]={1},lenK[100];//宣告紀錄值、輸入值、長度計數值 
  int i;                                     //宣告for迴圈計數值 
  int k=0,len=0,z=1,yn=0;                    //宣告筆數值、長度值、偵測值、判斷值 
  while(z!=0)                                //偵測是否有輸入0 
  {
    scanf("%s",&kin);                        //輸入字串 
    z=atoi(kin);                             //將字串轉為數值(偵測用) 
    len=strlen(kin);                         //計算字串長度 
    for(i=0;i<len;i++)
    {str[k][i]=kin[i];}                      //將字串記錄下來 
    lenK[k]=len;                             //將長度值記錄下來 
    k++;                                     //筆數值+1 
  }
  for(i=0;i<(k-1);i++)
  {
    yn=ch11(lenK[i],str[i]);                              //將長度值、字串丟給副程式判斷 
    if(yn==1) printf("%s is a multiple of 11.\n",str[i]); //結果為11的倍數 
    else printf("%s is not a multiple of 11.\n",str[i]);  //結果非11的倍數 
  }
  	
  return 0;
}
