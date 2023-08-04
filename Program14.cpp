/////////////////////////////////////////////////
// DispleyFactoers
//  ex 10
// 1,2,,5,10  it is factor if 10   
//step 02
//redusing complixSitey
///////////////////////////////////////////////


#include<iostream>
using namespace std;
class Displey
{
    public:
    void DispleyX(int ino)
    {
        for(int icnt=1;icnt<(ino/2);icnt++)
        {
            if((ino%icnt)==0)
            {
                cout<<icnt<<"\n";
            }
        }
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