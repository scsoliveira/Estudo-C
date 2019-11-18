#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1050

int main(){
    char frase[MAX];
    int z, tam, t, espacos, i;
    fgets(frase, MAX, stdin);
    while(strcmp(frase,"*\n")!=0){
        espacos = 0;
        for (i = 0; i < strlen(frase); i++){
            if (frase[i] == ' '){
                espacos++;
            }
        }
        t = 0;
        for (i = 0; i < strlen(frase); i++){
            if (frase[i] == ' ' && (tolower(frase[0])==tolower(frase[i+1]))){
                t++;
            }
        }
        if (t == espacos){
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
        fgets(frase, MAX, stdin);
    }
    return 0;
}
