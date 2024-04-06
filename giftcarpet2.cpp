#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     int a[n][m];
     int b[4];
     for(int x=0;x<4;x++)
     {
        b[x]=-1;
     }
     cin>>n>>m;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
     }
     for(int j=0;j<m;j++)
     {
        for(int i=0;i<n;i++)
        {
            if(a[i][j]=='v')
            const b[0]=j;
        }
     }
    }
}