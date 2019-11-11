#include <stdio.h>
void Troca(int *a, int *b);
void MultSoma(int valor1, int valor2, int *s, int *m);
int main(){
    int valor1, valor2;
    int s, m;
    scanf("%d %d", &valor1, &valor2);
    Troca(&valor1, &valor2);
    MultSoma(valor1, valor2, &s, &m);
    printf("%d %d\n", valor1, valor2);
    printf("%d %d", s, m);
return 0;}

void Troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void MultSoma(int valor1, int valor2, int *soma, int *mult){
    *soma = valor1 + valor2;
    *mult = valor1 * valor2;
}

