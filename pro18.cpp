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
int coveredVert;
int doStuff(int s[],int a[][1005],int k,int n,int table){
  for(int i=0;i<n;++i){
    if(a[k][i]==-1){
        if(s[i]==-1){
          s[i]=(table+1)%2;
          if(doStuff(s,a,i,n,(table+1)%2)){
            return 1;
          }
        } else{
          if(s[i]==table){
            //cout<<i<<" "<<k<<endl;
            return 1;
          }
        }
    }
  }
  return 0;
}
int main()
{
  int t,n,m,i,j,x,y,ret;
  int s[1005];
  int a[1005][1005];
  scanf("%d",&t );
  while (t--) {
    coveredVert=0;
    for(i=0;i<1005;++i){
      s[i]=-1;
      for(j=0;j<1005;++j)
        a[i][j]=-1;
      a[i][i]=1;
    }
    scanf("%d%d",&n,&m );
    for(i=0;i<m;++i){
      scanf("%d%d",&x,&y );
      x--;y--;
      a[x][y]=1;
      a[y][x]=1;
    }
    for(i=0;i<n;++i){
      if(s[i]==-1){
        s[i]=1;
        ret = doStuff(s,a,i,n,1);
        if(ret)
          break;
      }
    }
    if(ret){
      printf("No\n");
    }else{
      printf("Yes\n");
    }
  }
  return 0;
}
