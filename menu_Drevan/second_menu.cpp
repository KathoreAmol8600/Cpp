#include<iostream>
using namespace std;
class function
{

    public:
   
    int flag=0;
    int sum=0;
    int dig=0;
    int inum=0;

    public:
 int prime(int no)
    {
        for(int i=1;i<=no;i++)
        {
            inum=i;
            flag=0;
            for(int i=2;i<inum;i++)
            {
                if(inum%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<i<<"\n";
            }
        }
    }

 void  perfect(int no)
   {

    for(int i=1;i<=no;i++)
    {
        inum=i;
        sum=0;
     for(int j=1;j<inum;j++)
        {
            if(inum%j==0)
            {
                sum=sum+j;
                
            }
        }
        if(sum==inum)
        {
         cout<<i<<"\n";
        }
    }
   }

 int duck(int no)
    {
        int temp=0;
     for(int i=1;i<=no;i++)
     {
        inum=i;
        temp=inum;
         dig=0;
        flag=0;
        while(inum>0)
        {
            dig=inum%10;
            if(dig==0)
            {
               flag=1;
               break;
            }
            // cout<<dig<<"\n";
            inum=inum/10;
        }
        if(flag==1)
        {
            cout<<temp<<"\n";
        }
     }
    }

  void  strong(int no)
   {
    for(int i=1;i<=no;i++)
    {
        inum=i;
        dig=0;
        int temp=inum;
        int temp2=inum;
        int count=0;
        int sum=0;
        int prod=0;
        for(int i=inum;inum!=0;inum=inum/10)
        {
                dig=0;
                dig=inum%10;
                temp=inum/10;
                prod=1;
            for(int i=dig;i>0;i--)
            {
                prod=prod*i;
            
            }
            sum=sum+prod;
        }
        if(temp2==sum)
        {
            cout<<i<<"\n";
        }
    }

   }
 void Armstrong(int no)
    {
     for(int i=1;i<=no;i++)
     {
        inum=i;
        dig=0;
        int temp=inum;
        int temp2=inum;
        int count=0;
        for(int i=temp;temp!=0;temp=temp/10)
        {
            dig=0;
            dig=temp%10;
            count++;
        }
        int sum=0;
        int prod=1;
        for(int i=inum;inum!=0;inum=inum/10)
        {
                dig=0;
                dig=inum%10;
                temp=inum/10;
                // cout<<dig;
                prod=1;
            for(int i=0;i<count;i++)
            {
                prod=prod*dig;
            
            }
            sum=sum+prod;
        }
        if(temp2==sum)
        {
            cout<<i<<"\n";
        }
     }
    }
};

int main()
{
     int i=0;
     int num=0;
     int ret=0;
     int inum=0;
    function obj1;
    do{
        if(i==0)
        {
           cout<<"case 1->\n";
           cout<<"case 2->\n";
           cout<<"case 3->\n";
           cout<<"case 4->\n";
           cout<<"case 5->\n";
            i++;
        }

        cout<<"Enter the choise";
        cin>>num;
        switch(num)
        {
            case 1:
			cout<<"Enter the number for check prime to nth num\n";
			cin>>inum;
            obj1.prime(inum);
            break;

            case 2:
             cout<<"Enter the number for check perfect to nth num\n";
			 cin>>inum;
             obj1.perfect(inum);
            break;

            case 3:
        //    cout<<"duck or not"<<"\n";
             cout<<"Enter the number for check duck to nth num\n";
			 cin>>inum;
             obj1.duck(inum); 
            break;

            case 4:
        //    cout<<"strong or not"<<"\n";
            cout<<"Enter the number for check strong to nth num\n";
			cin>>inum;
            obj1.strong(inum);
            break;

            case 5:
        //    cout<<"armstrong or not"<<"\n";
           cout<<"Enter the number for check Armstrong  to nth num\n";
			cin>>inum;
            obj1.Armstrong(inum);
            break;
        }
    }while(num!=0);
 return 0;
}