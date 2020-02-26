#include<iostream>
#include <iostream>
#include <iostream>
using namespace std;
int main() {
  int n,q,i;
  int x,y;
  int temp;
  cin>>n>>q;
  bool a[2][n+2];
  int blockers = 0;
  for(i=0;i<n;++i){
    a[0][i] = false;
    a[1][i] = false;
  }
  for(i=0;i<q;++i){
    cin>>x>>y;
    temp = x == 1 ? 1: 0;
    if(a[x-1][y]){
      a[x-1][y] = false;
      if(a[temp][y]|| a[temp][y-1] || a[temp][y+1]){
       blockers--;
      }
    }else{
      a[x-1][y] = true;
      if(a[temp][y]|| a[temp][y-1] || a[temp][y+1]){
       blockers++;
      }
    }
    if(blockers == 0){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}
