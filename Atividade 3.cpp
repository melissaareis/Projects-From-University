#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qntcartelas, i, j, k, l, menu, numero, cartelas[10], cont, auxiliar;
	
	printf("    ----------------------- \n");
	printf("    |  BINGO BENEFICENTE  | \n");
	printf("    ----------------------- \n");
	printf("   1) Gerar cartelas  2) Sair  \n");
	scanf("%d", &menu);
	fflush(stdin);
	system("cls");
	
	if (menu==1){
	
		srand (time(NULL) );
		printf("Quantas cartelas deseja gerar? \n");
		scanf("%d", &qntcartelas);
		fflush(stdin);
		system("cls");
		
		for(i=1; i<=qntcartelas; i++)
		{
			for(j= 0 ; j < 10 ; j++)
			{
	            numero = (rand() % 99);
	
	            for(k=0; k <= j; k++)
				{
	                if(numero == cartelas[k]){
	                    auxiliar = 1;
	                break;
	                } 
	
	        	}
		        if(auxiliar == 1)
				{
		            auxiliar = 0;
		            j = j - 1;
		
		        }else
				{
		            cartelas[j] = numero;
		        }
			}
				for(j = 0; j < 10; j++)
				{	
					for(numero = j + 1; numero < 10; numero++)
					{	
						if(cartelas[j]>cartelas[numero])
						{
							auxiliar = cartelas[j];
							cartelas[j] = cartelas[numero];
							cartelas[numero] = auxiliar;
						}	
					}
				}	
			
			printf("\n");
			printf("\t **CARTELA DA SORTE**");
			
			for(l = 0; l < 10; l++)
			{	
				printf("\n [%d]", cartelas[l]);
			}
			
			printf("\n\n");
			
		}
		    
	}
	
}
