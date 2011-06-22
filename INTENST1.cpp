
// Solution of INTEST problem by Krishna Chaitanya

#include<iostream>
using namespace std;


int main()
{
  int n,k,ti,x=1,m=0;
  cin>>n>>k;
  while(x<=n)
    {
      cin>>ti;
      if(ti%k==0)
	{
	  m=m++;
	}
      x++;
    }
  cout<<m<<endl;
  system("pause");
  return(0);
}
