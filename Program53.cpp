// Input : 7854
    // Output :     4
    //              5
    //              8
    //              7

#include<stdio.h>
#include<iostream>
using namespace std;

void Displey(int ino)
{
    int iDigeat=0;
    for(;ino!=0;ino=ino/10)
    {
        iDigeat=ino%10;
        printf("%d\n",iDigeat);
    }

}
int main()
{
    int ino=0;
    printf("enter the numbar:");
    scanf("%d",&ino);
    Displey(ino);
    return 0;
}