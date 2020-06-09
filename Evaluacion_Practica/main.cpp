#include <iostream>

using namespace std;

class Persona{
protected:
string nombre;
public:
virtual void getAttrs()=0; 
};

class Estudiante :public Persona
{
private:
string matricula, plan;
public:
    Estudiante(string, string, string);
    string getName();
    string getMatricula();
    string getPlan();
    void getAttrs(); 

};

Estudiante::Estudiante(string _name, string _matricula, string _plan){
nombre=_name;
plan=_plan;
matricula=_matricula;
}

string Estudiante::getName(){
    return nombre;
}

string Estudiante::getMatricula(){
    return matricula;
}

string Estudiante::getPlan(){
    return plan;
}




void Estudiante::getAttrs(){
    cout<<"Nombre: "<<getName()<<endl;
    cout<<"Matricula: "<<getMatricula()<<endl;
    cout<<"Plan de estudios: "<<getPlan()<<endl<<endl<<endl;
}

class Profesor: public Persona
{
private:
string nomina, departamento;
public:
    Profesor(string,string,string);
    string getName();
    string getNomina();
    string getDepartamento();
    void getAttrs(); 
};

Profesor::Profesor(string _nombre, string _nomina, string _departamento){
nombre=_nombre;
departamento=_departamento;
nomina=_nomina;
}

string Profesor::getName(){
    return nombre;
}

string Profesor::getNomina(){
    return nomina;
}

string Profesor::getDepartamento(){
    return departamento;
}

void Profesor::getAttrs(){
    cout<<"Nombre: "<<getName()<<endl;
    cout<<"Nomina: "<<getNomina()<<endl;
    cout<<"Departamento: "<<getDepartamento()<<endl<<endl<<endl;
}

int main(){
    Estudiante E1("Juan Sánchez","A01234567","Ing. Mecatronica");
    Estudiante E2("Monica Pérez","A01223344","Ing. en Tecnologias Computacionales");
    Estudiante E3("Carlos Augusto Amador","A01234455","Ing. Industrial");
    Profesor P1("Ernesto Ramírez","L00700700","Departamento de Computacion");
    Profesor P2("Jose Antonio Rodriguez","L099999","Departamento de Ciencias Basicas");
    Persona* Personas[5];
    Personas[0] = &E1;
    Personas[1]= &E2;
    Personas[2] = &E3;
    Personas[3]= &P1;
    Personas[4] = &P2;


    for (int i = 0; i < 5; i++){
        Personas[i]->getAttrs();
    }
    
    return 0;
}