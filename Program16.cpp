/////////////////////////////////////////////////
// SUMFactoers
//  ex 10
// 1,2,,5, it is factor if 10   
//sum of f is 8
//using updetor
///////////////////////////////////////////////
#include<iostream>
using namespace std;
class Displey
{
    public:
    int isum=0;
    void DispleyX(int ino)
    {
        if(ino<0)     //Updater
        {
            ino=-ino;
        }
        for(int icnt=1;icnt<(ino);icnt++)
        {
            if((ino%icnt)==0)
            {
                isum=isum+icnt;
            }
        }
        cout<<"the sum of factoer is:"<<isum;

    }

};
int main()
{
    int ino=0;
    cout<<"Enter thr num:"<<"\n";
    cin>>ino;
    Displey obj;
    obj.DispleyX( ino);
    return 0;
}