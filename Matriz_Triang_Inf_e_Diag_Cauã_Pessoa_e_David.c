#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef int Mat_Tri_Inf[((N*N+N)/2)];
typedef int Mat_Diag[N]

void Entrada_Dados_Tri(Mat_Tri_Inf X){

	int i, j, k=0;
		for (i=1;i<=N;i++)
			for(j=1;j<=i;j++){
				printf("Entre com o valor da Matriz na posicao Mti[%d][%d] :\n",i,j);
	         	scanf("%d",&X[k]);
	         	k++;
	        }

}

void Entrada_Dados_Diag(Mat_Diag X){

	int i, j, k=0;
		for (i=1;i<=N;i++)
			for(j=1;j=i;j++){
				printf("Entre com o valor da Matriz na posicao Mti[%d][%d] :\n",i,j);
	         	scanf("%d",&X[k]);
	         	k++;
	        }

}
 
 int Map_Mat_tri_inf (int i, int j){

 	if (i>j)
 		return (-1); //valor não existe no vetor
    else 
    	return(((i*i-i)/2) +j -1);

}

int Map_Mat_Diag(int i, int j){

	if (i == j)
		return (i -1)
	else
		return(-1)

}

void Exibir_Matriz_Tri(Mat_Tri_Inf X){

	int i, j, k, nulo =0;
	printf(" MATRIZ TRIANGULAR INFERIOR \n");
	printf("=========================== \n \n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			k = Map_Mat_tri_inf(i,j);
			if (k!=-1)
				printf("%5d",X[k]);
			else
				printf("%5d",nulo);
	    }
	    printf ("\n");
	}

 }

 void Exibir_Matriz_Diag(Mat_Diag X){

	int i, j, k, nulo =0;
	printf(" MATRIZ DIAGONAL \n");
	printf("=========================== \n \n");
	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			k = Map_Mat_Diag(i,j);
			if (k!=-1)
				printf("%5d",X[k]);
			else
				printf("%5d",nulo);
	    }
	    printf ("\n");
	}

 }
 
 void Consultar_Elemento_Tri (Mat_Tri_Inf X){

 	int i, j, k;

	printf("Entre com a linha e coluna que deseja consultar na matriz:\n ");
	printf("Linha :");
	scanf("%d",&i);
	printf("\nColuna: ");
	scanf("%d",&j);
	if ((i>0)&&(i<N+1)) && ((j>0)&&(j<N+1)){
		k = Map_Mat_tri_inf(i,j);
		if (k==-1)
		   printf("O Valor procurado é 0");
		else 
			printf("O Valor procurado é %5d",X[k]);
		}
	else printf(" Os valores da linha ou coluna estão fora da Matriz de dimensão %d x %d\n",N,N);

}

void Consultar_Elemento_Diag (Mat_Diag X){

 	int i, j, k;

	printf("Entre com a linha e coluna que deseja consultar na matriz:\n ");
	printf("Linha :");
	scanf("%d",&i);
	printf("\nColuna: ");
	scanf("%d",&j);
	if ((i>0)&&(i<N+1)) && ((j>0)&&(j<N+1)){
		k = Map_Mat_Diag(i,j);
		if (k==-1)
		   printf("O Valor procurado é 0");
		else 
			printf("O Valor procurado é %5d",X[k]);
		}
	else printf(" Os valores da linha ou coluna estão fora da Matriz de dimensão %d x %d\n",N,N);

}

	 
int main (){
	int op, oper;
	Mat_Tri_Inf A;
	Mat_Diag B;

	printf("Qual tipo de Matriz deseja consultar?\n1- Triangular Inferior\n2- Diagonal\n");
	scanf("%d",&op);

	switch(op){
		case 1:
			Entrada_Dados_Tri(A);
			do{
				System("cls");
				printf("Que operacao deseja realizar com a Matriz Triangular Inferior?\n1- Consultar um Elemento\n2- Exibir a Matriz\n0- Sair do Programa\n");
				scanf("%d",&oper);

				switch (oper){
					case 1:
						Consultar_Elemento_Tri(A);
						continue;
					case 2:
						Exibir_Matriz_Tri(A);
						continue;
					case 0:

					default:
						printf("Error");
						continue;
				} 

			}while(oper !=0)
			break;

		case 2:
			Entrada_Dados_Diag(B);
			do{
				System("cls");
				printf("Que operacao deseja realizar com a Matriz Diagonal?\n1- Consultar um Elemento\n2- Exibir a Matriz\n0- Sair do Programa\n");
				scanf("%d",&oper);

				switch (oper){
					case 1:
						Consultar_Elemento_Diag(B);
						continue;
					case 2:
						Exibir_Matriz_Diag(B);
						continue;
					case 0:

					default:
						printf("Error");
						continue;
				}
			}while(oper != 0)
			break;

		default:
			printf("Error. Fechando programa.");
			break;
		
	}
}
	 
