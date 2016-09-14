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
	int n,a,b,flag=0,i;
	scanf("%d",&n);
	char s[100];
	for(i=0;i<n;++i){
		scanf("%s %d%d",s,&a,&b);
		if(a>=2400 && b>a){
			flag=1;
			break;
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
  return 0;
}
