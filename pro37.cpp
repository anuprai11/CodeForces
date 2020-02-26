#include<iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>

using namespace std;

struct anup {
  char name[20];
  int age;
};

int main(){
  anup a;
  a.name[0] = 'a';
  a.age=24;
  return 0;
}
