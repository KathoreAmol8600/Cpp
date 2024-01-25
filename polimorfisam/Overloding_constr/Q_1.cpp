// Q1. Write a cpp program to create class name as Area using Constructor overloading name as
// Area(int)
// 	{
// 		//  calculate area of circle.
// 	}
	
// 	Area(int , int)
// 	{
// 		//  calculate area of reactangle.
// 	}
	
// 	Area(int , int)
// 	{
// 		//  calculate area of triangle.
// 	}

#include<iostream>
using namespace std;
class Area
{
    public:
    Area(int red)
	{
		cout<<"rediuas of circal"<<red*red*3.14<<"\n";
	}
	
    Area(int length , int brithe)
	{
		cout<<"Area of the Recantangal"<<length*brithe<<"\n";
	}
	
	Area(int base , float height)
	{
		cout<<"Area of the Recantangal"<<base*height*0.5<<"\n";
	}
};
int main()
{
     int red_cir=0,base,length,brithe;
     float height;
    cout<<"Entert the Rediaus of scircle\n";
    cin>>red_cir;
    Area obj1(red_cir);
    cout<<"Entert the length and brithe\n";
    cin>>length>>brithe;
    Area obj2(length,brithe);
    cout<<"Entert the base of height\n";
    cin>>base>>height;
    Area obj3(base,height);

    return 0;
}