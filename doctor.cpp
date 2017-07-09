#include "Doctor.h"
#include <iostream>
#include <fstream>
#include<string>

Doctor::Doctor()
{
    //ctor
}

Doctor::~Doctor()
{
    //dtor
}
void Doctor ::setappointment(string app){
appointment=app;

}
void Doctor ::Set_eyes(Eyes a){
    E=a;

}
Eyes Doctor ::Get_eyes(){
    return E;

}

void Doctor::settreatment(string treat){


treatment=treat;
}
void Doctor::setspecialization(string spec)
{
       specialization=spec;
}
string Doctor::getappointment()
{
    return appointment;
}
string Doctor::gettreatment()
{
    return treatment;
}
string Doctor:: getspecialization()
{
    return specialization;
}
fstream& operator >>(fstream &in,Doctor &d)
{
        getline(in,d.name);
        getline(in,d.address);
        getline(in,d.phone);
        getline(in,d.appointment);
        getline(in,d.treatment);
        getline(in,d.specialization);

}
 void Doctor::Set_Bones(bones b){
     B=b;

 }
void Doctor::Set_Dintal(dintal d){
    D=d;
}
void Doctor::Set_Abdomen(abdomen a){
    A=a;

}
bones Doctor::Get_Bones(){
    return B;

}
dintal Doctor::Get_Dintal(){
    return D;

}
abdomen Doctor::Get_Abdomen(){
    return A;

}
