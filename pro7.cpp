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
	int n,h,k,i;
	ll a[1000000],tim=0,rem=0;
	scanf("%d%d%d",&n,&h,&k);
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	for(i=0;i<n;){
		while(i<n && rem+a[i]<=h){
			rem+=a[i];
			i++;
		}
		if(rem>k){
			tim+=rem/k;
			rem=rem%k;
		}
		else{
			rem=0;
			tim++;
		}
	}
	if(rem>0){
		tim+=rem/k + rem%k?1:0;
	}
	cout<<tim<<"\n";
  return 0;
}
