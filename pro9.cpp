/*
  "Towards Glory and Beyond"
  
  Code Author : Anup Kumar Rai
  DA-IICT Gandhinagar
  India
  
  Email : anuprai11894@gmail.com
  Phone : +91-9910011838
  
  Address : Flat 701- Tower 11, Vipul Greens , Sohna Road, 122001,Gurgaon Haryana
  
  User Id : grind
*/

#include<iostream>
#include<stdio.h>
#include<map>
#include<list>
#include<vector>
#include<math.h>
#include<queue>
#include<stdlib.h>
#include<algorithm>
typedef long long ll;
using namespace std;

int main()
{
	int i,j,flag=0,n,a=1234,b=123456,c=1234567;
	scanf("%d",&n);
	for( ;n>=0 && flag==0;n=n-c){
		for(j=n;j>=0;j=j-b){
			if(j%a==0){
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
  return 0;
}
