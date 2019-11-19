#include<stdio.h>
#define MAX 10
void maior(int A[][MAX], int n, int *k, int *Lin, int *Col);
int main(){
    int A[MAX][MAX];
    int n;
    int k, Lin, Col=0;

    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &A[i][j]);
        }
    }

    maior(A, n, &k, &Lin, &Col);

    printf("k=%d\n", k);
    printf("Lin=%d\n", Lin);
    printf("Col=%d\n", Col);
}

void maior(int A[][MAX], int n, int *k, int *Lin, int *Col){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]>*k){
                *k=A[i][j];
                *Lin=i;
                *Col=j;
            }

        }
    }

}
