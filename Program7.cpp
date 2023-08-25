#include<iostream>
using namespace std;
class Check
{
    public:
   bool CheckNumbar(int no1)
    {
        if((no1%3)==0 && ((no1%5)==0))
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    bool iret=true;
    int inum=0;
    cout<<"Enter thr numbar that want you check:";
    cin>>inum;
    Check obj;
    iret=obj.CheckNumbar(inum);
    if(iret==true)
    {
        printf("the numbar are Divisbal by 3 and 5:");
    }else if (iret==false){
        printf("the numbar are not Divisbal by 3 and 5:");
    }

    return 0;
}