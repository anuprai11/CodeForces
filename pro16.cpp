#include<iostream>
#include<stdio.h>
#include<map>
#include<list>
#include<vector>
#include<math.h>
#include<queue>
#include<stdlib.h>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
  int num[3],t,n,c,x,max,j,k,temptot,tempIndex,count,i,ignore;
  int maping[7];
  scanf("%d", &t);
  while(t--){
    max=-1;
    scanf("%d", &n);
    count=0;
    for(k=0;k<n;++k){
      for(j=1;j<7;++j){
        maping[j]=0;
      }
      temptot=0;
      scanf("%d", &c);
      for(i=0;i<c;++i){
        scanf("%d",&x);
        maping[x]++;
      }
      for(i=0;i<3;++i){
        num[i] = 1000;
        ignore = i;
        for (j=1;j<7;++j){
            if(maping[j]<=num[i]){
              if(maping[j]==0){
                ignore--;
              }else{
                num[i]=maping[j];
              }
            }
            if(ignore<0){
              num[i]=0;
              break;
            }
        }
        for (j=1;j<7;++j){
          maping[j]-num[i]<0 ? maping[j] = 0:maping[j]-=num[i];
        }
      }
      temptot= c + 4*num[0] + 2*num[1] +num[2];
      //cout<<num[0]<<","<<num[1]<<","<<num[2]<<endl;
      //cout<<k<<" "<<temptot<<endl;
      if(temptot >= max){
        temptot > max ? count=0 : count++;
        max=temptot;
        tempIndex = k;
      }
    }
    if(count)
      printf("tie\n");
    else{
      if(tempIndex)
        printf("%d\n", tempIndex+1);
      else
        printf("chef\n");
    }
  }
  return 0;

}