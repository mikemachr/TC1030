#ifndef EVALUACION_DIAGNOSTICA_FRACCION_H
#define EVALUACION_DIAGNOSTICA_FRACCION_H
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
class fraccion
{
private:
    int numerador{},denominador{};
public:
    fraccion(){
    numerador=0;
    denominador=0;
    print(numerador,denominador);
    };
    fraccion(int,int);
    void print(int a,int b){
        cout<<a<<"/"<<b<<endl;
    }
    fraccion suma(fraccion f1,fraccion f2){
    int d,n;
    if(f1.denominador<f2.denominador){
        d=f1.denominador*f2.denominador;
        n=f1.numerador*(d/f1.denominador)+f2.numerador*(d/f2.denominador);
    }else if (f2.denominador<f1.denominador)
    {
        d=f1.denominador*f2.denominador;
        n=f2.numerador*(d/f2.denominador)+f1.numerador*(d/f1.denominador);
    }else
    {
        d=f1.denominador;
        n=f1.numerador+f2.numerador;
    }
    fraccion resultado(n,d);
    return resultado;
    }
    fraccion multiplicacion(fraccion f1,fraccion f2){
        int n,d;
        n=f1.numerador*f2.numerador;
        d=f1.denominador*f2.denominador;
        fraccion result(n,d);
        return result;
    }
};
fraccion::fraccion(int n,int d)
{
    bool neg;
    int i;
    if(d<0||n<0){
        n=abs(n);
        d=abs(d);
        neg=true;
    }else if (d<0&&n<0)
    {
        n=abs(n);
        d=abs(d);
    }

        for (i = 2; i <d; i++)
        {
            if(n%i==0&&d%i==0){
                n=n/i;
                d=d/i;
                i=2;
            }
        }
        for (i = 2; i <n; i++)
        {
            if(n%i==0&&d%i==0){
                n=n/i;
                d=d/i;
                i=2;
            }
        }
    if(d==n&&n>0){
        d=1;
        n=1;
    }
    if(neg){
        numerador=-n;
    }else{
    numerador=n;
    }
    denominador=d;
    print(numerador,denominador);
}
#endif