#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int v111=0, v222=0, v333=0, v444=0, contINV=0,  p11=0, p22=0, v44=0, contINVA=0, cTOTAL=0, cont, menu, menu1;

	while (menu==1||menu==2)
	{
	
		printf ("      Opções de ação     \n");
		printf (" 1  | Votar              \n");
		printf (" 2  | Apuração dos votos \n");
		printf (" 3  | Sair               \n");
		printf ("Digite uma opção:  \n");
		scanf("%d", &menu);
		system("cls");
		fflush(stdin);
		
		
		switch(menu)
		{
			case 1:
				printf ("        Vereador                  \n");
				printf (" 111 | Vereador João do Frete     \n");
				printf (" 222 | Vereadora Maria da Pamonha \n");
				printf (" 333 | Vereador Zé da Farmácia    \n");
				printf (" 444 | Voto Nulo                  \n");
				printf ("Digite uma opção:  \n");
				fflush(stdin);
				scanf ("%d", &menu1);
				system("CLS");
				if(menu1==111){
					v111=v111+1;
				}else{
					if(menu1==222){
						v222=v222+1;}
					else{
						if(menu1==333){
							v333=v333+1;}
						else{
							if (menu1==444){
								v444=v444+1;}
							else{
								contINV=contINV+1;
							}
						}
					}
				}
				for (cont=0; cont<10; cont++){
					printf ("Aguarde...");
					system("cls");
				}
				for (cont=0; cont<10; cont++){
					printf ("Voto computado!");
					system("cls");
				}
				system ("cls");
				printf ("       Prefeito              \n");
				printf (" 11  | Prefeito Dr. Zureta   \n");
				printf (" 22  | Prefeito Senhor Gomes \n");
				printf (" 44  | Voto Nulo             \n");
				printf ("Digite uma opção:  \n");
				fflush(stdin);
				scanf ("%d", &menu1);
				system("cls");
				switch (menu1)
				{
					case 11:
						p11=p11+1;
						break;
					case 22:
						p22=p22+1;
						break;
					case 44:
						v44=v44+1;
						break;
					default:
						contINVA=contINVA+1;
						break;
				}
				for (cont=0; cont<10; cont++){
					printf("Aguarde...  \n");
					system("cls");
				}
				for (cont=0; cont<10; cont++){
					printf ("Voto computado!  \n");
					system("cls");
				}
				break;
				system("cls");
			case 2:
				printf ("Apuração de votos \n");
				printf ("         Vereador                  | QNTD VOTOS  \n");
				printf (" 111  |  Vereador João do Frete    |     %d      \n", v111);
				printf (" 222  |  Vereadora Maria da Pamonha|     %d      \n", v222);
				printf (" 333  |  Vereador Zé da Farmácia   |     %d      \n", v333);
				printf (" 444  |  Votos nulos               |     %d      \n", v444);
				printf ("      |  Votos inválidos           |     %d      \n", contINV);
				cTOTAL=v111+v222+v333+v444;
				printf ("         Total de votos válidos    |     %d      \n", cTOTAL);
				cTOTAL=v111+v222+v333+v444+contINV;
				printf ("      |  Total de votos            |     %d      \n", cTOTAL);
				printf ("\n");
				printf ("\n");
				printf ("         Prefeito                  | QNTD VOTOS  \n");
				printf (" 11   |  Prefeito Dr. Zureta       |     %d      \n", p11);
				printf (" 22   |  Prefeito Senhor Gomes     |     %d      \n", p22);
				printf (" 44   |  Votos nulos               |     %d      \n", v44);
				printf ("      |  Votos inválidos           |     %d      \n", contINVA);
				cTOTAL=p11+p22+v44;
				printf ("      |  Total de votos válidos    |     %d      \n", cTOTAL);
				cTOTAL=p11+p22+v44+contINVA;
				printf ("      |  Total de votos            |     %d      \n", cTOTAL);
				system("pause");
				system("cls");
				break;

		}
	}
}
