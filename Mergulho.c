#include <stdio.h>
#define QTD_MERGULHADORES 10000
 
int main() {
    
    int qtdforam, qtdvoltaram;
    int qtdQueVoltaram[QTD_MERGULHADORES];
    int x;
    int QueVoltou;

    for (x = 0; x < QTD_MERGULHADORES; x++) {
        qtdQueVoltaram[x] = 0;
    }

    while (scanf("%d %d", &qtdforam, &qtdvoltaram) == 2) {
        if(qtdforam != qtdvoltaram) {
            for (x = 1; x <= qtdvoltaram; x++) {
                scanf("%d", &QueVoltou);
                qtdQueVoltaram[QueVoltou] = 1;
            }
            for (x = 1; x <= qtdforam; x++) {
                if (qtdQueVoltaram[x]==0) {
                    printf("%d ", x);
                }
                qtdQueVoltaram[x] = 0;
            }
        }
        else {
            for (x = 1; x <= qtdvoltaram; x++) { 
                scanf("%d", &QueVoltou); 
            }
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}