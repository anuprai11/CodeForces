#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
	long long int n,i=1;
	scanf("%I64d", &n);
	long long int cumul=1;
	while(cumul<=n){
		cumul*=2;
		i++;
	}
	printf("%I64d\n", i-1);
	return 0;

}
