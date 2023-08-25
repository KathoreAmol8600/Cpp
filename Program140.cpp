/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    A
    A   B
    A   B   C
    A   B   C   D
    A   B   C   D   E
    A   B   C   D   E   F             
*/ 

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    printf("Enter the Row:");
    int irow=0;
    scanf("%d",&irow);
    printf("Enter the icol:");
    int icol=0;
    scanf("%d",&icol);
    // char ic='A';
    for(int i=0;i<=irow;i++)
    {
        char ic='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c\t",ic);ic++;
        }
        
        printf("\n");
    }
    return 0;
}

// cout,cin = printf or scanf