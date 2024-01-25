//                                 shree Gaineshay namh...                                   //
#include<iostream>
#include<string.h>
using namespace std;


class Book_lai
{
    int Book_id,Book_prise;
    char name[20],auther[20],publication[20];

public:
    void set(int Bid,int Bpri,char BNmae[],char BAuther[],char Bpublic[])
     {
        Book_id=Bid;Book_prise=Bpri;
        strcpy(name,BNmae);
        strcpy(auther,BAuther);
        strcpy(publication,Bpublic);
     }
    void displey()
     {

        cout<<"Book_id          ->"<<Book_id<<"\n";                
        cout<<"Book_prise       ->"<<Book_prise<<"\n";
        cout<<"Book_Name        ->"<<name<<"\n";
        cout<<"Book_auther      ->"<<auther<<"\n";
        cout<<"Book_publication ->"<<publication<<"\n";
        cout<<"....................................................\n";
        // cout<<"\n";1

     }
     public:
    int get_book_Prise()                   // inline function return book prise
    {
        return Book_prise;
    }

    int get_book_Id()                   // inline function return book prise
    {
        return Book_id;
    }

    char *get_book_Name()
    {
        return name;
    }

    char *get_book_Auther()
    {
        return auther;
    }

    char *get_book_Publication()
    {
        return publication;
    }


public:
      void set_book_Prise(int prise)                   
       {
         Book_prise=prise;
      }
   
       void set_book_Id(int bo_id)                 
       {
           Book_id=bo_id;
       }
  
       char set_book_Name(char bo_name[])
      {
           strcpy(name,bo_name);
        
        
      }

      void set_book_Auther(char bo_auth[])
       {
        strcpy(auther,bo_auth);
       }

       void set_book_Publication(char bo_publ[])
       {
            strcpy(publication,bo_publ);
     }

};

int main()
{

    cout<<"\n.................Welcome in Amols_Boook_Softstoere..............................\n\n";
    // Enter the Total count of book veriabal
     int b_count=0,U_case=0;
     //case four
     int F_choise=0,Fiv_choise=0,six_coise=0,siv_coise=0,eig_chise=0;
     // membar for main
     int Book_id,Book_prise;char Book_name[20],Book_auther[20],Book_Pu[20];

    // Enter the Total count of book from usear
      printf("Enter the Total count of book Count of book\n");
      cin>>b_count;
    // count for the Control loop
      int count=0;int flag=0;

    // search input
     int Se_use_prise=0,Se_use_id;char Se_use_name[20];char Se_use_auther[20];char Se_use_publishar[20];
     // for update
    int b_id,b_prise;char b_name[20],b_auther[20],b_public[20];
    // veriabal for count id name auther and publication
    int countby=0;

    int i=0;
    do{
        if(i==0)
        {
        cout<<" case-> 1__Add oll book details\n";
        cout<<" case-> 2__Displey oll Book Diteals \n";
        cout<<" case-> 3__Dipley book Diteals whos prise range 100 to 500\n";
        cout<<" case-> 4__Search Book By\n";
        cout<<" case-> 5__Update book by\n";
        cout<<" case-> 6__Delate book Detaills by\n";
        cout<<" case-> 7__Count Book Ditelas by\n";
        cout<<" case-> 8__Sort Ditelas by\n";
        cout<<" case-> 9__Displey Second Heighst Book Prise\n";
        cout<<" case-> 10__Exsit the code\n";
        i++;
        }
 
       Book_lai obj1[b_count];
       printf("Enter the Case main from ubove \n");
       cin>>U_case;

       switch(U_case)
       
{

          case 1:                                                                   // case 1 done
         
                flag=0;
                if(count>=b_count)
                {
                    cout<<"Data base full Please Delate Some books..............\n";
                }else{
                
                
                    cout<<"Enter the Ditailes of the Book ->||Book id||Book_prise||Book_Name||Book_Auther||Book_publication\n";
                    for(int i=count;i<count+1;i++)
                    {
                        cin>>Book_id>>Book_prise>>Book_name>>Book_auther>>Book_Pu;
                        obj1[i].set(Book_id,Book_prise,Book_name,Book_auther,Book_Pu);
                        flag=1;
                        
                    }
                    
                    if(flag==1)
                    {
                        cout<<" Ditailes secssesfulley add in Data Base\n";
                        count++;
                    }else
                    {
                        cout<<"Not Secssefulley\n";
                    }
                }
            break;

        case 2:                                                                         // case 2 -> done                               
                    cout<<" oll Book Diteals  \n";
                    cout<<".............................................\n";
                    if(count==0)
                    {
                        cout<<"In Laiberry has no book\n";
                        cout<<"Can;t show Direals\n";
                    }else{
                    for(int i=0;i<count;i++)
                        {
                            obj1[i].displey();
                            
                        }
                    }
                break;

         case 3:                                                                        //case 3 Done
                    cout<<"book Diteals whos prise range 100 to 500\n";
                    if(count==0)
                    {
                        cout<<"In Laiberry has no book\n";
                    cout<<"Can;t show Direals\n";

                    }else{
                    for(int i=0;i<count;i++)
                        {
                            if((obj1[i].get_book_Prise())>=100 && (obj1[i].get_book_Prise())<=500)
                            {
                                obj1[i].displey();
                            }
                            
                        }
                    }

                break;

         
         case 4:
                    i=0;
                    cout<<"Case for search by...\n";
                    do{
                        if(i==0)
                        {
                            cout<<"case 4-> 1 Book Id\n";
                            cout<<"case 4-> 2 Book Name\n";
                            cout<<"case 4-> 3 Book Prise\n";
                            cout<<"case 4-> 4 Book Auther\n";
                            cout<<"case 4-> 5  Exsit from 4\n";
                            i++;
                        }
                        printf("Enter the Case4>1,2,3,4,5 from ubove \n");
                        cin>>F_choise;
                        switch(F_choise)
                        {
                            case 1:                                                           // 4->1 done
                        
                                if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by id\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Id for Search\n";
                                        cin>>Se_use_id;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Id()==Se_use_id)
                                                {
                                                    obj1[i].displey();
                                                    flag=1;
                                                }
                                                
                                            }

                                            if(flag==0)
                                            {
                                                cout<<"\nnot foud....\n";
                                            }else{
                                                cout<<"Secsefulley found it by id.\n";
                                            }
                                                
                                    }
                            break;

                            case 2:                                                                    // 4->2 Done
                                //  cout<<"case 4->2\n";
                                if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by Name\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Name for Search\n";
                                        cin>>Se_use_name;
                                        for(int i=0;i<count;i++)
                                            {
                                                // strcmp(obj1[i].get_book_Name()==Se_use_name)==0
                                                if( strcmp(obj1[i].get_book_Name(),Se_use_name)==0)
                                                {
                                                    obj1[i].displey();
                                                    flag=1;
                                                }
                                                
                                            }

                                            if(flag==0)
                                            {
                                                cout<<"\nnot foud....\n";
                                            }else{
                                                cout<<"Secsefulley found it by id.\n";
                                            }
                                                
                                    }
                            break;

                            case 3:                                                             // 4->3 Done
                                //  cout<<"case 4->3\n";
                                if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by prise\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Prise for Search\n";
                                        cin>>Se_use_prise;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Prise()==Se_use_prise)
                                                {
                                                    obj1[i].displey();
                                                    flag=1;
                                                }
                                                
                                            }

                                            if(flag==0)
                                            {
                                                cout<<"\nnot foud prise....\n";
                                            }else{
                                                cout<<"Secsefulley found it by prise.\n";
                                            }
                                                
                                    }
                            break;

                            case 4:
                                //  cout<<"case 4->4\n";
                                if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by Auther\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Bookauther for Search\n";
                                        cin>>Se_use_auther;
                                        for(int i=0;i<count;i++)
                                            {
                                                // strcmp(obj1[i].get_book_Name()==Se_use_name)==0
                                                if( strcmp(obj1[i].get_book_Auther(),Se_use_auther)==0)
                                                {
                                                    obj1[i].displey();
                                                    flag=1;
                                                }
                                                
                                            }

                                            if(flag==0)
                                            {
                                                cout<<"\nnot foud....\n";
                                            }else{
                                                cout<<"Secsefulley found it by auther.\n";
                                            }
                                                
                                    }
                            break;
                            case 5:
                                cout<<"Exsit from Search \n\n";
                            break;
                            default:
                            cout<<"Enter the defoult Choise\n";
                        
                        }
                    }while(F_choise!=5);
                    i=0;
                break;
         case 5:                                                                               // case 5
                            i=0;
                            cout<<"Case for Update book by...\n";
                    do{
                        if(i==0)
                        {
                            cout<<"case 5-> 1 Book Id\n";
                            cout<<"case 5-> 2 Book Name\n";
                            cout<<"case 5-> 3 Book Prise\n";
                            cout<<"case 5-> 4 Book Publication\n";
                            cout<<"case -> 5  Exsit from Update book\n";
                            i++;
                        }
                        printf("Enter the Case5>1,2,3,4,5 from ubove \n");
                        cin>>Fiv_choise;
                        switch(Fiv_choise)
                        {
                            //  int b_id,b_prise;char b_name[20],b_auther[20],b_public[20];
                            case 1:
                                //   cout<<"case 5->1\n"; update by id
                            
                                if(count==0)
                                {
                                    cout<<"No Book in Liabrary so Cant_Search by id\n";
                                }
                                else
                                    {
                                        cout<<"Ener the book id for update \n";
                                        cin>>Se_use_id;
                                        flag=0;
                                        // cout<<"Enter the Book_Id for Search\n";
                                        // cin>>Se_use_id;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Id()==Se_use_id)
                                                {
                                                    cout<<"Ener the book id after update \n";
                                                    cin>>b_id;
                                                    obj1[i].set_book_Id(b_id);
                                                    flag=1;
                                                }
                                                
                                            }
                                            if(flag==1)
                                            {
                                                cout<<"Secsefulley update it by id.\n";
                                                
                                            for(int i=0;i<count;i++)
                                                {
                                                    obj1[i].displey();
                                                    
                                                }         
                                            
                                            }else{
                                                cout<<"\nnot Update....\n";
                                                
                                                }
                                    }

                            break;

                            case 2:
                                //  cout<<"case 5->2\n"; update by name
                                if(count==0)
                                    {
                                    cout<<"No Book in Liabrary so Cant_update by Name\n";
                                    }
                                    else
                                        {
                                            flag=0;
                                            cout<<"Enter the Book_Name for update\n";
                                            cin>>Se_use_name;
                                            for(int i=0;i<count;i++)
                                                {
                                                    // strcmp(obj1[i].get_book_Name()==Se_use_name)==0
                                                    if( strcmp(obj1[i].get_book_Name(),Se_use_name)==0)
                                                    {
                                                    cout<<"Ener the book name after update \n";
                                                        cin>>b_name;
                                                        obj1[i].set_book_Name(b_name);
                                                        flag=1;
                                                    }
                                                    
                                                }
                                            
                                            if(flag==1)
                                                {
                                                    cout<<"Secsefulley update it by name\n";
                                                    
                                                for(int i=0;i<count;i++)
                                                    {
                                                        obj1[i].displey();
                                                        
                                                    }         
                                                
                                                }else{
                                                    cout<<"\nnot Update....\n";
                                                    
                                                    }
                                                        
                                        }

                            break;

                            case 3:
                                //  cout<<"case 5->3\n"; update by prise
                                if(count==0)
                                {
                                    cout<<"No Book in Liabrary so update by prise\n";
                                }
                                else
                                    {
                                        cout<<"Ener the book prise for update \n";
                                        cin>>Se_use_prise;
                                        flag=0;
                                        // cout<<"Enter the Book_Id for Search\n";
                                        // cin>>Se_use_id;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Prise()==Se_use_prise)
                                                {
                                                    cout<<"Ener the book prise after update \n";
                                                    cin>>b_prise;
                                                    obj1[i].set_book_Prise(b_prise);
                                                    flag=1;
                                                }
                                                
                                            }
                                            if(flag==1)
                                            {
                                                cout<<"Secsefulley update it by prise.\n";
                                                
                                            for(int i=0;i<count;i++)
                                                {
                                                    obj1[i].displey();
                                                    
                                                }         
                                            
                                            }else{
                                                cout<<"\nnot Update....\n";
                                                
                                                }
                                    }
                            break;

                            case 4:
                                //  cout<<"case 5->4\n"; update by publication
                                if(count==0)
                                    {
                                    cout<<"No Book in Liabrary so Cant_update by publication\n";
                                    }
                                    else
                                        {
                                            flag=0;
                                            cout<<"Enter the Book_publication for update\n";
                                            cin>>Se_use_publishar;
                                            for(int i=0;i<count;i++)
                                                {
                                                    // strcmp(obj1[i].get_book_Name()==Se_use_name)==0
                                                    if( strcmp(obj1[i].get_book_Publication(),Se_use_publishar)==0)
                                                    {
                                                    cout<<"Ener the book name after update \n";
                                                        cin>>b_public;
                                                        obj1[i].set_book_Publication(b_public);
                                                        flag=1;
                                                    }
                                                    
                                                }
                                            
                                            if(flag==1)
                                                {
                                                    cout<<"Secsefulley update it by publiaction.\n";
                                                    
                                                for(int i=0;i<count;i++)
                                                    {
                                                        obj1[i].displey();
                                                        
                                                    }         
                                                
                                                }else{
                                                    cout<<"\nnot Update....\n";
                                                    
                                                    }
                                                        
                                        }

                            break;
                            case 5:
                                cout<<"Exsit from Search \n\n";
                            break;
                            default:
                            cout<<"Enter the defoult Choise\n";
                        
                        }
                        }while(Fiv_choise!=5);
                        i=0;
                    break;
 

         case 6:                                                                                        // case  6
                    i=0;
                    cout<<"Case for Delate book Details by...\n";
                    do{
                        if(i==0)
                        {
                            cout<<"case 6-> 1 Book Id\n";
                            cout<<"case 6-> 2 Book Name\n";
                            cout<<"case 6-> 3 Book Prise\n";
                            cout<<"case 6-> 4 Book Publication\n";
                            cout<<"case 6-> 5  Exsit from Update book\n";
                            i++;
                        }
                        printf("Enter the Case6>1,2,3,4,5 from ubove \n");
                        cin>>six_coise;
                        switch(six_coise)
                        {
                            case 1:
                                //   cout<<"case 6->1\n";
                            if(count==0)
                                    {
                                    cout<<"No Book in Liabrary so Cant_Delateby id\n";
                                    }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Id for Delate\n";
                                        cin>>Se_use_id;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Id()==Se_use_id)
                                                {
                                                    // obj1[i].displey();
                                                    for(int j=i;j<count;j++)
                                                        {
                                                            obj1[j]=obj1[j+1];
                                                        }
                                                        flag=1;
                                                }
                                                
                                            }
                                            
                                            if(flag==1)
                                            {
                                                cout<<"Secsefulley Delate it by id.\n";
                                                count--;
                                            for(int i=0;i<count;i++)
                                                {
                                                    obj1[i].displey();
                                                    
                                                }         
                                            
                                            }else{
                                                cout<<"\nnot Delate....\n";
                                            
                                                
                                    }
                                    }
                            break;

                            case 2:
                                //  cout<<"case 6->2\n";
                                if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by Name\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Name for Search\n";
                                        cin>>Se_use_name;
                                        for(int i=0;i<count;i++)
                                            {
                                                // strcmp(obj1[i].get_book_Name()==Se_use_name)==0
                                                if( strcmp(obj1[i].get_book_Name(),Se_use_name)==0)
                                                {
                                                    for(int j=i;j<count;j++)
                                                        {
                                                            obj1[j]=obj1[j+1];
                                                        }
                                                    flag=1;
                                                }
                                                
                                            }

                                            
                                            if(flag==1)
                                            {
                                                cout<<"Secsefulley Delate it Name.\n";
                                                count--;
                                            for(int i=0;i<count;i++)
                                                {
                                                    obj1[i].displey();
                                                    
                                                }         
                                            
                                            }else{
                                                cout<<"\nnot Delate....\n";
                                            
                                                
                                                }
            
                                    }
                            break;

                            case 3:
                                cout<<"Delate by prise\n";
                                if(count==0)
                                    {
                                    cout<<"No Book in Liabrary so Cant_Delateby prise\n";
                                    }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Prise for Delate\n";
                                        cin>>Se_use_prise;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Prise()==Se_use_prise)
                                                {
                                                    // obj1[i].displey();
                                                    for(int j=i;j<count;j++)
                                                        {
                                                            obj1[j]=obj1[j+1];
                                                        }
                                                        flag=1;
                                                }
                                                
                                            }
                                            
                                            if(flag==0)
                                            {
                                                cout<<"\nnot Delate....\n";
                                            }else{
                                                cout<<"Secsefulley Delate it by Book_Prise\n";
                                            }
                                            
                                            count--;
                                            for(int i=0;i<count;i++)
                                                {
                                                    obj1[i].displey();
                                                    
                                                }                
                                    }
                            break;

                            case 4:
                                //  cout<<"case 6->4\n";
                                if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by Se_use_publishar\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Se_use_publishar for Delate\n";
                                        cin>>Se_use_publishar;
                                        for(int i=0;i<count;i++)
                                            {
                                                // strcmp(obj1[i].get_book_Name()==Se_use_name)==0get_book_Publication
                                                if( strcmp(obj1[i].get_book_Publication(),Se_use_publishar)==0)
                                                {
                                                    for(int j=i;j<count;j++)
                                                        {
                                                            obj1[j]=obj1[j+1];
                                                        }
                                                    flag=1;
                                                }
                                                
                                            }
                                            if(flag==1)
                                            {
                                                cout<<"Secsefulley Delate it Name.\n";
                                                count--;
                                            for(int i=0;i<count;i++)
                                                {
                                                    obj1[i].displey();
                                                    
                                                }         
                                            
                                            }else{
                                                cout<<"\nnot Delate....\n";
                                            
                                                
                                                }
                                    }
                            break;
                            case 5:                              
                                cout<<"Exsit from Delate 6 \n\n";
                            break;
                            default:
                            cout<<"Enter the defoult Choise\n";
                        
                        }
                    }while(six_coise!=5);
                    i=0;
                break;
                

                 case 7:
                    i=0;
                    cout<<"Case for Count book Details by...\n";
                    do{
                        if(i==0)
                        {
                            cout<<"case 7-> 1 Book Id\n";
                            cout<<"case 7-> 2 Book Name\n";
                            cout<<"case 7-> 3 Book Prise\n";
                            cout<<"case 7-> 4 Book Publication\n";
                            cout<<"case 7-> 5  Exsit from Update book\n";
                            i++;
                        }
                        printf("Enter the Case7>1,2,3,4,5 from ubove \n");
                        cin>>siv_coise;

                        switch(siv_coise)
                        {
                            case 1:
                                // cout<<"case 7->1\n"; count by id
                                 if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_count by id\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Id for count\n";
                                        cin>>Se_use_id;
                                        for(int i=count;i<count+1;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Id()==Se_use_id)
                                                {
                                               
                                                    count++;
                                                    flag=1;
                                                }
                                                
                                            }
                                            if(flag==1)
                                                {
                                                    cout<<"Secsefulley count by id."<<"\n";
                                                    cout<<"count by id is  ->"<<countby<<"\n";
                                                    countby=0;
                                                
                                                }else{
                                                    cout<<"\nnot count by id....\n";

                                                    }
                                    }
                            break;

                            case 2:
                                // cout<<"case 7->2\n"; count bt name
                                  if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_count by Name\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Name for count\n";
                                        cin>>Se_use_name;
                                        for(int i=0;i<count;i++)
                                            {
                                                // strcmp(obj1[i].get_book_Name()==Se_use_name)==0
                                                if( strcmp(obj1[i].get_book_Name(),Se_use_name)==0)
                                                {
                                                    // obj1[i].displey();
                                                    countby++;
                                                    flag=1;
                                                }
                                                
                                            }

                                           if(flag==1)
                                                {
                                                    cout<<"Secsefulley count by name"<<"\n";
                                                    cout<<"count by name is  ->"<<countby<<"\n";
                                                    countby=0;
                                                
                                                }else{
                                                    cout<<"\nnot count by name....\n";

                                                    }
                                                
                                    }
                            break;

                            case 3:
                                // cout<<"case 7->3\n"; count by prise
                                 if(count==0)
                                {
                                cout<<"No Book in Liabrary so Cant_Search by prise\n";
                                }
                                else
                                    {
                                        flag=0;
                                        cout<<"Enter the Book_Prise for count\n";
                                        cin>>Se_use_prise;
                                        for(int i=0;i<count;i++)
                                            {
                                        
                                                if(obj1[i].get_book_Prise()==Se_use_prise)
                                                {
                                                    countby++;
                                                    flag=1;
                                                }
                                                
                                            }

                                             if(flag==1)
                                                {
                                                    cout<<"Secsefulley count by prise"<<"\n";
                                                    cout<<"count by prise is  ->"<<countby<<"\n";
                                                    countby=0;
                                                
                                                }else{
                                                    cout<<"\nnot count by prise....\n";

                                                    }
                                                
                                    }
                            break;

                            case 4:
                                // cout<<"case 7->4\n"; count by publication
                                 if(count==0)
                                    {
                                    cout<<"No Book in Liabrary so Cant_count by publication\n";
                                    }
                                    else
                                        {
                                            flag=0;
                                            cout<<"Enter the Book_publication for count\n";
                                            cin>>Se_use_publishar;
                                            for(int i=0;i<count;i++)
                                                {
                                                   
                                                    if( strcmp(obj1[i].get_book_Publication(),Se_use_publishar)==0)
                                                    {
                                                        countby++;
                                                        flag=1;
                                                    }
                                                    
                                                }
                                        }

                                        if(flag==1)
                                                {
                                                    cout<<"Secsefulley count by publisher"<<"\n";
                                                    cout<<"count by publisher is  ->"<<countby<<"\n";
                                                    countby=0;
                                                
                                                }else{
                                                    cout<<"\nnot count by publisher....\n";

                                                    }

                                            
                            break;
                            case 5:
                                cout<<"Exsit from Delate 7\n\n";
                            break;
                            default:
                            cout<<"Enter the defoult Choise\n";
                        
                        }
                    }while(siv_coise!=5);
                    i=0;
                break;

                case 8:
                    i=0;
                    cout<<"Case for Sort book Details by...\n";
                    do{
                        if(i==0)
                        {
                            cout<<"case 8-> 1 Asending order by id  Id\n";
                            cout<<"case 8-> 2 Desending orser by price\n";
                            cout<<"case 8-> 3 Exsit from Sorting 8\n";
                            i++;
                        }
                        printf("Enter the Case7>1,2,3 from ubove \n");
                        cin>>eig_chise;
                        switch(eig_chise)
                        {
                            case 1:
                                cout<<"case 7->1\n";
                            break;

                            case 2:
                                cout<<"case 7->2\n";
                            break;
                            case 3:
                                cout<<" Exsit from Sorting 8\n";
                            break;
                            default:
                            cout<<"Enter the defoult Choise\n";
                        
                        }
                    }while(eig_chise!=3);
                    i=0;
                break;

                case 9:
                    cout<<"case 9\n";
                    // Displey SH book Prise deteals
                break;

                case 10:
                    cout<<"\nThanks to use  Amols_Boook_Softstoer\n\n";
                break;
                default:
                    cout<<"Enter the prorper choise\n";

            }
        

    }while(U_case!=10);
    
    return 0;
}