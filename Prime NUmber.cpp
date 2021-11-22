#include<stdio.h>



int ifPrime(int);
int i;

int main()
{

    int n1,prime;
	
    printf(" Enter a number : ");
    scanf("%d",&n1);
    
    i = n1/2;

    prime = ifPrime(n1);

   if(prime==1)
        printf(" The number %d is a prime number. \n\n",n1);
   else
      printf(" The number %d is not a prime number. \n\n",n1);
   return 0;
}

int ifPrime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         ifPrime(n1);
		 }
      
}

