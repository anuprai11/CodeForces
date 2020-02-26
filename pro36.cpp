#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,n,i, count;
    char s[200][1000];
    while(t--){
        count=0;
        scanf("%d, &n");
        for(i=0;i<n;++i)
            scanf("%s", &s[i]);
        for(i=0;i<26;++i){
           for(j=0;j<n;++j){
             while(s[k] != 'a' + i || s[i]!='\0') k++;
             if(s[k])
           }
        }
    }
    return 0;
}
