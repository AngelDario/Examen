#include <iostream>
#include <math.h>
using namespace std;


long double numero(char l[]){
  long double aux;
  int i;
  int numeromultiplicar = 0;
  int numerom = 0;
  for(int k=0; l[k] != '\0';k++){
    if(l[k]=='-'){
      for(i=0;l[i] != 'e';i++){
        numerom = numerom * 10 + (l[i] - '0');
        }
      for(int j=i ;l[j]!='\0'; j++){
        if(l[j]!='e' && l[j]!='-'){
            numeromultiplicar = numeromultiplicar * 10 + (l[j] - '0');
          }
        }

        cout<<numeromultiplicar<<endl;
        cout<<numerom<<"\t";
        return aux=numerom*(pow(10,numeromultiplicar*-1));
      }
    }
        for(i=0;l[i] != 'e';i++){
          numerom = numerom * 10 + (l[i] - '0');
          }
        for(int j=i ;l[j]!='\0'; j++){
          if(l[j]!='e'){
              numeromultiplicar = numeromultiplicar * 10 + (l[j] - '0');
            }
          }

          cout<<numeromultiplicar<<endl;
          cout<<numerom<<"\t";
          return aux=numerom*(pow(10,numeromultiplicar));
}



int main(){
    char l[]="12347891e-6";
    cout<<numero(l);
    return 0;
}
