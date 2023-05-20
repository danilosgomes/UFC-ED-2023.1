#include <iostream>
using namespace std;

int main(){
    int m[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
        }  
    }
    
    int sumLineOne = m[0][0] + m[0][1] + m[0][2];
    int sumLineTwo = m[1][0] + m[1][1] + m[1][2];
    int sumLineThree = m[2][0] + m[2][1] + m[2][2];
    bool isLine = sumLineOne == sumLineTwo && sumLineOne == sumLineThree;

    int sumColOne = m[0][0] + m[1][0] + m[2][0];
    int sumColTwo = m[0][1] + m[1][1] + m[2][1];
    int sumColThree = m[0][2] + m[1][2] + m[2][2];
    bool isCol = sumColOne == sumColTwo && sumColOne == sumColThree;
    
    int sumDOne = m[0][0] + m[1][1] + m[2][2];
    int sumDTwo = m[2][0] + m[1][1] + m[0][2];
    bool isD = sumDOne == sumDTwo;
    
    if(isLine && isCol && isD) cout << "sim";
    else cout << "nao";
}