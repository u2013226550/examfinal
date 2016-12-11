
#include <iostream>
 
 
using namespace std;
 
 
int main()
{
 
    int peso;
 
    float estatura,imc;
 
    cout<<"Introduce tu Peso (Kg):  ";
 
    cin>>peso;
 
    cout<<"Introduce tu Estatura  (Mts): ";
 
    cin>>estatura;
 
    imc=peso/(estatura*estatura);
 
    cout<<"Tu IMC es de :   "<<imc<<endl;
 
    return 0;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


