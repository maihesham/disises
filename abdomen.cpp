#include "abdomen.h"
#include "diseases.h"
#include <iostream>
using namespace std;




abdomen::abdomen():Diseases()
{
    counter3=0;
    counter4=0;
    counter5=0;
    deter_Diseases="abdomen";
}
abdomen::abdomen(int* s,int i, int number_effec):Diseases(s,i,number_effec)
{
        deter_Diseases="abdomen";
         counter3=0;
         counter4=0;
         counter5=0;

}

abdomen::~abdomen()
{
}
void abdomen::Search_diseases(){

    for(int i=0;i<siz;i++){
        if((Search[i]==3)||(Search[i]==4)||(Search[i]==13)||(Search[i]==12)){//d,e,m,n
            counter3++;//gallbladder// ursodeoxycholic
                           // cout<<"3==============="<<counter3<<endl;

            }
        if(((Search[i]>=5)&&(Search[i]<=7))||(Search[i]==11)){//f,g,h
            counter4++;//Ulcers   Cyclooxygenase
               // cout<<"4==============="<<counter4<<endl;

            }
        if((Search[i]>=11)&&(Search[i]<=13)){ //i,m n
            counter5++;//cold   Koonjstal
            //cout<<"5==============="<<counter5<<endl;
            }

    }



}
void abdomen:: Calculate_prcentage(){
         if(counter3>0){
                double i=counter3*(100/number_of_effect);

                    cout<<"      "<<"gallbladder , and the percentage of this disease "<<i <<" %"<<endl;
                            cout<<"       "<<"you can take ursodeoxycholic as a Medication"<<endl;

                            }

    if(counter5>0){
             double w=counter5*(100/number_of_effect);
            cout<<endl;
        cout<<"      "<<" Ulcers, and the percentage of this disease "<<w <<" %"<<endl;
        cout<<endl;
                cout<<"       "<<"you can take Cyclooxygenase as a Medication"<<endl;

    cout<<endl;
    }

    if(counter4>0){
        double t=counter4*(100/number_of_effect);
            cout<<endl;
        cout<<"      "<<"cold , and the percentage of this disease "<<t <<" %"<<endl;
        cout<<endl;
                cout<<"       "<<"you can take Koonjstal as a Medication"<<endl;

    cout<<endl;
    }
}











