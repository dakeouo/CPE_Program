/*
======UVA10082======
=======WERTYU=======
功能：修正打字錯誤 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void debug(int a,char *n)
{
  char key[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";//鍵盤字元索引 
  int i,j;                                                      //宣告for迴圈變數
  
  for(i=0;i<a;i++){
    for(j=0;j<47;j++){
      if(n[i]==key[j]) n[i]=key[j-1];                           //逐字索引,檢索後索引值+1 
    }
  }
  puts(n);                                                      //字串輸出 
}
int main(int argc, char *argv[])
{
  char k[100][1000];    //宣告儲存字串陣列 
  int c=0,len=0;        //宣告計數值,長度值 
  
  while(gets(k[c])!=NULL){
    len=strlen(k[c]);     //計算字串長度 
    debug(len,k[c]);      //將字串長度,字串傳給副程式 
    c++;                  //計數值+1 
  }
	
  return 0;
}
