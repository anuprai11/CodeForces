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
	ll max,min,n,a,b,c,d,t1,t2,i,B[4];
	cin>>n>>a>>b>>d>>c;
	ll total=n;

	max=0;
	min=0;
	
	t1=d-b;
	t2=c-a;
	
	B[0]=0;
	B[1]=t1;
	B[2]=t1+t2;
	B[3]=t2;
	for(i=1;i<4;++i){
		if(B[i]>max)
			max=B[i];
		if(B[i]<min)
			min=B[i];
	}
	t1=n- max + min;
	total=total* (t1>0?t1:0);
	cout<<total<<endl;
	return 0;
}
