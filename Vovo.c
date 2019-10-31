#include <stdio.h>
#include <string.h>
#define MAX 55
int main()
{
    int T, L, C, P;
    int x, i, y, z, w;
    int Y, palavraencontrada, result;
    char matrix[MAX][MAX];
    char palavrasbuscadas[MAX];
    
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &L, &C);
        for(x = 0; x < L; x++)
        {
            for(y = 0; y < C; y++)
            {
                scanf(" %c", &matrix[x][y]);
            }

        }
        scanf("%d", &P);
        for(w = 0; w < P; w++)
        {
            scanf(" %s", palavrasbuscadas);
            result = 0;
            for(x = 0; x < L; x++)
            {
                for(y = 0; y <= C - strlen(palavrasbuscadas); y++)
                {
                    palavraencontrada = 1;
                    for(z = 0; z < strlen(palavrasbuscadas); z++)
                    {
                        if(palavrasbuscadas[z] != matrix[x][y + z])
                        {
                            palavraencontrada = 0;
                            break;
                        }
                    }
                    if (palavraencontrada == 1)
                    {
                        result++;
                    }
                }
            }
            if(strlen(palavrasbuscadas) == 1)
            {
                printf("%d\n", result);
                continue;
            }
            for(z = 0; z < C; z++)
            {
                for(x = 0; x <= L - strlen(palavrasbuscadas); x++)
                {
                    palavraencontrada = 1;
                    for(y = 0; y < strlen(palavrasbuscadas); y++)
                    {
                        if(palavrasbuscadas[y] != matrix[x+ y][z])
                        {
                            palavraencontrada = 0;
                            break;
                        }
                    }
                    if (palavraencontrada)
                    {
                        result++;
                    }
                }
            }
            printf("%d\n", result);
        }
    }
    return 0;
}