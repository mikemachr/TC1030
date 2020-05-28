#include "header.h"

void crear(){
    while (1){
        int tipo;
        string r_n,r_d,r_c,r_e,r_cp,d_n,d_d,d_c,d_e,d_cp;
        double p_e,w,l,a,p;
        cout<<"Deseas crear un sobre o un paquete?"<<endl;
        cout<<"Sobre:"<<"\t"<<"1"<<endl;
        cout<<"Paquete:"<<"\t"<<"2"<<endl;
        cin>>tipo;
        cout<<"Introduce el nombre del remitente"<<endl;
        cin>>r_n;
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
        switch (tipo)
        {
        case 1:
        
            break;
        
        default:
            break;
        }
        cout<<"Dar de alta otro envio?"<<endl;
        cout<<"1"<<"\t"<<"Si"<<endl;
        cout<<"2"<<"\t"<<"No"<<endl;

    }
    
}
int main() {
    paquete a;
    cout<<a.r_cp<<endl;
    return 0;
}