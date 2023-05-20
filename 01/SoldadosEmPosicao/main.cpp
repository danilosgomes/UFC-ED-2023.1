#include <iostream>
using namespace std;

int main(){
    int m[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
        }  
    }
    
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j >= 1; j--) {
            if(m[j][i] < m[j-1][i]) count++;
        }  
    }
    
    cout << count;   
}