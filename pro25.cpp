#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int i,n, a[103],j=0, indexes[103], count=0, temp, alice, totalSum=0;
  scanf("%d",&n);
  scanf("%d", &alice);
  for(i=0;i<n-1;++i){
    scanf("%d", &temp);
    if(temp<= alice/2){
      count+=temp;
      indexes[j++]=i+2;
    }
    totalSum+=temp;
  }
  totalSum+=alice;
  count+=alice;
  if(count>=(totalSum/2 +1)){
    printf("%d\n", j+1);
    printf("1 ");
    for(i=0;i<j;++i){
      printf("%d ", indexes[i]);
    }
  } else {
    printf("0");
  }
  return 0;
}
