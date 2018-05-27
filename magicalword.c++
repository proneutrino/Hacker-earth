#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int prime[13]={67,71,73,79,83,89,97,101,103,107,109,113};
    cin>>t;
    while(t--)
    {
        int length,mine;
        char temp[1000];
        string s;
        int flag=0;
        cin>>length;
        cin>>s;
        
        for(int i=0;i<length;i++)
        {
            flag=0;
            mine=abs(s[i]-prime[0]);
            for(int j=1;j<12;j++)
            {
                if(abs(s[i]-prime[j])<mine)
                {
                    mine=abs(s[i]-prime[j]);
                    temp[i]=(char)prime[j];
                    flag=1;
                }
            }
            if(flag==0)
            {
                temp[i]=(char)prime[0];
            }
        }
        
        for(int k=0;k<length;k++)
        {
            cout<<temp[k];
        }
        cout<<"\n";
        
    }
}
