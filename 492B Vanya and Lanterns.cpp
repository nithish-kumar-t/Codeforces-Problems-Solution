//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006

int main()
{

    ll m,n,t,b,c,d,i,j,z,l,q,r;

      double cnt=0,ans,x,y;
      scl(n); scl(l);

      ll  a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      asort(a);
      double dif,k, mx=2*max(a[0], l-a[n-1] );

      fr(i,n-1)
      {
          dif=a[i+1]-a[i];
          if(mx<dif) mx=dif;
      }
        printf("%.10llf\n", mx/2);

return 0;
}





