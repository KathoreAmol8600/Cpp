#include<iostream>
#include<string.h>
using namespace std;

class Area
{
    public:
    void reivers_arrey(int arr[],int size)
    {
        int temp1=size;
        int temp=0;
       for(int i=0;i<=size/2;i++)
       {
        temp=arr[i];
        arr[i]=arr[temp1-1];
        arr[temp1-1]=temp;
        temp1--;
       }
       for(int i=0;i<size;i++)
       {
        cout<<arr[i]<<"\n";
       }
    }

    void reivers_arrey(char str[])
    {
        int len=strlen(str);

        int temp1=len;
        char temp;
       for(int i=0;i<=len/2;i++)
       {
        temp=str[i];
        str[i]=str[temp1-1];
        str[temp1-1]=temp;
        temp1--;
       }

       for(int i=0;i<len;i++)
       {
        cout<<str[i];
       }
    }

   
};
int main()
{
    Area obj1;
    int size=5;
    int arr[5]={1,2,3,4,5};
    obj1.reivers_arrey(arr,size);


    char str[10];
    cout<<"enter the string"<<"\n";
    gets(str);
    obj1.reivers_arrey(str);
    return 0;
}