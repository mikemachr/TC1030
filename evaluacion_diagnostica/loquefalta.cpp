#include <iostream>
#include <fstream>

using namespace std;
const int fraccionesMax=100;
class matrix
{
private:
    float num[fraccionesMax]={};
	float denum[fraccionesMax]={};
public:
    int getnum(int x){
        return num[x];
    }
    int getdenum(int x){
        return denum[x];
        }
	void read()
	{
		ifstream indata;
		indata.open("matrix.txt");

		for(int n=0;n<fraccionesMax;n++)
		{
			indata >> num[n];
			indata.ignore(1,'/');
			indata >> denum[n];            
		}
            indata.close();
        }
}; 
//con este metodo se escribe el resultado
void write (matrix m,int columnas,int filas) {
  ofstream output;
  output.open ("pito.txt");
		for(int n=0;n<columnas*filas;n++){
			output<<m.getnum(n);
			output<<"/";
			output<<m.getdenum(n);
			output<<"\t\t"; 
			if((n+1)%columnas==0){
				output<<"\n\n";
			}
		}
  output.close();
}

int main(){
	matrix m1;
	m1.read();
	write(m1,5,9);
	return 0;
}