#include <iostream>
#include <fstream>
#include<algorithm>
#include "diseases.h"
#include "abdomen.h"
#include "bones.h"
#include "dintal.h"
#include<string>
#include "Person.h"
#include "Doctor.h"
#include "Patiant.h"
#include "eyes.h"
fstream in("profile.txt");
fstream pa("patient.txt");
#include<cctype>
#include<iomanip>
static int SIZE_PATIENT=1;
using namespace std;
template <class T>
class files{

public:
void take(T &t,fstream &in)
{
    in>>t;
}

};
void show()
{
    fstream list1;
    list1.open("list1.txt");
    cout<<list1.rdbuf();
    list1.close();
}
void openfile()
{
    if(!(in.is_open()))
        throw 0;
}


void initilation(int* p,int a)
{
    for(int i=0;i<a;i++)
        p[i]=20;
}
int* return_determin(string x,int t){
 int* effect=new int[t];
      for(int a=0;a<t;a++){
        if((x[a]=='a')||(x[a]=='A')){effect[a]=0;}
        else if((x[a]=='b')||(x[a]=='B')){effect[a]=1;}
        else if((x[a]=='c')||(x[a]=='C')){effect[a]=2;}
        else if((x[a]=='d')||(x[a]=='D')){effect[a]=3;}
        else if((x[a]=='e')||(x[a]=='E')){effect[a]=4;}
        else if((x[a]=='f')||(x[a]=='F')){effect[a]=5;}
        else if((x[a]=='j')||(x[a]=='J')){effect[a]=6;}
        else if((x[a]=='h')||(x[a]=='H')){effect[a]=7;}
        else if((x[a]=='i')||(x[a]=='I')){effect[a]=8;}
        else if((x[a]=='g')||(x[a]=='G')){effect[a]=9;}
        else if((x[a]=='k')||(x[a]=='K')){effect[a]=10;}
        else if((x[a]=='l')||(x[a]=='L')){effect[a]=11;}
        else if((x[a]=='m')||(x[a]=='M')){effect[a]=12;}
        else if((x[a]=='n')||(x[a]=='N')){effect[a]=13;}
        else if((x[a]=='o')||(x[a]=='O')){effect[a]=14;}
        else if((x[a]=='p')||(x[a]=='P')){effect[a]=15;}
        else if((x[a]=='V')||(x[a]=='v')){effect[a]=16;}
        else if((x[a]=='X')||(x[a]=='x')){effect[a]=17;}
        else if((x[a]=='Y')||(x[a]=='y')){effect[a]=18;}
        else if((x[a]=='z')||(x[a]=='Z')){effect[a]=19;}
    }

    return effect;
}
int main()
{
    try{
        openfile();}
    catch(int r){
        if(r==0){
            cout<<"your file not find ,please try again"<<endl;
            return 0;}
    }



    cout<<"-------------------- list of symptoms ---------------------"<<endl;
    cout<<endl;
    cout<<"            please enter lower case letters"<<endl;
    cout<<endl;
    show();
     cout<<endl;
    string efft;
    cout<<"      please, Enter your Satisfactory complaint  ";
    getline(cin,efft);
    system("cls");
    int siz1=efft.size();
    int* effect1=return_determin(efft,siz1);
    int* BoNes=new int[4];
    int* DIntal=new int[3];
    int* Addomen=new int[10];
    int* EYes=new int[4];
    int z=0,x=0,y=0,w=0;
    sort(effect1,effect1+siz1);
     initilation(BoNes,4);
      initilation(DIntal,3);
       initilation(Addomen,10);
        initilation(EYes,4);
    for(int q=0;q<siz1;q++){
        if(((effect1[q]>=0)&&(effect1[q]<=2))||((effect1[q]==14)||(effect1[q]==15))){
                BoNes[z]=effect1[q];
                z++;
                }
         if((effect1[q]>=16)&&(effect1[q]<=18)){
                EYes[w]=effect1[q];
                w++;
                }
        if(((effect1[q]>=3)&&(effect1[q]<=7))||((effect1[q]<=13)&&(effect1[q]>=11))){
               Addomen[x]=effect1[q];
               x++;}

       if((effect1[q]>=8)&&(effect1[q]<=10)){
               DIntal[y]=effect1[q];
               y++;
               }
            }
            /*for(int y=0;y<z;y++){cout<<y<<" "<<BoNes[y]<<endl;}
            cout<<"??????????????????????????"<<endl;
            for(int y=0;y<x;y++){cout<<y<<" "<<Addomen[y]<<endl;}
                        cout<<"??????????????????????????"<<endl;

            for(int t=0;t<y;t++){cout<<t<<" "<<DIntal[t]<<endl;}
            cout<<"Z"<<z<<endl;
            cout<<"Y"<<y<<endl;
            cout<<"x"<<x<<endl;*/


        Doctor d[4];
    files <Doctor> f;
    for(int i=0;i<4;i++)
    f.files<Doctor>::take(d[i],in);
    in.close();
        Diseases** D=new Diseases*[4];
        if(z!=0){
        D[0]=new bones(BoNes,z,siz1);
        D[0]->Set_Search(BoNes);
        D[0]->set_size(z);
        D[0]->Set_number(siz1);
        D[0]->Search_diseases();
        D[0]->Calculate_prcentage();
        cout<<endl;
        cout<<"if you need to go to Docrot you can go to "<<endl;
        cout<<endl;
        cout<<"      "<<d[0].get_name()<<endl;
                cout<<endl;

        cout<<"      "<<d[0].get_address()<<endl;
                cout<<endl;

        cout<<"      "<<d[0].get_phone()<<endl;
                cout<<endl;

        cout<<"      "<<d[0].getappointment()<<endl;
                cout<<endl;

        cout<<"      "<<d[0].getspecialization()<<endl;
                cout<<endl;


        }
        if(y!=0){
        D[1]=new dintal(DIntal,y,siz1);
        D[1]->Set_Search(DIntal);
        D[1]->set_size(y);
        D[1]->Set_number(siz1);
        D[1]->Search_diseases();
        D[1]->Calculate_prcentage();
        cout<<endl;
        cout<<"if you need to go to Docrot you can go to "<<endl;
        cout<<endl;
        cout<<"      "<<d[1].get_name()<<endl;
                cout<<endl;

        cout<<"      "<<d[1].get_address()<<endl;
                cout<<endl;

        cout<<"      "<<d[1].get_phone()<<endl;
                cout<<endl;

        cout<<"      "<<d[1].getappointment()<<endl;
                cout<<endl;

        cout<<"      "<<d[1].getspecialization()<<endl;
                cout<<endl;


        }
        if(x!=0){
        D[2]=new abdomen(Addomen,x,siz1);
        D[2]->Set_Search(Addomen);
        D[2]->set_size(x);
        D[2]->Set_number(siz1);
        D[2]->Search_diseases();
        D[2]->Calculate_prcentage();
        cout<<endl;
        cout<<"if you need to go to Docrot you can go to "<<endl;
        cout<<endl;
        cout<<"      "<<d[2].get_name()<<endl;
                cout<<endl;

        cout<<"      "<<d[2].get_address()<<endl;
                cout<<endl;

        cout<<"      "<<d[2].get_phone()<<endl;
                cout<<endl;

        cout<<"      "<<d[2].getappointment()<<endl;
                cout<<endl;

        cout<<"      "<<d[2].getspecialization()<<endl;
                cout<<endl;




        }
        if(w!=0){
        D[3]=new Eyes(EYes,w,siz1);
        D[3]->Set_Search(EYes);
        D[3]->set_size(w);
        D[3]->Set_number(siz1);
        D[3]->Search_diseases();
        D[3]->Calculate_prcentage();
        cout<<endl;
        cout<<"      "<<d[3].get_name()<<endl;
                cout<<endl;

        cout<<"      "<<d[3].get_address()<<endl;
                cout<<endl;

        cout<<"      "<<d[3].get_phone()<<endl;
                cout<<endl;

        cout<<"      "<<d[3].getappointment()<<endl;
                cout<<endl;

        cout<<"      "<<d[3].getspecialization()<<endl;
                cout<<endl;

        cout<<"      "<<d[3].gettreatment();
                        cout<<endl;}
                        cout<<"you need to interact with our App"<<endl;
        cout<<"enter 1 elese enter 0 :- ";
        int i;
        cin>>i;
        cout<<endl;
        if(i==1){
        files <Patiant> fi;
    Patiant p[SIZE_PATIENT];
    cout<<"Is the first time that you use the application ?"<<endl;
    string name;
    cin>>name;
    for (int i=0;i<name.size();i++)
        name[i]=tolower(name[i]);
        int c=0;
    if(name=="no")
    {
        string x;
        cout<<"Please enter your name :";
        cin>>x;
        for(int i=0;i<SIZE_PATIENT;i++){
        fi.files<Patiant>::take(p[i],pa);
        if(p[i].get_name()==x){
        c=i;
        break;
        }}
        cout<<"your name :-"<<p[c].get_name()<<endl;
        cout<<"your address :- "<<p[c].get_address()<<endl;
        cout<<"your phone :- "<<p[c].get_phone()<<endl;
        cout<<"your age :- "<<p[c].get_age()<<endl;
    }
    else if(name=="yes")
    {
         Patiant p;
    string w,x,y,z;
    cout<<"enter your name :- ";
    getline(cin,w);
    p.set_name(w);
    cout<<endl;
    cout<<"enter your age :-";
    cin>>z;
    p.set_age(z);
    cout<<"enter your phone :-";
    cin>>x;
    p.set_phone(x);
    cout<<"enter your address \n";
    cin>>y;
    p.set_address(y);
    p.inser_profil(p);
    SIZE_PATIENT++;
        pa.close();

    }else{cout<<"wrong try again"<<endl;return 0;}}
    else if(i==0){

        cout<<"thank you ,I wish you a speedy recovery"<<endl;return 0;
    }
    cout<<endl;
            cout<<"thank you ,I wish you a speedy recovery"<<endl;






    return 0;
}

