/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e        
*/ 
#include<iostream>
using namespace std;
class Displey
{
    public:
    void DispleyX(int row,int col)
    {
        
    for(int i=1;i<=row;i++)
    {
        char C='a';
        for(int j=1;j<=col;j++)
        {
            cout<<C<<"\t";
            C++;
        }
        printf("\n");
    }
    }
};
int main()
{
    Displey Dobj;
    Dobj.DispleyX(3,5);
    return 0;
}