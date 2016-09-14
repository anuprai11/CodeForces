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
	int addbase7(int k){
		int t=1;
		while(k%10==6){
			t=t*10;
			k=k/10;
		}
		k=k*t;
		k=k+t;
		return k;
	}
	
	int main()
	{
	int t,n,m,an=0,bm=0,a=0,b=0,i,maxdig=0,dig,map[10],count=0,p10=1;
	scanf("%d%d",&n,&m);
	t=n-1;	
	if(t==0)
		maxdig++;
	for(i=0;t>0 && maxdig<=7;++i){
		an=an+(t%7*p10);
		t=t/7;
		maxdig++;
		p10=p10*10;
	}
	t=m-1;
	p10=1;
	if(t==0)
		maxdig++;
	for(i=0;t>0 && maxdig<=7;++i){
		bm=bm+(t%7*p10);
		t=t/7;
		maxdig++;
		p10=p10*10;
	}
	//cout<<maxdig<<" "<<an<<" "<<bm<<endl;	
	if(maxdig > 7)
		printf("0\n");
	else{
		while(a<=an){
			while(b<=bm){
				for(i=0;i<7;++i)
					map[i]=0;
				t=a;
				dig=0;
				while(t>0){
					map[t%10]++;
					t=t/10;
					dig++;
				}
				t=b;
				while(t>0){
					map[t%10]++;
					t=t/10;
					dig++;
				}
				map[0]+=maxdig-dig;
				for(i=0;map[i]<=1&&i<7;++i);

				if(i==7)
					count++;
				b=addbase7(b);
			}
			b=0;
			a=addbase7(a);
		}
		printf("%d\n",count);
	}
	return 0;
	}
	
