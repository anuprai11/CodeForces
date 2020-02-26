#include<iostream>
#include<stdio.h>

using namespace std;

int findHCF(int a, int b){
    if(a%b ==0)
        return  b;
    else
        return findHCF(b, a%b);
}
int main(){
    int t,n,k,a,b,hcf,lcm, notSolved;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &n,&a,&b, &k);
        hcf = a>b ? findHCF(a,b) : findHCF(b,a);
        lcm = (a*b)/hcf;
        notSolved = n/lcm;
        if((n/a + n/b) -(2*notSolved) >= k){
            printf("Win\n");
        } else {
            printf("Lose\n");
        }
    }
    return 0;
}
