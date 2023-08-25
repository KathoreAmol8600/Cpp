#include<iostream>
using namespace std;
int main()
{
    int ino=0;
    cin>>ino;
    for(int i=1;i<=ino;i++)
    {
        cout<<i<<" ";
    }
    for(int i=0;i>=(-ino);i--)
    {
        cout<<i<<" ";
    }

    return 0;
}