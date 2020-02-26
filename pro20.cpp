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

int main()
{
  int t,n,m,c,count,i;
  scanf("%d",&t);
  while(t--){
    count=0;
    scanf("%d%d%d", &n,&m,&c);
    if(1ll*n*m < 1ll*c){
      printf("0\n");
    }else{
      for(i=1;i<=n;++i){
        if(c%i == 0){
          if( (c/i) <= m ){
            count++;
          }
        }
      }
      printf("%d\n",count);
    }
  }
  return 0;
}
