#include "Patiant.h"

Patiant::Patiant()
{
    age="";
}
void Patiant::set_age(string a)
{
    age=a;
}
void Patiant::inser_profil(Patiant p)
{
     fstream profile;
    profile.open("patient.txt",ios::out|ios::app);
    profile<<"\n name: "<<p.get_name()<<"\n age: "<<p.get_age()<<"\n phone: "<<p.get_phone()
    <<"\n adress: "<<p.get_address()<<"\n-------------------------------\n";
    profile.close();
}
string Patiant::get_age()
 {
     return age;
 }

fstream& operator >>(fstream &pa,Patiant &p)
{
      getline(pa,p.name);
      getline(pa,p.address);
      getline(pa,p.phone);
      getline(pa,p.age);
}
void Patiant::Set_Doctor(Doctor A){
    Q=A;


}
Doctor Patiant:: Get_Doctor(){
    return Q;

}

Patiant::~Patiant()
{
    //dtor
}
