
#include "Person.h"

Person::Person()
{
    name = "";
    phone="0000000";
    address="";
}
Person::Person(string n,string a,string ph)
{
    name=n;
    address=a;
    phone=ph;
}
void Person::set_name(string n)
{
    name=n;
}
void Person::set_address(string a)
{
    address=a;
}
void Person::set_phone(string ph)
{
   phone=ph;
}
string Person:: get_name()
{
    return name;
}
string Person:: get_address()
{
    return address;
}
string Person:: get_phone()
{
   return phone;
}

Person::~Person()
{
    //dtor
}
