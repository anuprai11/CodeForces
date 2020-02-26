#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
  int n,k,i;
  scanf("%d%d",&n,&k);
  int a[105],b[105];

  for(i=0;i<n;++i){
    scanf("%d", &a[i]);
  }
  for(i=0;i<k;++i){
    scanf("%d",&b[i]);
  }
  sort(b,b+k);
  int l=0;
  for(i=0;i<n;++i){
    if(a[i]==0){
      a[i]=b[k-l-1];
      l++;
    }
  }
  int flag=0;
  for(i=0;i<n-1;++i){
    if(a[i]>a[i+1]){
      flag=1;
    }
  }
  if(flag==0){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
}
