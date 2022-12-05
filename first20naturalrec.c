#include<stdio.h>
int numprint(int);
int main()
{
    int n=1;
    printf("first 20 natural number\n\n");
    printf("*************************\n\n");
    printf("natural nmubers are\n");
    numprint(n);
    return 0; 
}
int numprint(int n)
{
    if(n<=20)
    {
        printf("%d ",n);
        numprint(n+1);    
    }
}
    