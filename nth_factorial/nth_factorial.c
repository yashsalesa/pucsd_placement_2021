#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n)
{
    if (n <1 || n<0)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int Evenfibonacci(int n)
{
	
    if (n < 1)
    	return n;
    if(n==1)
    	return 2;
     
    return ((4*evenfib(n-1)) + evenfib(n-2));
}
   
int main(int argc,char* argv[])
{
	int n=atoi(argv[1]);
	printf("FIbonnaci of %d: %d\n",n,fib(n));
	printf("FOr even fibonaaci");
	printf("FIbonnaci of %d: %d",n,evenfib(n));
	
  return 0;
}
