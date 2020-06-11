#include <iostream>
using namespace std;
class Complex{
private:
int r,i;
public:
    Complex();
    Complex(int,int);
    int getR(Complex);
    int getI(Complex);
    Complex operator + (Complex number){
        Complex x;
        x.r=r+number.getR(number);
        x.i=i+number.getI(number);
        return x;
    }
};

Complex::Complex(int _r,int _i){
    i=_i;
    r=_r;
}
Complex::Complex(){
    i=0;
    r=0;
}

int Complex::getR(Complex x){return x.r;}
int Complex::getI(Complex x){return x.i;}

int main(){
    Complex a(1,1);
    Complex b(2,1);
    Complex c=a+b;
    cout<<c.getR(c)<<"+"<<c.getI(c)<<"i"<<endl;
    return 0;
}
