#include<iostream>
using namespace std;
class Displey
{
    public:
     bool bFlag=false;
    bool DispleyX(int ino,int isearch)
    {
        
    int idegiet=0;
    while(ino!=0)
    {
        idegiet=ino%10;
        if(idegiet==isearch)
        {
          bFlag=true;
            break;
        }
        ino=ino/10;
        
        return bFlag;
    }
}
};
int main()
{
    int ino=0;
    bool bret=true;
    cout<<"enter the numbar:";
    cin>>ino;
    int ino1=0;
    cout<<"enter the numbar want you search::";
    cin>>ino1;
    Displey obj;
    bret=obj.DispleyX(ino,ino1);
    if(bret==true)
    {
        cout<<"the numbar are present in the numbar:";
    }else{
        cout<<" the numbaer re not present in the numbaer:";
    }
    return 0;
}