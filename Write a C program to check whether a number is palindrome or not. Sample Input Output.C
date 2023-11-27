#include<stdio.h>
int main ()
{
     
    int n, c, s=0,r;
    printf("Enter any Number: ");
    scnaf("%d",&n);
    c=n;
    while(n>0)
{

    r=n%10;
    s=r+(s*10);
    n=n/10;
    }
    if(c==s)
      printf("Palindrom Number");
    else
      printf("Not");
    return 0;
}