#include <iostream>

using namespace std;

int main(){
    char nombre[100];
    cout<<"Hola mundo"<<endl;
    cout<<"Escribe tu nombre: "<<endl;
    cin.getline(nombre,100);
    cout<<"Hola "<<nombre<<endl;

    return 0;
}
