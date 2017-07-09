#ifndef EYES_H
#define EYES_H
#include "Diseases.h"


class Eyes : public Diseases
{
    public:
        Eyes();
        virtual ~Eyes();
        Eyes(int *s, int i,int number_effec);
        void  Search_diseases();
        void Calculate_prcentage();
    protected:
    private:
         int counter7;
        int counter8;
       string  deter_Diseases;
};

#endif // EYES_H
