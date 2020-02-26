#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
  int n;
  int a,b;
  int max = 5000001;
  cin>>n;
  cout<<n<<endl;
  srand((unsigned)time(0));
    for(int index=0; index<n; index++){
        a = (rand()%max)+1;
        b = (rand()%a)+1;
        cout << a <<" "<< b << endl;
      }

  return 0;
}
