#include<iostream>

using namespace std;

void hanoi(int discos, char A, char B, char C){
  if(discos >= 2){
    hanoi(discos-1, A, C , B);
    cout << A << " -> " << C << endl;
    hanoi(discos-1, B, A, C);
  }else{
    cout << A << " -> " << C << endl;
  }
}
int main(){
  int discos;
  cin >> discos;

  hanoi(discos, 'A', 'B', 'C');
}
