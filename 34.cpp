/*Realiza un programa que defina dos vectores de caracteres y despues almacene el contenido de ambos vectoresen un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido de nuveo vector en la siguentes entradas*/
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    for (int i=0; i<5; i++){
        letras3[i] = letras1[i];
    }

    for (int i=5; i<10; i++){
        letras3[i] = letras2[i-5];
    }

    for (int i=0; i<10; i++) {
        cout << "El nuevo vector es " << letras3[i]<< endl;
    }

    getch();
    return 0;
}
