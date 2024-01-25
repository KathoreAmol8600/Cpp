#include<iostream>
using namespace std;
class Demo
{
    int k;
    int p;
    public:
    Demo()
    {
        cout<<"inside the Demo Defou\n";
        k=1;
        p=2;
    }

    Demo(int z,int y)
    {
         cout<<"inside the Demo pairamiter\n";
         k=z;
         p=y;
    }

    Demo(Demo &ref)                                       // intilaization is like->ref.instanse
    {
         cout<<"inside the coppey pairamiter\n";
         k=ref.k;
         p=ref.p;
    }
    ~Demo()
    {
          cout<<"inside the  destructoer\n";

    }

    void Show()
    {
        cout<<k+p<<"\n";
    }
};
int main()
{
    Demo obj1;
    obj1.Show();
    Demo obj2(3,4);
     obj2.Show();
    Demo obj3(obj1);
    obj3.Show();
    return 0;
}