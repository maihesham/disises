#include "diseases.h"

using namespace std;
Diseases::Diseases()
{
    siz=0;
    Search=NULL;
    number_of_effect=0;

}
Diseases::Diseases(int* s,int i, int number_effec)
{
     siz=i;
     number_of_effect=number_effec;
     Search=new int[siz];
    for(int r=0;r<siz;r++){
            Search[r]=s[i];
        }
}
void Diseases::Get_deter_Diseases(string x)
{
     deter_Diseases=x;
}
string Diseases:: Set_deter_Diseases()
{
    return deter_Diseases;
}

void Diseases::set_size(int i)
{
    siz=i;
}
int Diseases::get_size()
{
    return siz;
}

void Diseases:: Set_Search(int *e)
{
    for(int i=0;i<siz;i++)
        {
            Search[i]=e[i];
        }
}
int* Diseases:: get_Search()
{
    int* y;
    for(int x=0;x<siz;x++)
        y[x]=Search[x];
return y;
}

Diseases::Diseases(const Diseases &q){
    siz=q.siz;
    Search=new int[siz];
    for(int r=0;r<siz;r++){
            Search[r]=q.Search[r];}
}

Diseases& Diseases::operator =(const Diseases& d)
{
    siz=d.siz;
    Search=new int[siz];
    for(int r=0;r<siz;r++){
            Search[r]=d.Search[r];
    }
}
Diseases::~Diseases(){


 delete [] Search;


 }

void Diseases:: Set_number(int i){
    number_of_effect=i;
}
int Diseases:: Get_number(){
    return number_of_effect;

}
