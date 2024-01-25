
// Q4. Write a cpp program to create class name as ArrayOperationApp using Constructor overloading name as :

// 	ArrayOperationApp(int [ ])
// 	{
// 		//  Sort Array Ascending and Descending Order.
// 	}
	
// 	ArrayOperationApp(int a[ ] [ ], int)
// 	{
// 		//  accept 2d array and search specific value.
// 	}

#include<iostream>
using namespace std;
class ArrayOperationApp
{
    int temp;
    int Se_num;
    public:
    ArrayOperationApp(int arr[ ],int size)
	{
        temp=0;
		//  Sort Array Ascending and Descending Order.
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    cout<<"Asending arrey id \n";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    temp=0;
		//  Sort Array Ascending and Descending Order.
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    cout<<"\nDesending arrey id \n";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
	}

    ArrayOperationApp(int a[][2],int size)
	{
        Se_num=0;
		cout<<"\nEnter the Elemnt of arry\n";
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                cin>>a[i][j];
            }
        }
    cout<<"\nEnter for searchelemnt\n";
    cin>>Se_num;

         for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(a[i][j]==Se_num)
                {
                    cout<<"\nFounf it.....!!!\n";
                }
            }
        }
	}


};
int main()
{
    int size=5,size2=2;
    int arr[5]={10,2,30,1,0};
    int arr_2d[2][2];
    
    ArrayOperationApp obj1(arr,size);
    ArrayOperationApp obj2(arr_2d,size2);

    return 0;
}