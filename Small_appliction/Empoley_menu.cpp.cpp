#include<iostream>
#include<string.h>
using namespace std;
    int count=0;

class emploeyee
{
private:
  int eid=0,econ=0,esai=0;
  char epname[10],empmail[10];
 
  public:
  void set(int E_id,int E_con,int E_sai,char name[],char email[] )                      // data set
  {

    strcpy(epname,name);
    strcpy(empmail,email);
    eid=E_id,econ=E_con,esai=E_sai;
  }

  void displey()
  {
        cout<<"EmpId       ->"<<eid<<"\n";
        cout<<"Emp_Contect ->"<<econ<<"\n";
        cout<<"Emp_Sailery ->"<<esai<<"\n";
        cout<<"Emp_Name    ->"<<epname<<"\n";
        cout<<"Emp_MailId  ->"<<empmail<<"\n";
        cout<<"\n";
   }



  // int eid=0,econ=0,esai=0;
  // char epname[10],empmail[10];

    int getE_id()
   {
    return eid;
   }

    int getE_con()
   {
    return econ;
   }

    int getE_sal()
   {
    return esai;
   }
  
   char *getE_ename()
   {
    return epname ;
   }

   char *getE_email()
   {
    return empmail;
   }
  
  
};
int main()
{

    int Emp_id,Emp_econ,E_mpesail;
    char name[20],mail[20];
    int ino, flag=0, k=0,i,j=0;
    int index=0;
    int ret=1;
  

    printf("Enter the count of emploey");
    cin>>count;
    emploeyee obj1[count],temp;       
       
    //  obj1.get();
    

do{
    if(j<1)
    {
     cout<<"press the 1-> add diteals information "<<"\n";
     cout<<"press the 2-> displeyoo diteals information "<<"\n";
     cout<<"press the 3-> search by E_id "<<"\n";
     cout<<"press the 4-> Update Eid by Name "<<"\n";
     cout<<"press the 5-> Delate Empoley Ditelas by Email "<<"\n";
     cout<<"press the 6-> Displey Count in Comp"<<"\n";
     cout<<"press the 7-> displey by asending order by e_sail "<<"\n";
     cout<<"press the 8-> displey by e_ditals by highest sailery"<<"\n";
     cout<<"press the 9-> displey min sailery is 10000 to max sail 60000"<<"\n";
     cout<<"press the 0->  Exsit herw"<<"\n";
        j++;
    }

    printf("Enter the choise");
    cin>>ino;

    switch(ino)
    {
    // int eid=0,econ=0,esail=0;
    // char name[20],mail[20];
      case 1:
       cout<<"Enter the->> Emp_Id....Emp_ Conc... Emp_sail...Emp_name...tEmp_mail"<<"\n";
       cin>>Emp_id>>Emp_econ>>E_mpesail>>name>>mail;
       
       for(i=k;i<k+1;i++)
       {

        if(k==count)
        break;

        obj1[i].set(Emp_id,Emp_econ,E_mpesail,name,mail);
       }

       k++;
      break;
  
      case 2:
       cout<<"Emploey of diteales"<<"\n\n";
      for(int i=0;i<k;i++){
        obj1[i].displey();
      }
       
      break;

      case 3:
      cout<<"\n Enter the EMP_Id For search\n";
     cin>>Emp_id;
     flag=0;
      for(int i=0;i<k;i++)
      {
       if( obj1[i].getE_id()==Emp_id)
        {
            flag=1;
            break;
            // cout<<"gansh";
        }
       
      }
      if(flag==1)
      {
        cout<<"grt it..!!\n";
      }else{
        cout<<"Not get it\n";
      }
      break;

      case 4:
       cout<<"\n Enter the Emp_mail For Update\n";
       cin>>mail;
       flag=0;
      // char *p;
      //  p=obj1[0].getE_email();
      //  cout<<p;
      for(int i=0;i<k;i++)
        {
          index++;
          ret=strcmp(mail,obj1[i].getE_email());
          if(ret==0)
          {
            index--;
            for(int j=0;j<k;j++)
            {
              if(j==index)
            
            {
             // Emp_id,Emp_econ,E_mpesail;
                cin>>Emp_id>>Emp_econ>>E_mpesail>>name>>mail;
                obj1[index].set(Emp_id,Emp_econ,E_mpesail,name,mail);
              }
            }
              for(int i=0;i<k;i++)
                  {
                  obj1[i].displey();
                  }
            break;
          }
        }
        
      break;

      case 5:
       cout<<"\n Enter the Emp_mail For Delate\n";
       cin>>mail;
       flag=0;
      for(int i=0;i<k;i++)
        {

          index++;
          ret=strcmp(mail,obj1[i].getE_email());
          if(ret==0)
          {
            index--;
            for(int j=index;j<k;j++)
            {
              //  Emp_id,Emp_econ,E_mpesail;->main
              //  int eid=0,econ=0,esai=0; -> class
              //char epname[10],empmail[10];

              if(j==index)
               {   
                for(int m=j+1;m<k;m++)
                {
                  temp.set(obj1[j].getE_id(),obj1[j].getE_con(),obj1[j].getE_sal(),obj1[j].getE_ename(),obj1[j].getE_email());
                   obj1[j].set(obj1[m].getE_id(),obj1[m].getE_con(),obj1[m].getE_sal(),obj1[m].getE_ename(),obj1[m].getE_email());
                  obj1[m].set(temp.getE_id(),temp.getE_con(),temp.getE_sal(),temp.getE_ename(),temp.getE_email());
                }
               }


            }
            --k;
              for(int i=0;i<k;i++)
                  {
                  obj1[i].displey();
                  }
            break;
          }
        }
      break;

      case 6:
     
      break;

      case 7:
     
      break;

      case 8:
     
      break;

      case 9:
     
      break;
      


    }
}while(ino!=0);




    // printf("Enter the Detailes");
    // cin>>name;
    // cin>>mail;
    // // cout<<name<<mail;

    // obj1.set(name,mail);


    return 0;
}
