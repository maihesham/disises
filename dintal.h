#ifndef DINTAL_H
#define DINTAL_H

#include "Diseases.h"


class dintal : public Diseases
{
    public:
        dintal();
        ~dintal();
        void  Search_diseases();
        void Calculate_prcentage();
        dintal(int *i, int s,int x);

    private:
        int counter6;
};

#endif // DINTAL_H
