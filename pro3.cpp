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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if((c==0&&a==b)||(c!=0 && (b-a)%c == 0 && (b-a)/c >=0))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
