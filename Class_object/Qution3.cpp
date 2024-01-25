#include<iostream>
#include<string.h>
using namespace std;

class Area
{
    public:
    void Count_frequensey(int arr[],int size)
    {
    
       for(int i=0;i<size;i++)
       {
         if(arr[i]%2==0)
         {
            cout<<arr[i]<<"this is even"<<"\n";
         }else
         {
            cout<<arr[i]<<"this is odd"<<"\n";
         }
       }
      
    }

    void Count_frequensey(char str[])
    {
        
       for(int i=0;str[i]!='\0';i++)
       {
         if(str[i]>='A'&&str[i]<='Z') str[i]+32;
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
         {
            cout<<str[i]<<"this is Vowels->"<<"\n";
         }else{
            cout<<str[i]<<"this is consonant->"<<"\n";
         }
       }
    }

   
};
int main()
{
    Area obj1;
    int size=5;
    int arr[5]={1,2,3,4,5};
    obj1.Count_frequensey(arr,size);


    char str[10];
    cout<<"enter the string"<<"\n";
    gets(str);
    obj1.Count_frequensey(str);
   
   
 
    return 0;
}