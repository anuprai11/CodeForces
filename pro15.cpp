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
  int t,i,condeBreak,n;
  char s[12346];
  scanf("%d",&t);
  while(t--){
    n=0;
    condeBreak=0;
    scanf("%s",s);
    while(s[n++]!='\0');
    n-=2;
    for(i=0;i<=n/2;++i){
      if(s[i] == s[n-i]){
        if( s[i]!='.')
          continue;
        else{
          s[i]='a';
          s[n-i]='a';
        }
      }else{
        if(s[i]=='.'||s[n-i]=='.'){
            s[i]!='.' ? s[n-i]=s[i] :s[i]=s[n-i];
        }else{
          condeBreak=1;
          break;
        }
      }
    }
    if(condeBreak)
      printf("-1\n");
    else
      printf("%s\n",s);
  }
  return 0;
}
