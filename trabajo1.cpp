#include <iostream>
using namespace std;

int main(){
    int f;
    int c;
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

    }