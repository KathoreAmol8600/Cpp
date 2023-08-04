////////////////////////////////////////////
//Print String on user input numbar time
// 2
//jai ganesh
//jai ganesh
// using updeater and filter
////////////////////////////////////////////

#include<iostream>
using namespace std;

class DispleyX
{
    public:
    void Displey(int ino)
    {
        if(ino==0)
        {
            return;   // Filter
        }
        if(ino<0)
        {
            ino=-ino;   // Updetoe
        }

        int i = 0;
        for(i=1;i<=ino;i++)
        {
            cout<<"Jai Ganesh...\n";
        }
    }

};
int main()
{
    int ino = 0;
    cout<<"Enter Int Numbar:\n";
    cin>>ino;
    DispleyX obj;
    obj.Displey(ino);

}