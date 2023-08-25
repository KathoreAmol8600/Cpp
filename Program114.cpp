/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    1   1   1   1   1
    2   2   2   2   2   
    3   3   3   3   3   

*/  

#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int iRow=0;
   scanf("%d",&iRow);
    int icol=0;
   scanf("%d",&icol);
    for(int i=1;i<=iRow;i++)
    {
        
    for(int j=0;j<=(icol);j++)
    {
        printf("%d ",i);
    }
    printf("\n");
    }

    return 0;
}