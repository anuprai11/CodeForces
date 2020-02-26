#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
  int m,n,i,j,k;
  long long int maxAns = 0, temp=0, maxTemp = 0;
  char tempAns;
  char a[1000][1000];
  int ansValue[1000];
  scanf("%d,%d", &m,&n);
  for(i=0;i<n;++i){
    scanf("%s", a[i]);
  }
  for(i=0;i<m;++i){
    scanf("%d", &ansValue);
  }
  for(i=0;i<m;++i){
    for(k=0;k<5;++k){
      temp = 0;
      tempAns = 'A'+ k;
      for(j=0;j<n;++j){
        if(A[i][j] == tempAns){
          temp =
        }
      }
    }
  }

  return 0;
}
