#include<stdio.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    int a[100000];
    int maxsofar=0;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum<0)
        {
            sum=0;
        }
        if(sum>maxsofar)
        {
            maxsofar=sum;
        }
    }
    printf("%d",maxsofar);
}

