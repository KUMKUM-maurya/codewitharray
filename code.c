#include<stdio.h>
int main()
{
    int A[5];
    int i;
    printf("enter 5 number:\n");
    for( int i=0;i<5;i++)
    {
    scanf("%d",&A[i]);
    } 
     printf("revers array:\n");
     for(i=4;i>=0;i--) 
     { 
        printf("%d",A[i]);
     }
    return 0;

}