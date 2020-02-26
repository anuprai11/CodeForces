#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n, i;
    scanf("%d", &n);
    long long int s[n];
    int h[n];
    for (i=1;i<n;++i){
        scanf("%d", &h[i]);
    }
    for(i=0;i<n;++i){
        scanf("%lld", &s[i]);
    }
    cout<<"hello\n";
    return 0;
}
