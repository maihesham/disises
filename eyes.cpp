#include "eyes.h"
#include <iostream>
#include "diseases.h"

using namespace std;

Eyes::Eyes()
{
            Search=NULL;
        siz=0;
        counter7=0;
        counter8=0;
        deter_Diseases="Eyes";
}
Eyes::~Eyes()
{
    //dtor
}
Eyes::Eyes(int *s, int i,int number_effec):Diseases(s,i,number_effec)
{
     deter_Diseases="Eyes";
      counter7=0;
      counter8=0;

}
void Eyes:: Search_diseases(){
  for(int i=0;i<siz;i++){
    if((Search[i]==16)||(Search[i]==17)){//v,x
        counter7++;//Ophtalmia
    }
    if((Search[i]==18)||(Search[i]==19)){//y,z
        counter8++;//Blurred eye
    }
  }


}
void  Eyes::Calculate_prcentage(){

    if(counter7>0){
            double i=counter8*(100/number_of_effect);
                cout<<endl;

        cout<<"      "<<"Ophtalmia, and the percentage of this disease "<<""<<i <<" %"<<endl;
            cout<<endl;
            //tromaysen
            cout<<"       "<<"you can take 'tromaysen' as a Medication"<<endl;
        //
            cout<<endl;

    }

    if(counter8>0){
            double i=counter8*(100/number_of_effect);
                cout<<endl;

        cout<<"      "<<" Blurred eye, and the percentage of this disease "<<""<<i <<" %"<<endl;
            cout<<endl;
            //Diameter healing
            cout<<"       "<<"you can take 'Diameter healing' as a Medication"<<endl;
        //
            cout<<endl;

    }



}

