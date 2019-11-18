#include <stdio.h>
#define MAX 24
 
int main(){
    int vlargada[MAX];
    int vchegada[MAX];
    int comp[MAX];
    int result, n, aux, i, j, k, l;
    
    while(scanf("%d",&n) != EOF){
		result = 0;
		for(aux = 0; aux < n; aux++){
			scanf("%d", &vlargada[aux]);
		}
		for(aux = 0; aux < n; aux++){
			scanf("%d", &vchegada[aux]);
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(vlargada[i] == vchegada[j]){
					comp[j] = i + 25;
				}
			}
		}
		for(k = 0; k < n; k++){
			for(l = k+1; l < n; l++){
				if(comp[k] > comp[l]){
					aux = comp[l];
					comp[l] = comp[k];
					comp[k] = aux;
					result++;
				}
			}
		}
		printf("%d\n",result);
                         
    }
    return 0;
}
