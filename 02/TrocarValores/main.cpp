#include <iostream>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int x, y;
    std::cin >> x;
    std::cin >> y;

    troca(&x, &y);
   
    std::cout << x << " " << y << std::endl;
    return 0;
}