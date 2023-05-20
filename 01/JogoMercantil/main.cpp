#include <iostream>
using namespace std;

int main(){
    int n = 0;
    float produtos[50], chutesPrimeiro[50];
    char chutesSegundo[50];
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> produtos[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> chutesPrimeiro[i];
    }
    
    for(int i = 0; i < n; i++){
        cin.clear();
        cin >> chutesSegundo[i];
    }
    
    int cPrimeiro = 0, cSegundo = 0;
    for(int i = 0; i < n; i++){
        if(produtos[i] == chutesPrimeiro[i]) cPrimeiro++;
        else if (produtos[i] > chutesPrimeiro[i] && chutesSegundo[i] == 'M') cSegundo++;
        else if (produtos[i] < chutesPrimeiro[i] && chutesSegundo[i] == 'm') cSegundo++;
        else cPrimeiro++;
    }
    
    if(cPrimeiro > cSegundo) cout << "primeiro";
    else if(cPrimeiro < cSegundo) cout << "segundo";
    else cout << "empate";
}