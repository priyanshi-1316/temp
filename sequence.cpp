#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        int b[m];
        int n=2*m;
        int a[n];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        a[0]=b[0];
        int j=1;
        for(int i=1;i<m;i++)
        {
            if(b[i-1]<=b[i])
            {
                a[j]=b[i];
                j++;
            }
            else
            {
                int c=b[i]-1;
               if(c==0)
               {
                a[j]=b[i];
                j++;
               }
              a[j]=b[i];
              j++;
            }
        }
        cout<<j<<endl;
        for(int i=0;i<j;i++)
        {
         cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
//hbfdb