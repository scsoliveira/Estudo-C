#include <stdio.h>
#define MAX 100
int main(){

    char matriz[MAX][MAX];
    char matrizTEMP[MAX][MAX];
    int L, C, T;
    int vivo = 0;
    char testeA;
    scanf("%d %d", &L, &C);

    for(int x = 0; x < L; x ++){
        scanf("%s", &matriz[x]);
    }
    
    for(int x = 0; x<L; x++){
        for(int y =0; y<C; y++){
            matrizTEMP[x][y] = matriz[x][y];
        }
    }

    scanf("%d", &T);
    for(int n = 0; n < T; n++){

        for(int x=0; x<L; x++){
            for(int y=0; y<C ; y++){

                //-1 = x-1, 0 = x, 1 = x+1 
                for(int x1 = -1; x1 < 2; x1++){
                    //-1 = y-1, 0 = y, 1 = y+1
                    for(int y1 = -1; y1<2; y1++){
                        int auxx = x+x1;
                        int auxy = y+y1;
                        if( (x == auxx) && (y == auxy) ){
                            continue;
                        }
                        else{
                            if(matriz[auxx][auxy] == '1'){
                                vivo ++;
                            }
                        }
                    }
                }

                testeA = matriz[x][y];
                if(testeA == '0'){
                    if(vivo == 3){
                        matrizTEMP[x][y] = '1'; 
                    }
                }
                else{
                    if(vivo > 3 || vivo < 2){
                        matrizTEMP[x][y] = '0';
                    }
                }
                vivo = 0;       
            }  
        }

        for(int x = 0; x < L; x ++){
            for(int y = 0; y < C; y ++){
                matriz[x][y] = matrizTEMP[x][y];
            }
        }

    }
    
    for(int x = 0; x < L; x ++){
        printf("%s\n", matriz[x]);
    }

    return 0;
}

