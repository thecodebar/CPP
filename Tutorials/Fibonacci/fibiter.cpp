// Function for Fibonacci by Sharath

//---------the header files---------------
#include<cstdio>
#include<cmath>
//---------defining constants-------------
#define p 1000000007
using namespace std;
//----------------------------------------
int main()
{
    int f0=0,f1=1,a,b,n;//f0 is 0 and f1 is 1
    // a,b are just two variables and n is the term we are looking for
    while(true)
    {
        printf("Enter the value of n ");
        scanf("%d",&n);
        if(n==0){
            printf("fib(0)=%d",0);
            continue;
        }    
        a=f0,b=f1; //initialising a and b to f0 and f1 resp.
        for(int i=2;i<=n;i++) // running the iteration
        {
            b=a+b;// b now becomes a+b
            a=b-a;// a now becomes b because (b-a)=(a+b)-(a)=b
            b%=p;//just going forward with the remainder
            a%=p;// ignore this step if you want to work with first 40 fibonacci numbers
        }//after this loop b takes the value of f(n)
        printf("fib(%d)=%d\n",n,b);
    }
    return 0;
}    

