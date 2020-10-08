#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int x;cin>>x;
  int l=0,r=n-1,result=0;
  while(l<r)
  {

    if(a[l]+a[r]<x)
    {
      result+=(r-l);
      l++;
    }
    else
    r--;
  }

  cout<<result<<endl;
  return 0;
}
