#include<iostream>
using namespace std;
class Displey
{
    public:
    int DispleyX(int No,int No2)
    {
        int ino=No;
        int iDiget=0;
        int count=0;
        while(ino!=0)
        {
            iDiget=ino%10;
            if(iDiget==No2)
            {
                count++;
            }
            ino=ino/10;
        }
        return count;
    }
};
int main()
{
    int ino=0;
    int ino2=0;
    int iret = 0;
    cout<<"Enter the Numbar:";
    cin>>ino;
    cout<<"Enter the Numbar Want tou Count:";
    cin>>ino2;
    Displey Obj;
    iret=Obj.DispleyX(ino,ino2);
    cout<<"The Frquensey of "<<ino2<<" is:"<<iret;
    return 0;
}