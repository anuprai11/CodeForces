#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
  int n,a,b,ans;
  cin>>n>>a>>b;
  if(b==0)
    ans=a;
  else
    {
      b=b%n;
      ans=(a+b)%n;
      if(ans<=0)
	ans=ans+n;
    }
  cout<<ans<<endl;
  return 0;
}
