/////////////////////////////////////////////////
// SUMFactoers
//  ex 10
// 1,2,,5, it is factor if 10   
//sum of f is 8
//using updetor
//Check perfect its or not the sum of factoer numbar
//equal to num
// redues numbar of complixsitey.
///////////////////////////////////////////////


#include<iostream>
using namespace std;
class Displey
{
    
    public:
    bool DispleyX(int ino)
    {
        int isum=0;
        if(ino<0)     //Updater
        {
            ino=-ino;
        }
        for(int icnt=1;icnt<ino;icnt++)
        {
            if((ino%icnt)==0)
            {
                isum=isum+icnt;
                 
            if(isum>ino)
            {
                break;
            }

            }
        }
        if(isum == ino)
        {
        return true;
        }else
        {
            return false;
        }

    }

    // bool CheckPerfect(int ino)
    // {
    //     int iresult = 0;
    //     iresult=DispleyX(ino);
    //     if(iresult ==ino)
    //     {
    //         return true;
    //     }

    //     return false;
        
    // }

};
int main()
{
    int ino=0;
    bool bret = true;
    cout<<"Enter thr num:"<<"\n";
    cin>>ino;
    Displey obj;
     bret=obj.DispleyX( ino);
    // bret=obj.CheckPerfect(ino);
    if(bret==true)
    {
        cout<<"the Numbar is perfect:"<<"\n";
    }
    else if(bret == false){
        cout<<"the nmbar is not perfect:"<<"\n";
    }
    return 0;
}