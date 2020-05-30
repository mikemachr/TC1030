#include "header.h"

void crear(){
        string r_name,r_d,r_c,r_e,d_n,d_d,d_c,d_e;
        double c_e=20,w,l,a,p,c_k;
        int r_cp,d_cp;
        cout<<"Introduce el nombre del remitente"<<endl;
        cin>>r_name;
        cout<<"Introduce la direccion del remitente"<<endl;
        cin>>r_d;
        cout<<"Introduce el estado del remitente"<<endl;
        cin>>r_e;
        cout<<"Introduce la ciudad del remitente"<<endl;
        cin>>r_c;
        cout<<"Introduce el codigo postal del remitente"<<endl;
        cin>>r_cp;
        cout<<"Introduce el nombre del destinatario"<<endl;
        cin>>d_n;
        cout<<"Introduce la direccion del destinatario"<<endl;
        cin>>d_d;
        cout<<"Introduce el estado del destinatario"<<endl;
        cin>>d_e;
        cout<<"Introduce la ciudad del destinatario"<<endl;
        cin>>d_c;
        cout<<"Introduce el codigo postal del destinatario"<<endl;
        cin>>d_cp;
        cout<<"Introduce el largo del paquete"<<endl;
        cin>>l;
        cout<<"Introduce el ancho del paquete"<<endl;
        cin>>a;
        cout<<"Introduce la altura del paquete"<<endl;
        cin>>p;
        cout<<"Introduce el costo por Kilogramo"<<endl;
        cin>>c_k;
        cout<<"Introduce el peso del paquete"<<endl;
        cin>>w;
        paquete p1(d_n,r_d,r_c,r_e,d_n,d_d,d_c,d_e,r_cp,d_cp,c_e,l,a,p,w,c_k);    
        cin.get();
        sobre s1(d_n,r_d,r_c,r_e,d_n,d_d,d_c,d_e,r_cp,d_cp,c_e,l,a);    
        cin.get();    
}
int main() {
    crear();
    return 0;
}