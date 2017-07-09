#ifndef DOCTOR_H
#define DOCTOR_H
#include<iostream>
#include <fstream>
#include<string>
#include "abdomen.h"
#include "bones.h"
#include "dintal.h"
#include "eyes.h"



#include "Person.h"


class Doctor : public Person
{
    public:
        Doctor();
         void setappointment(string app);
        void settreatment(string treat);
        void setspecialization(string spec);
        string getappointment();
        string gettreatment();
        string getspecialization();
        friend fstream& operator >>(fstream& in,Doctor& d);
        virtual ~Doctor();
        void Set_Bones(bones b);
        void Set_Dintal(dintal d);
        void Set_Abdomen(abdomen a);
        void Set_eyes(Eyes a);
        bones Get_Bones();
        dintal Get_Dintal();
        abdomen Get_Abdomen();
        Eyes Get_eyes();
;

    private:
        string appointment;
        string treatment;
        string specialization;
        bones B;
        dintal D;
        abdomen A;
        Eyes E;
};

#endif // DOCTOR_H
