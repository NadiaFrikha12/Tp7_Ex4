//�crire :
//Une fonction int * chargement(int *) permettant de saisir un entier 5<=n<=20, de d�clarer
//un tableau dynamique pouvant contenir n entiers et de le charger par des entiers,
//Une proc�dure void affichage (int, int *) permettant d�afficher les �l�ments de t,
//Le programme principal d�clarant n et *t et appelant les deux proc�dures chargement et
//affichage.

#include<stdio.h>
#include<stdlib.h>

int * chargement(int *n){
	int *t, *p;
	do{
		printf("donner n=");
		scanf("%d",n);
	}while((*n<5)||(*n>20));
	
	t=(int*)malloc((*n)*sizeof(int));
	if (t==NULL){
		printf ("erreur");
		return 0;
	}
	else {
		for (p=t; p<t+*n; p++){
			printf("donner t[%d]",p-t);
			scanf("%d",p);
		}
	}
	return t;
}

void affichage (int n, int *t){  //lorqu'on fait le parcourt d'un tableau dynamique on met int*
	int *p; //pointeur pour parcourir le tableau
	for(p=t; p<t+n; p++){
		printf("t[%d]=%d\t",p-t,*p);
	}     
}


int main(){
	int n, *t;
	t=chargement(&n);
	if (t!=NULL){
		affichage(n,t);
		free(t);
	}
	return 0; 
}


