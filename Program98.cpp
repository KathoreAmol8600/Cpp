#include<iostream>
using namespace std;
class Displey
{
    public:
    int ino=0;
    Displey(int ino)
    {
        this->ino=ino;
    }
    void DispleyX()
    {
        for(int i=0;i<ino;i++)
        {
            cout<<i<<"\t";
        }
    }
};
int main()
{
    int no=0;
    cout<<"Enter the numbar:";
    cin>>no;
    Displey Dobj(no);
    Dobj.DispleyX();
    return 0;
}