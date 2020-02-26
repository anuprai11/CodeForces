#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;

int main() {
  int A[3000];
  int i=0, j;
  int size;
  cin>>size;
  int INC[size], DEC[size];
  int max = 0, temp;
  INC[0] = 1;
  DEC[size-1] = 1;
  for(i=0;i<size;++i)
    cin>>A[i];

  for(i=1; i<size; ++i){
      INC[i]=1;
      for(j=i-1;j>=0;--j){
        if(A[i] > A[j] && INC[i]<=INC[j])
              INC[i] = INC[j]+1;
      }
  }

  for(i=size-2;i>=0;--i)  {
    DEC[i]=1;
      for(j=i+1;j<size;++j){
        if(A[i]>A[j] && DEC[i]<=DEC[j]){
          DEC[i] = DEC[j]+1;
        }
    }
  }
  for(i=0;i<size;++i){
      temp = INC[i]+DEC[i] -1;
        if(max<temp){
            max = temp;
        }
    }
    cout<< max<<endl;
  return 0;
}
