#include "fraccion.h"
#include "MatFrac.h"
int main(){
    int a,b;
    cout<<"Enter option"<<endl;
    cout<<"Create fractions"<<endl;
        cout<<"Enter numerator"<<endl;
        cin>>a;
        cout<<"Enter denominator"<<endl;
        cin>>b;
        fraccion f1(a,b); 
        cout<<"Enter numerator"<<endl;
        cin>>a;
        cout<<"Enter denominator"<<endl;
        cin>>b; 
        fraccion f2(a,b); 
        fraccion f3=f3.suma(f1,f2);
        fraccion mult=mult.multiplicacion(f1,f2);
}
