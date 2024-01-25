#include<iostream>
#include<string.h>
using namespace std;

class Area
{
    public:
    void Arrey_opreation(int arr[],int size)         // assending and desending arrey
    {
        int temp=0;
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
       printf("after the asending\n");

       for(int i=0;i<size;i++)
       {
          cout<<arr[i]<<"\n";
       }
       cout<<"for desending\n";
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
       printf("after the desending arrey\n");

       for(int i=0;i<size;i++)
       {
          cout<<arr[i]<<"\n";
       }
    }

   void Arrey_opreation(int arr[],int brr[],int size)        // // concate aarey
    {
        int size3=size+size;
        int crr[size3];

       for(int j=0,i=0;j<size3;j++)
       {
            if(j<size)
            {
              crr[j]=arr[j];
            }else
            {
              crr[j]=brr[i];
              i++;
            }
       }
        for(int j=0,i=0;j<size3;j++)
       {
          cout<<crr[j];
       }
    }
   
};
int main()
{
    Area obj1;
    int size=5;
    int arr[5]={2,3,4,5,4};
    int brr[5]={1,2,3,4,5};
    // obj1.Arrey_opreation(arr,size);
    obj1.Arrey_opreation(arr,brr,size);


   
   
   
 
    return 0;
}