// using dyanamic memoery Accept numbar And displey
#include<iostream>
using namespace std;
class Numbar
{
    public:
    int no;
    int *ptr;
    public:
    Numbar(int ino)
    {
        no=ino;
        // ptr=NULL;
        int * ptr = NULL;
       
    }
    public :
    void Acceptnum()
    {
      int * ptr = new int[no];  //ptr are Arry adress // name of arry are considerd as 
      for(int i=0;i<no;i++)
      {
        cin>>ptr[i];
      }
    
        for(int i=0;i<no;i++)
      {
        
        cout<<"\n"<<ptr[i];
      }
    }

};
int main()
{
    int num=0;
    cout<<"Enter the Numbar of element Are want you Enter:\n";
    cin>>num;
    Numbar Nobj(num);
    Nobj.Acceptnum();

    return 0;
}