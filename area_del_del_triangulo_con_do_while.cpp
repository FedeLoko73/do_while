#include <iostream.h>
main ()
{
     #define nomb 2
     int base=0, altura,area;
     char resp;    
     cout<<"                Calculo del area del triangulo"<<endl;
     cout<<"                ------------------------------"<<endl;
     do 
     {
     cout<<"Ingrese base: ";
     cin>>base;
     while(base==0)
     {
      system("cls");
     cout<<"Ingrese otra vez la base"<<endl;
     cin>>base;
     }
     cout<<"Ingrese altura: ";
     cin>>altura;
     while (altura==0)
     {
           system("cls");
           cout<<"Ingrese otra vez la altura"<<endl;
           cin>>altura;
           }
     area=(base*altura)/nomb;
     cout<<"El area del triangulo es: " <<area<<endl;
     cout<<"desea continuar s/n"<<endl;
     cin>>resp;
     }
     while (resp=='s' || resp=='S');                
     system("pause");
}
