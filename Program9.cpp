/////////////////////////////////////////////////
//  Displey numbar;
//1,2,3,4......n
// N for user defiend:
//Using loop ex for loop 
//using filter for nigetiv numbar:
///////////////////////////////////////////////

#include<iostream>
using namespace std;

class Displey
{
    public:
     void DispleyX(int ino1)
    {
        if(ino1<0)
        {
            cout<<"ERRER Somthing...";
            cout<<"Enter thr Positive Integer numbar:";
            return;
        };
        int i=0;
        for(i=1;i<ino1;i++)
        {
             cout<<i<<"\n";
        }
        
    }
};
int main()
{
    int ino =0;
     cout<<"Enter thr numnbar:\n";
     cin>>ino;   

    Displey obj;
    obj.DispleyX(ino);
   
}