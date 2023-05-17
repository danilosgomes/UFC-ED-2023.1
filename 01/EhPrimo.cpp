#include <iostream> 
using namespace std;

bool primo(int n){
    for(int i = 2; i <= n-1; i++){
        if(n%i == 0) return false;
    }
    
    return true;
}

int main(){
    int A = 0, B = 0;
    
    cin >> A >> B;
    
    for(int i = A; i <= B; i++){
        if(primo(i)) cout << i << endl;
    }
}