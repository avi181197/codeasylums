#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int x;
  cin>>x;
  sort(a,a+n);

  int p1,p2,min_sum=INT_MAX,sum;

  for(int i=0;i<n-2;i++)
  {
    p1=i+1;
    p2=n-1;

    while(p1<p2)
    {
      sum=a[p1]+a[p2]+a[i];

      if(abs(x-sum)<abs(x-min_sum))
      {
        min_sum=sum;
      }

      if(sum>x)
      {
        p2--;
      }
      else
      {
        p1++;
      }
    }
  }

  cout<<min_sum<<endl;
  return 0;
}
