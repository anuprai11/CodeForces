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
	int count1=0,count2=0,i,n,m,x,y;
	list<int> a[1000006];
	int b[1000006];
	scanf("%d%d",&n,&m);

	for(i=0;i<m;++i){
		scanf("%d%d",&x,&y);
		a[x].push_back(y);
	}
	for(i=1;i<=n;++i){
		if(a[i].size()==0){
			printf("-1\n");
		}
		b[i]=0;
	}
	if(i>n){
		for(i=1;i<=n;++i){
			if(!b[i]){
				b[i]=1;
				count1++;
				for(list<int>::iterator j= a[i].begin();j!=a[i].end();++j){
					b[*j]=2;
					count2++;
				}
			}
		}
	}
	printf("%d\n",count1 );
	for(i=1;i<=n;++i){
		if(b[i]==1)
			printf("%d ",i);
	}
	for(i=1;i<=n;++i){
		if(b[i]==2)
			printf("%d ",i );
	}
  return 0;
}
