#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    char s[1000];
    int value=7;
    scanf("%s", s);
    int i=0;
    while(s[i]!='\0'){
        int x = s[i];
        if('z'-x>=0 && x-'a'>=0){
          if('z' - (x +value) >=0){
                printf("%c",x+value);
            } else{
                printf("%c", ('a' + ('z'-x) ));
            }
        }
        else{
          if('Z' - (x+value) >=0){
              printf("%c",x+value);
            } else{
              printf("%c", ('A' + 'Z'-x ));
            }
     }
        i++;
    }
}
