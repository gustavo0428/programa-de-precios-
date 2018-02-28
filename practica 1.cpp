#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 
int main() 
{ 
char cedula[17];
char nombre[35] ;
float precio, peso,costo;
cout<<"introduzca su nombre primer nombre y primer apellido:\n";
cin.getline(nombre,35);
	cout<<"introduzca su cedula: \n"; 
cin.getline(cedula,17);
cout<<"introduzca el peso en libras del objeto y su precio en dolares \n"; 
cout<<"separados por espacios: \n";
cin>>peso>>precio;
if (peso>50)
{
costo=25*(1-pow(1.01,(-9.21*peso)));	
}
else 
{
if (precio > 75)
    {
	costo=0;
	}
else if ( precio<=75 && precio>50)
{costo=5;
		}	
else if (precio<=50 && precio>25 )	
{costo=10;
		}
else
{costo=15;				 
}				
	
}

cout<<"nombre"<<setw(25)<<"cedula"<<setw(17)<<"costo"<<setw(7)<<"peso"<<setw(11)<<"precio\n";	
cout<<nombre<<setw(21)<<cedula<<fixed<<setprecision(2)<<setw(12)<<costo<<setw(8)<<peso<<setw(8)<< precio; 

	return 0;
}
