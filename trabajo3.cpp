#include<iostream>
using namespace std;

int main(){
    int f;
    int c;
    int suma=0;
    cout<<"dime las filas"<<endl;
    cin>>f;
    cout<<"dime las columnas"<<endl;
    cin>>c;
    int matriz[f][c];
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<"ingresa la matriz en la posicion "<<i<<" "<<j<<endl;
        cin>>matriz[i][j];
        }
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
        cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<f;i++){
        suma+=matriz[c-1][i];
        }    
    cout<<"suma es igual: "<<suma<<endl;
    return 0;
}