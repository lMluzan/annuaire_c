#ifndef RECHERMODIF_H_INCLUDED
#define RECHERMODIF_H_INCLUDED
#include<string.h>

void rechmodif(){
   char nom[30];
char numero[10],NOM[30];
  char numre[10],NUMERO[10];
   char mail[30],MAIL[30];
   int i,y,z,a,compte,option=0;
   long lg;
FILE *tel,*nouv;

nouv=fopen("receuil.txt","w+");
 fclose(nouv);

tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","r+");
const saut;


i=0;
while(fscanf(tel,"%s%s%s",nom,numero,mail)!=EOF){
        y=y+1;

    strcpy(NUMERO,numero);strcpy(NOM,nom); strcpy(MAIL,mail);

    if(strcmp(nom,rechm)!=0){
        fprintf(nouv,"\n\t%s\n",nom);
        fprintf(nouv,"\n\t%s\n",numero);
        fprintf(nouv,"\n\t%s\n",mail);
        }

    else if(strcmp(nom,rechm)==0){ i=1;
            printf("\n\n\t\t    __________________________________  ");
              printf("\n\t\t    °                                °");
              printf("\n\t\t    °        nouveau parametre       ° " );
              printf("\n\t\t    °________________________________° \t\t ");
              z=y;
    printf("\n\n\t\t    NOM: ");
    scanf("%s",nom);

    printf("\n\t\t    Tel: ");
    scanf("%s",numero);

    printf("\n\t\t    EMAIL: ");
    scanf("%s",&mail);


        fprintf(nouv,"\n\t%s\n",nom);
        fprintf(nouv,"\n\t%s\n",numero);
        fprintf(nouv,"\n\t%s\n",mail);
        }
        }
 fclose(tel);
 fclose(nouv);

 if( i==1){

tel=fopen("annuaire.txt","w+");
fclose(tel);

tel=fopen("annuaire.txt","a+");
nouv=fopen("receuil.txt","r+");

while(fscanf(nouv,"%s%s%s",nom,numero,mail)!=EOF){

    fprintf(tel,"\n\n\t%s",nom);
        fprintf(tel,"\n\t%s",numero);
        fprintf(tel ,"\n\t%s",mail);
}
fclose(tel);
 fclose(nouv);
nouv=fopen("receuil.txt","w+");
 fclose(nouv);
printf("\n\t\t    modification reussi!!! \n ");
printf("\n\t\t     °________________________________° \t\t ");

}
else if(i!=1){
    printf("\n\n\t\t    CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("         °________________________________________°\t");
}

}
#endif // RECHERMODIF_H_INCLUDED
