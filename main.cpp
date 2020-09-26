#include <iostream>

using namespace std;

int main(){
    char nombre[100];
    unsigned int edad;
    //cout<<"Hola mundo"<<endl;
    cout<<"Escribe tu nombre: "<<endl;
    cin.getline(nombre,100);
    cout<<"Hola buen dia "<<nombre<<endl;
    cout<<"Cual es tu edad: ";
    cin>>edad;
    cout<<endl<<"Vas a cumplir: "<<edad+1<<endl;

    return 0;
}
