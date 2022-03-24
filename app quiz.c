#include <stdio.h>
int main ()
{
	int repo=0,scor=0,tenta=0;
	
	printf("Bonjour petit genie tu es pret ?\n");
	printf("choisi entre 3 un mammifere\n defi sur 3 point\n1:autruche\n2:chouve souris\n3:crocodile\n");
	printf("attention : chaque repense faux ton resultat diminue\n");
	scanf("%d",&repo);
		while(repo != 2)
		{ tenta++;
				if(tenta==3)
			{
				printf("tu es perdu!!\n");
				break;
			}	
		printf("reponse incorrecte reessayez une autre foi\n");
		scanf("%d",&repo);
		}
	switch(repo)
	{
		case 1:
		printf("faux : tu as choisi l'autruche mais ces ovipares\n");
		if(scor > 0) scor-=1;
		break;
		case 2:
		printf("vari : bravo chouve souris est mammifere\n");
		printf(" voila ton score ces excellent\n");
		scor+=3;
		break;
		case 3:
		printf("faux : tu as choisi le crocodile mais ces ovipares\n");
		if(scor > 0) scor-=1;
		break;
		default:
		printf("choisi entre 3 SVP\n");		
	}	
	printf("votre score est :%d\n\n",scor);
	
	printf("choisi entre 3 un herbivore \n defi sur 3 point\n1:lapin\n2:ours\n3:faucon\n");
	scanf("%d",&repo);
			while(repo != 1)
		{
			 tenta++;
				if(tenta==6)
			{
				printf("tu es perdu!!\n");
				break;
			}	
		printf("reponse incorrecte reessayez une autre foi\n");
		scanf("%d",&repo);
		}
	switch(repo)
	{
		case 1:
		printf("vrai : tu as choisi le lapin ces herbivore\n");
		printf(" voila ton score ces excellent\n");
		scor+=3;
		break;
		case 2:
		printf("faux : l'ours c'est carnivore\n");
		if(scor > 0) scor-=1;
		break;
		case 3:
		printf("faux : tu as choisi le faucon mais ces carnivor\n");
		if(scor > 0) scor-=1;
		break;
		default:
		printf("choisi entre 3 SVP\n");
	}		
	printf("votre score est :%d\n\n",scor);
		
	printf("choisi entre 3 un amphibiens \n defi sur 3 point\n1:singe\n2:escargot\n3:grenouille\n");
	scanf("%d",&repo);
			while(repo != 3)
		{
			 tenta++;
				if(tenta==9)
			{
				printf("tu es perdu!!\n");
				break;
			}	
		printf("reponse incorrecte reessayez une autre foi\n");
		scanf("%d",&repo);
		}
	switch(repo)
	{
		case 1:
		printf("faux : tu as choisi le singe c'est pas un amphibiens \n");
		if(scor > 0) scor-=1;
		break;
		case 2:
		printf("faux : tu as l'escargot c'est pas un amphibiens \n");
		if(scor > 0) scor-=1;
		break;
		case 3:
		printf("vraix : tu as choisi la grenouille c'est un amphibiens \n");
		printf("tu as gagner voila ton score ces excellent\n");
		scor+=3;
		break;
		default:
		printf("choisi entre 3 SVP\n");
	}	
	
	printf("votre score est :%d\n\n",scor);
	
	return 0;
}//pull
