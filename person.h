#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person
{
    public:
        Person();
        Person(string n,string a,string ph);
        virtual ~Person();
        void set_name(string n);
        void set_address(string a);
        void set_phone(string ph);
        string get_name();
        string get_address();
        string get_phone();

    protected:
        string name;
        string address;
        string phone;
};

#endif // PERSON_H

