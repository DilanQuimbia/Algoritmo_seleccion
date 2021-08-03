#include <iostream>
using namespace std;
//taller-clase-19
int main() {
  int arreglo1[5]={3,2,1,5,4};
  int i,j,aux,min;
  for(i=0;i<5;i++)
  {
    min = i;
    for(j=i+1 ; j<5 ; j++)
    {
      if(arreglo1[j]<arreglo1[min])
      {
        min=j;
      }
    }
    aux=arreglo1[i];
    arreglo1[i]=arreglo1[min];
    arreglo1[min]=aux;
  }
  for(int i=0; i <5 ; i++)
  {
    cout<< arreglo1[i];
  }
  return 0;
}