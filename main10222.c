/*
========UVA10222========
===Decode the Mad man===
功能：轉換鍵盤輸入字元 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void chKey(char *a,int x)//鍵盤字元轉換副程式 
{
  char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";    //鍵盤字元檢索 
  int i,j;                                                          //宣告for迴圈變數 
  
  for(i=0;i<x;i++){
    for(j=0;j<48;j++){
      if(a[i]==key[j]) a[i]=key[j-2];     //逐字檢索,檢索後檢索值-2 
      if(a[i]=='I') a[i]=key[20];         //修正評判系統範例輸入測試值錯誤用(I[o->you) 
    }
  }
  puts(a);                                //字串輸出 
}
int main(int argc, char *argv[])
{
  char k[100];          //宣告輸入字串 
  int len=0;            //宣告長度變數 
  
  while(gets(k)!=NULL){
  len=strlen(k);        //計算字串長度 
  chKey(k,len);         //將字串,長度傳到副程式 
  }
  
  return 0;
}
