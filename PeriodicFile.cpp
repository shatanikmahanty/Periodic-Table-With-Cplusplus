#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
//#include<cstdio>

using namespace std;
/**************************************************/
//      CLASS DEFINATION FOR THE ELEMENT
/*************************************************/
class Element{
  public: int atno;
          int group, period, K, L, M, N, O, P, Q;
          float mass, density;
          char name[20], symbol[4];

     //  CONSTRUCTOR OF THE CLASS //
    /*Element()
    { atno=period=1;
	  K=0,L=0,M=0,N=0,P=0,Q=0;
	  group=0;
	  mass=0;
	  strcpy(name,"Hydrogen");
	  strcpy(symbol,"H");
    } */
    
    void def_atno()
    { static int x=1;
      atno=x;
      ++x;
    }
    // FUNCTION RETURNS ATOMIC NUMBER
    int get_atno()
    {
      return atno;   
    }
    //  FUNCTION THAT DISPLAYS PROPERTIES OF ELEMENTS 
    void Display()
    { cout<<"\nElement name:"<<name;
      cout<<"\nSymbol:"<<symbol;
      cout<<"\nAtomic Number:"<<atno;
      cout<<"\nGroup:"<<group;
      cout<<"\nPeriod:"<<period;
      cout<<"\nMass:"<<mass;
      cout<<"\nElectrons in shell";
      cout<<"\n K     L     M     N     O     P    Q\n";
      cout<<K<<"    "<<L<<"    "<<M<<"    "<<N<<"    "<<O<<"    "<<P<<"    "<<Q;
    }
  /* void getele()
    {  cout<<"\nEnter Element's Name:";cin>>name;
       cout<<"\nEnter Atomic Number:";cin>>atno;
       cout<<"\nEnter Element's Symbol:";cin>>symbol;
       cout<<"\nEnter Element's Group:";cin>>group;
       cout<<"\nEnter Element's Period:";cin>>period;
       cout<<"\nEnter Element's Mass:";cin>>mass;
       cout<<"\nElectrons in shell";
       cout<<"K:";cin>>K;
       cout<<"L:";cin>>L;
       cout<<"M:";cin>>M;
       cout<<"N:";cin>>N;
       cout<<"O:";cin>>O;
       cout<<"P:";cin>>P;
       cout<<"Q:";cin>>Q;
    }*/
};
/**************************************************************/
//    FUNCTION SORT USED TO SHOW A THOSE ELEMENTS IN A PART
//             YOU HAVE CHOOSEN A RANGE OF IT
/**************************************************************/
void Sort(int a,int b,Element A[118])
{  for(int i=a-a;i<=b-a;++i)
   { for(int j=a-a;j<b-a-i;++j)
       { if (strcmpi(A[a+j].name,A[a+j+1].name)>0)
          { char temp[20];
            strcpy(temp, A[j+a].name);
            strcpy(A[j+a].name, A[j+a+1].name);
            strcpy(A[j+a+1].name,temp);
           }        
        }
    }
  cout<<"\n Selected Range of Elemets Sorted Alphabetically:\n" ;
  for(int k=a;k<=b;++k)
   {
      cout<<A[k].name<<endl;
   }
}
/**********************************************************************/
//   FUNCTION THAT TAKE ELEMENTS' PROPERTIES FROM THE FILE AND STORE
//          THEM IN THE ARRAY OF OBJECT A[ ] OF CLASS ELEMENTS
/**********************************************************************/
void definition(Element A[118])
{ ifstream table("Periodic.txt");
  table.seekg(0);
  for(int i=0;i<118;i++)
  { 
    table.read((char*)&A[i], sizeof(A[i]));
  }
  table.close();
}
/**********************************************/
//  MAIN FUNCTION CONTROL WHOLE PROGRAM
/**********************************************/
int main()
{  Element E[120];
   char ch='i'; int i=0;
   definition(E);
   while(ch!='5')
   { cout<<"\n\t \t 1.Search element by Name/ Symbol";
     cout<<"\n\t \t 2.Search element by Atomic Number";
     cout<<"\n\t \t 3.Sort Alphabetically";
     cout<<"\n\t \t 4.Display Periodic Table";
     cout<<"\n\t \t 5.EXIT";
     cout<<"\n Enter your choice(1-5):"; cin>>ch;
     switch(ch)
     { case '1': { char Sname[20];
                   cout<<"\nEnter element Name / Symbol:"; cin>>Sname;
                   for(i=0; i<118; i++)
                    { if(strcmpi(Sname,E[i].name)==0 || strcmpi(Sname,E[i].symbol)==0)
                       {
                         E[i].Display();
                       }
                   } 
                 }
                 break;
       case '2': { int Ano;
                   cout<<"\nEnter atomic number:"; cin>>Ano;
                   for(i=0;i<118;i++)
                   { if(Ano==E[i].get_atno())
                      {
                          E[i].Display();
                      }
                   }
                  }
                 break;
       case '3': int min,max;
                 do{
                    cout<<"\nEnter Range of Atomic Numbers:";
                    cin>>min>>max;
                 }while(min<1||max>118);
                 Sort(min-1,max-1,E);
                 break;
       case '4': cout<<"\nSTILL WORK GOING ON";
                 break;
       case '5': exit(0);
                 break;
     /*case 'i': { i=0; char ans='y';
                   ofstream table;
                   table.open("Periodic.txt",ios::out|ios::app);
                   while(ans=='y')
                   { E[i].getele();
                     table.write((char*)&E[i], sizeof(E[i]));
                     cout<<"\nWant to Enter More Elements?(Y/N)..";
                     cin>>ans; i++;
                   }
                   table.close();
                 }
                 break;*/
        default: { cout<<"\nINVALID CHOICE";}
     }
   }
  return 0;  
}
