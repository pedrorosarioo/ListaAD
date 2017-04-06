#include <stdio.h>
#include <stdlib.h>


// QUESTAO 1 --------------------------------------------------#

int main(){
int *v, i;
v=(int*)malloc(10*sizeof(int));
for(i=0; i<10; i++){
    v[i]=i+1;
}
for(i=0;i<10;i++)
printf("%d ", v[i]);
return 0;
}

// QUESTÃO 2 --------------------------------------------------#

int main(){
char **v;
v=(char**)malloc(4*sizeof(char*));
v[0]= "JONAS";
v[1]= "MARICELIA";
v[2]= "FELIPE";
v[3]= "GABRIEL";
printf("%s\n%s\n%s\n%s\n", v[0], v[1], v[2], v[3]);
return 0;

}
// QUESTÃO 3 --------------------------------------------------#

int main(){
int i, n, *v;
scanf("%d", &n);
v=(int*)malloc(n*sizeof(int));
    for (i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    printf("\n\n%d\n", n);
    for (i=0; i<n; i++){
        printf("%d ", v[i]);
    }
return 0;
}

// QUESTÃO 4 --------------------------------------------------#

int** AlocaMatriz(int L, int C){
int **v, i, j;
v=(int**)malloc(L*sizeof(int*));
for(i=0; i<L; i++){
    v[i]=(int*)malloc(C*sizeof(int));
    for(j=0; j<C; j++){
        v[i][j]=i;
    }
}
return v;
}

int main(){
int **x, i, j, Linha, Coluna;
Linha=5;
Coluna= 3;
x=AlocaMatriz(Linha, Coluna);
    for (i=0; i<Linha; i++){
        for(j=0; j<Coluna; j++){
            printf("%d ", x[i][j]);
            if (j==Coluna-1){
                printf("\n");
            }
        }
    }
return 0;
}


// QUESTÃO 5 --------------------------------------------------#


int main(){
int *v,i,n, entrada, TAM=10,k=1;
v=(int*)malloc(k*TAM*sizeof(int));
for(i=0; i<=k*TAM; i++){
    if(i==k*TAM){
        k++;
        v=(int*)realloc(v, k*TAM*sizeof(int));
        printf("Realoquei\n");
    }
    scanf("%d", &entrada);
    if (entrada==0){
        n=i;
        i=k*TAM;
    }else{
        v[i]=entrada;
    }
}
for (i=0; i<n; i++){
    printf("%d ", v[i]);
}
return 0;
}

