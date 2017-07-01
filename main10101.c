/*
========UVA10101========
=====Bangla Numbers=====
盢﹃计锣Θゅ糶 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num[10]={0};                //计だ澄皚 
void output(int a)              //ゅ块捌祘Α 
{
  int i;                                                //for癹伴跑计
  int s=0,z=0;                                          //玡计璸计 
  printf("%4d.",a);                                     //兜ヘ絪腹块 
    for(i=9;i>=0;i--)
    { 
      if(num[i]!=0) {
        printf(" %d",num[i]);                           //计块 
        if((i%5)+(i/5)==1) printf(" shata");            //ゅ块(shata) 
        if((i%5)+(i/5)==2) printf(" hajar");            //ゅ块(hajar)
        if((i%5)+(i/5)==3) printf(" lakh");             //ゅ块(lakh)
        if((i%5)+(i/5)==4) printf(" kuti");             //ゅ块(kuti)
        if(i>4) s++;                                    //玡计箂盎代璸计 
      }else{
        z++;                                            //计箂盎代璸计 
        if((i==4)&(num[4]==0)&(s!=0)) printf(" kuti");  //璝玡Τnum[4]⊿盎代 
      }
    }
  if(z==10) printf(" %d",0);                            //计常箂盎代 
  printf("\n");                                         //传︽ 
}
void bangla(int x0,int x1)      //计だ澄捌祘Α 
{
  int m[5]={100,10,100,100,100};                   //埃计计 
  int i;                                           //for癹伴跑计
  int q=0,r=0;                                     //砆埃计(q)&埃计(r)跑计

  for(i=0;i<10;i++) {num[i]=0;}
  if(x0!=0)                                        //x0计琌0 
  {
    for(i=0;i<5;i++)
    {q=x0/m[i]; r=x0%m[i]; x0=q; num[i]=r;}
  }
  if(x1!=0)                                        //x1计琌0
  {
    for(i=1;i<5;i++)
    {q=x1/m[i]; r=x1%m[i]; x1=q; num[i+4]=r;}
  }
}
int main(int argc, char *argv[])
{
  char n[20]={0},m1[7]={0},m0[9]={0};  //﹃(块ノ),玡场﹃,场﹃ 
  int a1=0,a0=0;                       //玡场跑计,场跑计
  int count=0,len=0,c=1;               //璸计 
  int i;                               //for癹伴跑计 
  
  while(scanf("%s",n)!=EOF){           //块﹃(︽块︽计ゼ) 
  
    for(i=0;i<7;i++) {m1[i]=0;}        //m1耴箂 
    for(i=0;i<9;i++) {m0[i]=0;}        //m0耴箂 
    a1=0; a0=0;                        //a1&a2耴箂 
  
    len=strlen(n);                     //璸衡﹃
    if(len<16)                         //﹃16?
    {
      for(i=0;i<16;i++)
      {
        if(len>9)                      //﹃9?
        {
          if(i<(len-9)) m1[i]=n[i];    //盢玡(len-9)じ糶秈m1
          else m0[i-(len-9)]=n[i];     //盢じ糶秈m0
        }else{
          m0[i]=n[i];                  //钡р┮Τじ糶秈m0 
        }
      }
      a1=atoi(m1); a0=atoi(m0);        //盢﹃锣ゅ 
      bangla(a0,a1);                   //计だ澄 
      output(c);                       //ゅ块 
    }
    c++;                               //兜ヘ絪腹璸计 
  }                                    //while挡	
  return 0;
}
