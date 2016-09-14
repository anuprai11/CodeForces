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
	int n,h,x,count=0,i;
	scanf("%d%d",&n,&h);
	for(i=0;i<n;++i){
		scanf("%d",&x);
		if(x>h){
			count++;
		}
		count++;
	}
	printf("%d\n",count);
  return 0;
}
