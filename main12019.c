/*
=========UVA12019=========
===Doom's Day Algorithm===
功能：輸入日期來查詢星期(僅2011年份) 
*/

#include <stdio.h>
#include <stdlib.h>

int week(int m,int d)//計算星期副程式 
{
  int w=0;                                      //宣告回傳值 
  
  if(m<=2){
    if(m==2) {w=d%7;}                           //以2/28為星期一來推算 
    if(m==1) {w=(d+4)%7;}                       //以1/31為星期日來推算
  }else{
    if(m%2==0){                                 //以4/4,6/6,8/8,10/10,12/12為星期一來推算
      if(d>m) {w=(d-m)%7;}                       
      else {w=7-((m-d)%7); if(w>=7) w=w-7;}     
    }else{
      if(m<=8){                                 //以3/3,5/5,7/7為星期四來推算
        if(d>m) {w=((d-m+3)%7);}
        else {w=7-((m-d+4)%7); if(w>=7) w=w-7;}
      }else{                                    //以9/9,11/11為星期五來推算
        if(d>=m) {w=(d-m+4)%7;}
        else {w=7-((m-d+3)%7); if(w>=7) w=w-7;}
      }
    }
  }
  
  return w;
}
int main(int argc, char *argv[])
{
  int n=0,x=0;                          //宣告資料筆數,星期變數 
  int M[100],D[100];                    //宣告月陣列,日陣列 
  int i;                                //for迴圈變數 
  
  scanf("%d",&n);                       //輸入筆數 
  for(i=0;i<n;i++)
  {scanf("%d %d",&M[i],&D[i]);}         //輸入日期 
  
  for(i=0;i<n;i++){
    x=week(M[i],D[i]);                  //將日期送到副程式並接收星期值 
    if(x==0) printf("Monday\n");        //此日為星期一 
    if(x==1) printf("Tuesday\n");       //此日為星期二 
    if(x==2) printf("Wednesday\n");     //此日為星期三 
    if(x==3) printf("Thursday\n");      //此日為星期四 
    if(x==4) printf("Friday\n");        //此日為星期五 
    if(x==5) printf("Saturday\n");      //此日為星期六 
    if(x==6) printf("Sunday\n");        //此日為星期日 
  }
  
  return 0;
}
