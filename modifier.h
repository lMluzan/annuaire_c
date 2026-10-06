#ifndef MODIFIER_H_INCLUDED
#define MODIFIER_H_INCLUDED
#include <string.h>
void modif(){
   char nom[30];
char numero[10];
  char numre[10];
   char mail[30];
   int i;
FILE *tel,*nouv;

nouv=fopen("receuil.txt","w+");
 fclose(nouv);

tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","r+");
system("cls");
  printf("\n\n\t\t    __________________________________  ");
              printf("\n\t\t    °                                °");
              printf("\n\t\t    °       contact a modifier       ° " );
              printf("\n\t\t    °________________________________° \t\t ");
         printf("\n\n\t\t    TEL: ");
    scanf("%s",&numre);
i=0;
while(!feof(tel)){

        fscanf(tel,"%s%s%s",nom,numero,mail);
    if(strcmp(numero,numre)!=0){
        fprintf(nouv,"\n\t%s\n",nom);
        fprintf(nouv,"\n\t%s\n",numero);
        fprintf(nouv,"\n\t%s\n",mail);
        }

    else if(strcmp(numero,numre)==0){ i=1;
            printf("\n\n\t\t    __________________________________  ");
              printf("\n\t\t    °                                °");
              printf("\n\t\t    °        nouveau parametre       ° " );
              printf("\n\t\t    °________________________________° \t\t ");
         printf("\n\n\t\t    NOM: ");
    scanf("%s",&nom);
    fprintf(nouv,"\n\n\t%s",nom);
    printf("\n\t\t    Tel: ");
    scanf("%s",numero);
   fprintf(nouv,"\n\t%s",numero);
 printf("\n\t\t    EMAIL: ");
    scanf("%s",&mail);
  fprintf(nouv,"\n\t%s",mail);


     }


        }
 fclose(tel);
 fclose(nouv);

 if(i==1){

tel=fopen("annuaire.txt","w+");
fclose(tel);

tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","r+");

while(fscanf(nouv,"%s%s%s",nom,numero,mail)!=EOF){

     fscanf(nouv,"%s%s%s",nom,numero,mail);
    fprintf(tel,"\n\n\t%s",nom);
        fprintf(tel,"\n\t%s",numero);
        fprintf(tel ,"\n\t%s",mail);
}
fclose(tel);
 fclose(nouv);
nouv=fopen("receuil.txt","w+");
 fclose(nouv);
printf("\n\t\t    modification reussi!!! \n ");
printf("\n\t\t    °________________________________° \t\t ");

}
else{
    printf("\n\n\t\t    CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("         °________________________________________°\t");
}
}
#endif // MODIFIER_H_INCLUDED
