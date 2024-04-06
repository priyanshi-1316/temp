#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    char ch[n][m];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>ch[i][j];
      }
    }
    string str="vika";
    int c=0;
    for(int j=0;j<m;j++)
    {
      for(int i=0;i<n;i++)
      {
        if(ch[i][j]==str[c])
        {
          c++;
          break;
        }
      }
      if(c==4)
      break;
    }
    if(c==4)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }

  }
}
