#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,q,l,r;
   int a[100005];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d",&q);
   while(q--)
   {
       int count=0;
       scanf("%d%d",&l,&r);
       int res=a[l-1];
       if(res==0)
       {
           count++;
       }
       for(i=l;i<=r-1;i++)
       {
           res=res^a[i];
           if(a[i]==0)
          {
            count++;
          }
       }
       printf("%d %d\n",res,count);
   }
}

