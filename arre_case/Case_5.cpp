// int arr[]={5792,8659,2534,9625,7354,1325};
// 2975 6685 4253 2659 4537 2591  // 
#include<iostream>
using namespace std;
int main()
{
    int size=6,dig,temp,fact=1,count=0,sum=0;
    int arr[]={5792,8656,2534,9625,7354,1925};
    // int *ptr;
    for(int i=0;i<size;i++)
    {
       dig=0,temp=0,temp2=0fact=1,count=0,sum=0;
        temp=arr[i];

        while(arr[i]>10)                    //fact,count
        {
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
        temp2=insrr[i];
          while(temp2>10)                    //fact,count
        {
            fact=fact*10;
            temp2=temp2/10;
        }
        cout<<fact;
    //     temp=0; 
    //     int u=0;                           // for position of even number
    //      for(int j=0;j<count;j++)         // for fianding even number
    //      {
    //         if(insrr[j]%2==0)
    //         {
    //             temp=insrr[u];
    //             insrr[u]=insrr[j];
    //             insrr[j]=temp;
    //             u++;
    //         }
    //      }
         
    //       for(int k=0;k<count;k++)         // create numbar
    //         {
    //             sum=sum+(insrr[k]*fact);
    //             fact=fact/10;
    //         }
    //         // cout<<sum<<" ";
    //         arr[i]=sum;                    // overide arrey with new number
    // }

    //      for(int k=0;k<size;k++)           // displey
    //         {
    //              cout<< arr[k]<<" ";
    //         }

    return 0;
}