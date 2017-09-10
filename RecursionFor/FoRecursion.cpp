#include <iostream>

using namespace std;

int recursionFor(int con,string a)/*Defino mi funcion con dos argumentos uno int y otro string*/
{
    if(con==0){/*Si es que mi contador es 0 no me retrona nada*/
        return 0;
    }
    else{/*Si es diferente de 0 me imprime el mensaje y a mi funcion le altera el valor de con , pero no el valor de a*/
        cout << a <<"\n";
        recursionFor(con-1,a);
    }
}
int main()
{
    recursionFor(3,"Hola Profesor");
    return 0;
}
