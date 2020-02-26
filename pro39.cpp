#include<iostream>
using namespace std;
int main(){
  int a=1;
  if(true){
    char a[] = "a";
    cout<<(sizeof(a)/sizeof(*a) == ::a)<<endl;
  }
  return 0;
}
