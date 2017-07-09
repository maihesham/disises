#ifndef BONES_H
#define BONES_H
#include "Diseases.h"


class bones : public Diseases
{
    public:
        bones();
        bones(int* s,int i, int number_effec);
        ~bones();
        void  Search_diseases();
        void Calculate_prcentage();

    protected:
    private:
        int counter1;
        int counter2;

};

#endif // BONES_H
