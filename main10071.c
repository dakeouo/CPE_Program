/*
=============UVA10071============
===Back to High School Physics===
功能：計算在一固定速度下，兩倍時間內的位移
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int V,T;                          //宣告速度變數,位移變數 
  while(scanf("%d%d",&V,&T)!=EOF) {      
    printf("%d\n",V*(2*T));         //V*(2*T)
  }
	
  return 0;
}
