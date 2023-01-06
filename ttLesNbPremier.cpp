#include <iostream>
#include <math.h>
 
 int NombreFacteur(int N) {
     int Count=2,I;
     double Racine=sqrt(N);
     for(I=2; I<=Racine;I++) if(N % I == 0) Count++;
     return Count;
}
 
int Premier(int N) {
    return (NombreFacteur(N)==2);
}
 
int NombrePremierPlusPetit(int N) {
     int Count=0,I;
     for(I=2; I<N; I++) if(Premier(I)) Count++;
     return Count;
}
 
int main() {
    std::cout << "Liste des nombres premier avant 1000: " << std::endl;
    for(int I=2; I<1000; I++) if(Premier(I)) std::cout << I << " ";
    std::cout << std::endl << "Nombre de nombre premier avant 1000: " <<
            NombrePremierPlusPetit(1000);
    return 0;
}
