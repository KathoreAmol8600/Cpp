// Input :  5
// Output : 1   2   3   4   5   4   3   2   1   
#include<iostream>
using namespace std;
class Displey
{
    public :
    int ino;
    public :
    Displey(int no)
    {
        ino=no;
    }
    public :
    void DispleyX()
    {
        for(int i=1;i<ino;i++)
        {
            cout<<i<<" ";
        }
        for(int i=ino;i>0;i--)
        {
            cout<<i<<" ";
        }
    }
};
int main()
{
    int ino=0;
    cout<<"Enter the numbar:";
    cin>>ino;
    Displey obj(ino);
    obj.DispleyX();
    return 0;
}
