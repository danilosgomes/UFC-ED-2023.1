#include <iostream>

void converte_tempo(int segundos, int *hor, int *min, int *seg){
    *hor = segundos/3600;
    segundos -= *hor*3600;
    *min = segundos/60;
    segundos -= *min*60;
    *seg = segundos;
}

int main(){
    int tempo, h, m, s;
    std::cin >> tempo;
   
    converte_tempo(tempo, &h, &m, &s);
   
    std::cout << h << ":" << m << ":" << s;
   
    return 0;
}