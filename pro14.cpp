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
  int t,a0=0,a1=0,i;
  char s[100005];

  scanf("%d",&t);
  while(t--){
    a0=0;a1=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';++i){
      if(s[i]=='0'){
        a0++;
      }else{
        a1++;
      }
    }
    if(a0==1 ||a1==1 )
      printf("Yes\n");
    else
      printf("No\n");
  }
    return 0;
}
