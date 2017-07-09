#ifndef DISEASES_H
#define DISEASES_H
#include<iostream>
using namespace std;


class Diseases
{
    public:
        Diseases();
        Diseases(int* s,int i ,int number_effec);
        ~Diseases();
        void Set_Search(int *e);
        int* get_Search();
        int get_size();
        void set_size(int i);
        void Get_deter_Diseases(string x);
        string Set_deter_Diseases();
        Diseases& operator =(const Diseases& d);
        Diseases(const Diseases &q);
       virtual void Search_diseases()=0;
       virtual void Calculate_prcentage()=0;
       void Set_number(int i);
       int  Get_number();
    protected:
        int *Search;
        int siz;
        int number_of_effect;//size of big array
        string deter_Diseases;
};

#endif // DISEASES_H
