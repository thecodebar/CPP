// Fibonacci function ( Recursive method) by Sharath 


//---------the header files---------------
#include<cstdio>
#include<cmath>
//---------defining constants-------------
#define p 1000000007
using namespace std;
//----------------------------------------

int fib(int n)
{
    if(n<=1) return n; //if n=0 fib(0)=0 and n=1 fib(1)=1 so i just return n. 
    else return (fib(n-1)+fib(n-2))%p;// the function calls fib(n-1) and fib(n-2)
}

int main()
{
    int n;
    while(true)
    {
        printf("Enter the value of n ");
        scanf("%d",&n);
        printf("fib(%d)=%d\n",n,fib(n));
    }
    return 0;
}
