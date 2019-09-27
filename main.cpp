#include <iostream>
#include <algorithm>
using namespace std;


///1. Imprimir los elementos
int main(){
    int arr[3]={1,2,3};
    int lista={};
    for(int i=0;i<3;i++)
        lista=arr[i];
    cout << lista;
}
///2. Suma (recursiva e iteractiva)
int main(){
    int suma=0;
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++)
        suma+=arr[i];
    cout << suma;
    return 0;
}


int sumarecursiva(int tam){

}


///3. Invertir (recursiva e iteractiva)

void invertir(int arr[], int tam){
    int cambio=tam/2;
    tam-=1;
    for(int i=0;i<cambio;i++){
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
    }
}

int main(){
    int x[3];
    int tam;
    for(int i=0;i<4;i++){
        cin >> tam;
    }
    invertir(x,3);
}

///4. Ordenamiento (burbuja,insertion,quicksort)

///Burbuja

int main(){
    int arr[5]={2,8,6,4,5};
    int temp;
    int tam=5;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
cout << "Arreglo ordenado: ";
for(int i=0;i<5;i++){
    cout << setw(2) << arr[i];
    }
}

///Insertion

void imprimir(int arr[], int tam){
    for(int i=0;i<tam;i++)
        cout << arr[i];
}
void insertion(int arr[], int tam){
    int j,aux;
    for(int i=0;i<tam;i++){
        aux=arr[i];
        j=i-1;
        while(j>=0 && aux<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
    }
}

int main(){
    int tam;
    cout << "Numero de elementos: ";
    cin >> tam;
    int num[tam];
    for(int i=0;i<tam;i++){
        cout << "Ingrese un numero: " << ;
        cin >> num[i];
    }
    insertion(num,tam);
    imprimir(num,tam);
}

///Quicksort

/*
void quicksort(int arr[], int primero, int ultimo){
    int central,i,j,pivote;
    central=(primero+ultimo)/2;
    pivote=arr[central];
    i=primero;
    j=ultimo;
    while(arr[i]<pivote) i++;
    while(arr[j]>pivote) j--;
    if(i<=j){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int primero,ultimo;
    cout << "Escribe un numero: ";
    cin >> arr[primero];
    for(int j=0;j>primero;j--){
        cout << "Ingrese un numero: " << ;
        cin >> arr[ultimo];
    }
    quicksort(5,1,8)
}
*/
