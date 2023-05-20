#include <iostream>
using namespace std;

bool ehOrdenado(int n, int v[]){
    bool ordenado = false;
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i+1]) return true;
    }
    
    return false;
}

int main(){
    int n = 0, v[50];
    
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    if(ehOrdenado(n, v)) cout << "precisa de ajuste";
    else cout << "ok";   
}