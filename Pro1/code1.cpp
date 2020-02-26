#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  //long long
  int temp,i,t,x,y,j,max=1;
  //long long
  int* a  =new /*long long*/int[5000001];
  //long long
  int* b =new /*long long*/ int[5000001];
  a[0]=0;a[1]=0;b[0]=0;b[1]=0;
  // for(i=2;i<5000001;++i)
  //   {
  //     temp=i/2;
  //     if(temp*2==i)
  //  {
  //    a[i]=a[temp]+1;
  //  }
  //     else
  //  {
  //    for(j=3;(j*j)<=i;j+=2)
  //      {
  //        temp=i/j;
  //        if(temp*j==i)
  //    {
  //      a[i]=a[temp]+1;
  //      break;
  //    }
  //      }
  //    if(a[i]==0)
  //      a[i]=1;
  //  }

  //   }
  // b[1]=0;

  // for(i=2;i<5000001;++i)
  //   {
  //     b[i]=b[i-1]+a[i];
  //   }
  scanf("%d",&t);

  while(t--)
    {

      scanf("%d",&x);
      scanf("%d",&y);
      if(max<x)
  {
    for(i=max+1;i<=x;++i)
      {
        //        cout<<"i is"<<i<<endl;
        temp=i/2;
        if(temp*2==i)
    {
      a[i]=a[temp]+1;
      continue;
    }
        else
    {

      for(j=3;(j*j)<=i;j+=2)
        {
          //      cout<<"j is "<<j<<endl;
          temp=i/j;
          if(temp*j==i)
      {
        a[i]=a[temp]+1;
        break;
      }
        }
      //  cout<<endl;
      if(a[i]==0)
        a[i]=1;
    }

      }


    for(i=max+1;i<=x;++i)
      {
        b[i]=b[i-1]+a[i];
      }
    max=x;
  }
      printf("%d\n",(b[x]-b[y]));
    }
  return 0;
}
