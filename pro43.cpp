#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;

#define MAXN 1048576
#define ll long long
#define P 998244353

map<ll, int> mapx;

int main(){
  int n, i,j;
  bool found;
  ll count = 0, a[7000], b[7000], ans=0;
  scanf("%d", &n);
  for(i=0;i<n;++i){
    scanf("%lld", &a[i]);
    mapx[a[i]]++;
  }

  for(i=0;i<n;++i) scanf("%lld", &b[i]);

  for(i=0;i<n;++i) 
    if(mapx[a[i]] > 1) {
      ans += b[i];
    }

  for(i=0;i<n;++i){
    if(mapx[a[i]]==1){
      for(j=0;j<n;++j){
	if((a[i]&a[j]) == a[i] && mapx[a[j]]>1){
	  ans+= b[i];
	  break;
	}
      }
    }
  }
  
  printf("%lld", ans);
  return 0;
}
