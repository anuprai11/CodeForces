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
void createList(list <int>k[], int m[],int curr){
  for(list<int>::iterator i=k[curr].begin();i!=k[curr].end();i++){
    if(!m[*i]){
      m[*i]=1;
      createList(k,m,*i);
    }
  }
}
int someLeft(int m[],int n){
  for(int i=0;i<n;++i){
    if(!m[i])
      return i;
  }
  return n;
}
int main(){
  int t,n,m,x,y,i,j,startNew;
  scanf("%d",&t);
  list <int> k [1005];
  int maping[1005];
  while(t--){
    scanf("%d%d",&n,&m );
    for(i=0;i<n;++i){
      k[i].clear();
      maping[i]=0;
    }
    for(i=0;i<m;++i){
      scanf("%d%d",&x,&y);
      x--;y--;
      k[x].push_back(y);
      k[y].push_back(x);
    }
    createList(k,maping,0 );
    startNew = someLeft(maping ,n);
    if(startNew != n){
      createList(k,maping ,i);

      if(someLeft(maping ,n)==n)
        printf("No\n");
      else
        printf("Yes\n");
    }else{
      printf("Yes\n");
    }

  }
  return 0;
}
