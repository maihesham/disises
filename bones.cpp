#include "bones.h"
#include <iostream>
using namespace std;


bones::bones()
{
        Search=NULL;
        siz=0;
        counter1=0;
        counter2=0;
        deter_Diseases="bones";

}


bones::bones(int* s,int i ,int number_effec):Diseases(s,i,number_effec)

{
     deter_Diseases="bones";
     counter1=0;
     counter2=0;
}

bones::~bones()
{
}
void bones:: Search_diseases(){
    for(int y=0;y<siz;y++){
        if((Search[y]>=0)&&(Search[y]<=2)){//a,b,c
                counter1++;////Cartilage
                   // cout<<"1==============="<<counter1<<endl;

                }
         if((Search[y]==15)||(Search[y]==14)){//o,p
                counter2++;//Osteoporosis
               // cout<<"2==============="<<counter2<<endl;

        }
    }


}

//Osteoporosis ,cartilage
void bones:: Calculate_prcentage(){
    if(counter1>0){
                double i=counter1*(100/number_of_effect);

            cout<<endl;
        cout<<"      "<<"Cartilage , and the percentage of this disease "<<i <<" %"<<endl;
        cout<<"       "<<"you can take velagen as a Medication"<<endl;
    }
        if(counter2>0){
                    double e=counter2*(100/number_of_effect);
            cout<<endl;
        cout<<"      "<<"Osteoporosis , and the percentage of this disease "<<e <<" %"<<endl;
                cout<<"       "<<"you can take amoxel as a Medication"<<endl;

    }


}
