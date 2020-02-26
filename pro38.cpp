#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
  long long int n,x,y, i = 0, nonContZ = 0, costRev=0, costExchange=0;
  scanf("%l64d%l64d%l64d", &n,&x,&y);
  char *b = (char*) malloc(n+5);
  bool *a = (bool*) malloc(n+5);
  scanf("%s", b);
  while(b[i]!='\0'){
    a[i] = (b[i] == '1');
    i++;
  }
  for(i=0;i<n;++i){
    if(a[i]==0){
      while(a[i] == 0){
        i++;
      }
      nonContZ++;
    }
  }
  if(nonContZ == 0){
    printf("0\n");
    return 0;
  }
  costRev = (nonContZ -1)*x + y;
  costExchange = nonContZ*y;
  if(costRev >=costExchange){
    printf("%l64d\n", costExchange);
  }else{
    printf("%l64d\n", costRev);
  }
  return 0;
}
