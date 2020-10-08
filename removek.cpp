#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int ar[n];
  int sum=0,i;
  for( i=0;i<n;i++)
  {
    cin>>ar[i];
    sum+=ar[i];
  }
  int k;cin>>k;

  for(i=0;i<k/2;i++)
  {
    sum-=(ar[i]+ar[n-1-i]);
  }

  if(k%2!=0)
  sum-=min(ar[i],ar[n-1-i]);

  cout<<sum<<endl;
  return 0;
}
