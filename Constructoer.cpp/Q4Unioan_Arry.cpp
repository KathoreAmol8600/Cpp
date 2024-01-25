
#include<iostream>
using namespace std;
class unionintersection
{
	int size1,size2,size3,temp;
	int *ptr1,*ptr2;
	int ins_arr[];
	
	public:
		unionintersection(int a[],int b[],int size1,int size2,int size3)
		{
//			cout<<"insidet the counstructoer\n";
		ptr1=a;                                     //- adres stoer of arrey
		ptr2=b;
   		this->size1=size1;
   		this->size2=size2;
   		this->size3=size3;
   		temp=size1;

		}
		
	void unian()
	{
		ins_arr[size3];
		int temp1=0;
		cout<<"unioan\n";
		// loop for coppey first arry
		for(int i=0;i<size1;i++)
		{
		  ins_arr[i]=*(ptr1+i);
		}
		// loop for copey second arrey
		for(int i=0;i<size2;i++)
		{
		  ins_arr[temp]=*(ptr2+i);
		  temp++;
		}
		// loop for Assendeng arry
		for(int i=0;i<size3;i++)
		{
	     	for(int j=i;j<size3-1;j++)
	     	{
	     		if(ins_arr[j]>ins_arr[j+1])
	     		{
	     			temp1=ins_arr[j];
	     			ins_arr[j]=ins_arr[j+1];
	     			ins_arr[j+1]=temp1;
				}
			}
		}
        // loop for to Assending Displey
		for(int i=0;i<size3;i++)
		{
		  cout<<ins_arr[i]<<" ";
		}        
		// DElate dublicat Areey Elemnat  logic
		int count=size3;
		for(int i=0;i<size3;i++)                    
		{
			if(ins_arr[i]==ins_arr[i+1])
			{
				for(int j=i;j<size3;j++)
				{
					ins_arr[j]=ins_arr[j+1];
				}
				  --i;
				  --count;

			}
		}
		cout<<"............................\n";
	
		for(int i=0;i<count;i++)
		{
		  cout<<ins_arr[i]<<" ";
		}  
	}
	void intersection()
	{
		cout<<"intersecton\n";
	}
	
};
int main()
{
	int size1=5,size2=5,size3=size1+size2;
    int arr[size1]={1,2,13,5,4},brr[size2]={9,5,7,6,5};
//    
	unionintersection obj1(arr,brr,size1,size2,size3);
	obj1.unian();

//	
	return 0;
}

	//Input:  arr1[] = {1, 3, 4, 5, 7}
	//        arr2[] = {2, 3, 5, 6} 
	//Output: Union : {1, 2, 3, 4, 5, 6, 7} 
	//        Intersection : {3, 5}
	//
	//Input:  arr1[] = {2, 5, 6}
	//        arr2[] = {4, 6, 8, 10} 
	//Output: Union : {2, 4, 5, 6, 8, 10} 
	//        Intersection : {6}