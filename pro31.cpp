#include<iostream>
#include<stdio>
using namespace std;

int main(){
  int i,n,s;
  scanf("%d%d", &n, &s);
  int a[n+2];
  int ops=0;
  
  for(i=0;i<n;++i){
    scanf("%d", &a[i]);
  }
  sort(a, a+n);
  i=0;
  while(a[i]<s) i++;
  if(i<n/2){
    
  }
  
  return 0;
}
