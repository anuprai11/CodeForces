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

int dfsFindLoop(){

}

int main()
{
  int n,m,t;
  int a[1005][1005];
  int mark[1005];
  scanf("%d",&t );
  while (t--) {
    for(i=0;i<n++i){

      for(j=0;j<n;++j)
        a[i][j]=1;
    }
    scanf("%d%d",&n,&m );
    for(i=0;i<m;++i){
      scanf("%d%d",&x,&y);
      a[x][y]=0;
      a[y][x]=0;
    }
    if(dfsFindLoop(int a, int mark)){
      printf("Yes\n", );
    }else{
      printf("No\n", );
    }
  }
  return 0;
}
