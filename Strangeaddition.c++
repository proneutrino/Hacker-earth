#include<bits/stdc++.h>
using namespace std;
long long int reversenum(long long int n)
{
    int remainder;
    int number=0;
   while(n!=0)
   {
       remainder=n%10;
       number=number*10+remainder;
       n/=10;
   }
   return number;
}
int main()
{
    long long int x,y;
    int t;
    scanf("%d",&t);
   while(t--)
   {
       scanf("%lld%lld",&x,&y);
       long long int z=reversenum(x)+reversenum(y);
       printf("%lld\n",reversenum(z));
   }
}

