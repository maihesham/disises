#include "dintal.h"
#include <iostream>
using namespace std;


dintal::dintal()
{
        Search=NULL;
        siz=0;
        counter6=0;
        deter_Diseases="dintal";
}

dintal::~dintal()
{
}
dintal::dintal(int *s, int i,int number_effec):Diseases(s,i,number_effec)
{
     deter_Diseases="dintal";
      counter6=0;
}
void dintal:: Search_diseases(){
  for(int i=0;i<siz;i++){
    if((Search[i]>=8)&&(Search[i]<=10)){//i,j,k
        counter6++;////Calcium deficiency
    }
  }


}
void dintal:: Calculate_prcentage(){

    if(counter6>0){
            double i=counter6*(100/number_of_effect);
                cout<<endl;

        cout<<"      "<<"Calcium deficiency , and the percentage of this disease "<<""<<i <<" %"<<endl;
        cout<<endl;
                cout<<"       "<<"you can take vitamin c as a Medication"<<endl;
        //
            cout<<endl;

    }



}

