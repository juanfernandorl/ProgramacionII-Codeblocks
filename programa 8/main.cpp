#include <iostream>

using namespace std;
/* Se tiene que ingresar el nombre, la nota y el progreso del alumno
con las siguientes observaciones
1-59 reprobado
60-80 bueno
81-90 muy bueno
91-100 sobresaliente.

usar condiciones donde apliquemos el and
*/
int main()
{ char nombre[30];
  int nota;

      cout<<"Ingresar nombre del alumno:";
      cin.getline(nombre,30);

        cout<<"Nota del alumno:>";
        cin>>nota;

        if ((nota>=0)and (nota<60))
        {
            cout<<"Reprobado"<<"\n";
        }
        else if ((nota>060) and (nota <=80))
        {
           cout<<"Bueno"<<"\n";
        }
        else if ((nota>=81) and (nota<=90))
        {
            cout<<"Muy bueno"<<"\n";
        }
        else if ((nota>=91) and (nota<=100))
        {
            cout<<"Sobresaliente"<<"\n";
        }
        else
        {
            cout<<"nota incorrecta";
        }

         return 0;
}
