// int arr[]={5792,8659,2534,9625,7354,1325};
// 9752 9865 5432 9652 7543 5321 
#include<iostream>
using namespace std;
int main()
{
    int size=6,dig,temp,fact=1,count=0,sum=0;
    int arr[]={5792,8659,2534,9625,7354,1325};
    // int *ptr;
    for(int i=0;i<size;i++)
    {
       dig=0,temp=0,fact=1,count=0,sum=0;
        temp=arr[i];

        while(arr[i]>10)                    //fact,count
        {
            fact=fact*10;
            count++;
            arr[i]=arr[i]/10;
        }
        // cout<<fact;
        count=count+1;
        int insrr[count];      
        for(int j=0;j<count;j++)            // create arrey of dig
        {
            dig=temp%10;
            // cout<<dig<<" ";
           insrr[j]=dig;
           temp=temp/10;
        }
        temp=0;
         for(int j=0;j<count;j++)         // dig_arry asending
         {
            for(int k=0;k<count-1;k++)
            {
                if(insrr[k]<insrr[k+1])
                {
                    temp=insrr[k];
                    insrr[k]=insrr[k+1];
                    insrr[k+1]=temp;
                }
            }
         }
          for(int k=0;k<count;k++)         // create numbar
            {
                sum=sum+(insrr[k]*fact);
                fact=fact/10;
            }
            // cout<<sum<<" ";
            arr[i]=sum;                    // overide arrey with new number
    }
         for(int k=0;k<size;k++)
            {
                 cout<< arr[k]<<" ";
            }

    return 0;
}