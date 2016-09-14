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
	int n,i,x,p;
	ll count1=0,count2=0;
	char c;
	scanf("%d%d",&n,&x);
	count1=x;
	for(i=0;i<n;++i){
		scanf(" %c%d",&c,&p);
		if(c=='+'){
			count1+=p;
		}
		else{
			if(count1-p>=0)
				count1-=p;
			else
				count2++;
		}
	}
	cout<<count1<<" "<<count2<<endl;
  return 0;
}
