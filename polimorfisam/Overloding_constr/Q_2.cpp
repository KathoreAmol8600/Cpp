// Q2. Write a cpp program to create class name ReverseApp using Constructor overloading name as :

// 	ReverseApp(int [ ])
// 	{
// 		//  perform integer reverse array logic.
// 	}
	
// 	ReverseApp(char [ ])
// 	{
// 		//  perform string reverse logic.
// 	}
#include<iostream>
using namespace std;
class ReverseApp
{
    int temp,temp2,count;
    char c_temp1;
    public:
    ReverseApp(int arr[ ],int size)
	{
        cout<<sizeof(size);
        temp2=size;
		for(int i=0;i<temp2/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[size-1];
            arr[size-1]=temp;
            size--;
        }

        cout<<"revers arrey is \n";
        for(int i=0;i<temp2;i++)
        {
           cout<<arr[i];
        }
	}
	
	ReverseApp(char str[ ])
	{
        count=0;
        temp=0;
       for(int i=0;str[i]!='\0';i++)
       {
            count++;
       }
       temp=count;
		for(int i=0;i<temp/2;i++)
        {
            c_temp1=str[i];
            str[i]=str[count-1];
            str[count-1]=c_temp1;
            count--;
        }
        cout<<"\nreverse string is\n";
        cout<<str;
       
	}
};
int main()
{
    int size1=5;
    int arr[]={1,2,3,4,5};
    // cout<<sizeof(arr);

   char str[20];
    cin>>str;

    ReverseApp obj1(arr,size1);
    ReverseApp obj2(str);

    return 0;
}