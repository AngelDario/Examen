#include <iostream>
using namespace std;

bool dentro(char *cadena, char *subcadena ){
  int aux=0;
  int tamanio=0;

  for(int i=0; subcadena[i]!='\0'; i++, tamanio++){}

  for(int i=0; cadena[i]!='\0'; i++){
    for(int j=0; subcadena[j]!='\0'; j++){
      if(cadena[i]==subcadena[j]){
        aux++;
      }
    }
  }

  if(tamanio==aux){
    return true;
  }else{
    return false;
  }
}


int main(){
  char cadena1[]="123456";
  char cadena2[]="456";

  cout<<dentro(cadena1,cadena2);


  return 0;
}
