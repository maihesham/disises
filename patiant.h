#ifndef PATIANT_H
#define PATIANT_H
#include<fstream>
#include "Doctor.h"



#include "Person.h"


class Patiant : public Person
{
    public:
        Patiant();
        ~Patiant();
        string get_age();
        void set_age(string a);
        friend fstream& operator >>(fstream& pa,Patiant& p);
        void inser_profil(Patiant p);
        void Set_Doctor(Doctor A);
        Doctor Get_Doctor();



    private:
        string age;
        Doctor Q;

};

#endif // PATIANT_H
