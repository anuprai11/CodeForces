#include<iostream>
#include<stdio.h>
int main(){
  int a,b,ta,tb,h,m,t,min,max;
  scanf("%d%d%d%d",&a,&b,&ta,&tb);
  scanf("%d%c%d",&h,&m);
  int tm=h*60 + m;
  min=tm-tb+1;
  min=min>300?min:301;
  max=tm+ta-1;
  num=(max-min)/;
  
  
  return 0;
}
