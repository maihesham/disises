#ifndef ABDOMEN_H
#define ABDOMEN_H

#include "diseases.h"



class abdomen : public Diseases
{
    public:
        abdomen();
        abdomen(int* s,int i, int number_effec);
        ~abdomen();
        void  Search_diseases();
        void Calculate_prcentage();

    private:
        int counter4;
        int counter3;
        int counter5;
};

#endif // ABDOMEN_H
