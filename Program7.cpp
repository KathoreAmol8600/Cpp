/////////////////////////////////////////////////
//  Displey numbar;
//1,2,3,4......n
//Using loop ex for loop 
// out of main class that is use class
///////////////////////////////////////////////

#include<iostream>
using namespace std;

class Displey
{
    public:
     void DispleyX()
    {
        int i=0;
        for(i=1;i<7;i++)
        {
             cout<<i<<"\n";
        }
        
    }
};
int main()
{
Displey obj;
obj.DispleyX();
   
}