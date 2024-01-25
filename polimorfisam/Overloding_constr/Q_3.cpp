// Q3. Write a cpp program to create class name as OccurenceApp using Constructor overloading name as :

// 	OccurenceApp(int [ ])
// 	{
// 		//  count even and odd number in array.
// 	}
	
// 	OccurenceApp(char [ ] , char [ ])
// 	{
// 		//  count vowel and consonent charcter in string.
// 		//  count alphabet or digit or special symbol.
// 	}

#include<iostream>
using namespace std;
class OccurenceApp
{
    int even  ,odd;                      // for second counstru
    int s_1len,vowel,consonent;         // for second counstru
    int alpha,digit,spe_char; 


   
    public:
    OccurenceApp(int arr[ ],int size1)
	{
        even=0;
        odd=0;

		for(int i=0;i<size1;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }

            if(arr[i]%2!=0)
            {
                odd++;
            }
            
        }
        cout<<"\neven number imn arrey->"<<even;
        cout<<"\nodd number imn arrey->"<<odd;
	}\
	
	OccurenceApp(char str1[ ] , char str2[ ])
	{
		//  count vowel and consonent charcter in string.
		//  count alphabet or digit or special symbol.
        vowel=0;
        consonent=0;
          alpha=0,digit=0,spe_char=0; 
        for(int i=0;i<str1[i]!='\0';i++)
        {
           if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
           {
            vowel++;
           }else
           {
            consonent++;
           }
        }
        cout<<"\n in strinf one";
        cout<<"\nvovwels->"<<vowel;
        cout<<"\nonsonent->"<<consonent;
        cout<<"\n";

        for(int i=0;i<str2[i]!='\0';i++)
        {
          
            if(str2[i]>='a'&&str2[i]<='z'||str2[i]>='A'&&str2[i]<='Z')
            {
                alpha++;
            }else if(str2[i]>='1'&&str2[i]<='9')
            {
                digit++;
            }else{
                spe_char++;
            }
        }
        cout<<"\n in string two";
        cout<<"\n alpha->"<<alpha;
        cout<<"\n digit->"<<digit;
        cout<<"\n spe_char->"<<spe_char;

	}
};
int main()
{
    int size1=5;
    int arr[]={1,2,3,4,5};
    char str1[20],str2[20];
    cout<<"Enter the string first\n";
    cin>>str1;
     cout<<"Enter the string second\n";
    cin>>str2;

    OccurenceApp oj1(arr,size1);
    OccurenceApp oj2(str1,str2);
    


}