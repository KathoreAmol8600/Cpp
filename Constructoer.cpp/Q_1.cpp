#include<iostream>
using namespace std;
class power                    // afetr the obj creation->cl_name obj_nme ;
{
    int base;                    // instanse veriabal-> afetr the class->obj creation
    int index;

    // counstructoer creation ->  with name of class
    // 1>  defoult counstructoer
    public:

    power(int base,int index)          
    {
       base=base;
       index=index;
       
    }
    
   void get_Power()
   {
        int Ans=1;
        index=index;
        for(int i=0;i<index;i++)
        {
            Ans=Ans*base;
        }
        cout<<"Ans is ->"<<Ans<<"\n";
   }
};
 int main()
{
    // Rectangle obj1;                  // obj creation for defoult 
    power obj2(6,8);            // obj creation for the pairemitar 
    // Rectangle obj3(8);            // obj creation for the pairemitar 
    return 0;
}