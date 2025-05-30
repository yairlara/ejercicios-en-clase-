//leer 2 matrices a y b . generar una 3 tercera matriz que contenga la suma de estas, imprimir las 3 mareices 
#include<iostream>
using namespace std;

int main(){
    int f,f2,f3;
    int c,c2,c3;
    int suma=0;
    cout<<"dime las filas"<<endl;
    cin>>f;
    cout<<"dime las columnas"<<endl;
    cin>>c;
    int matriz[f][c];
    cout<<"dime las filas 2"<<endl;
    cin>>f2;
    cout<<"dime las columnas 2"<<endl;
    cin>>c2;
    int matriz2[f2][c2];

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<"ingresa la matriz en la posicion "<<i<<" "<<j<<endl;
        cin>>matriz[i][j];
        }
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<"ingresa la matriz2 en la posicion "<<i<<" "<<j<<endl;
        cin>>matriz2[i][j];
        }
    }
    cout<<"matriz 1"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"matriz 2"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<" "<<matriz2[i][j]<<" ";
        }
        cout<<"\n";
    }
    int m3[f2][c2];
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            m3[i][j]=matriz[i][j]+matriz2[i][j];
        }
    }
    cout<<"matriz 3"<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<" "<<m3[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}