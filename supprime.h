#ifndef SUPPRIME_H_INCLUDED
#define SUPPRIME_H_INCLUDED
#include "entete.h"
#include <string.h>
#include "denicher.h"

void supprimer()
               {
    int i;
   char nom[30];
   char numero[10];
   char numre[10];
   char mail[30];
FILE *tel,*nouv;

nouv=fopen("receuil.txt","w+");
 fclose(nouv);

system("cls");

        tel=fopen("annuaire.txt","a+");
nouv=fopen("receuil.txt","a+");

  printf("\n\n\t\t    ____________________________________  ");
              printf("\n\t\t    °                                  °");
              printf("\n\t\t    °        contact a supprimer       ° " );
              printf("\n\t\t    °__________________________________° \t\t ");
         printf("\n\n\t\t    TEL: ");
    scanf("%s",&numre);
        i=0;
while(!feof(tel)){
        fscanf(tel,"%s%s%s",nom,numero,mail);
       if(strcmp(numero,numre)==0){
        i=1;
       }

    if(strcmp(numero,numre)!=0){
        fprintf(nouv,"\n\t%s\n",nom);
        fprintf(nouv,"\n\t%s\n",numero);
        fprintf(nouv,"\n\t%s\n",mail);
        }
        }
 fclose(tel);
 fclose(nouv);

               if(i==1){

tel=fopen("annuaire.txt","w+");
fclose(tel);

tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","r+");

while( fscanf(nouv,"%s%s%s",nom,numero,mail)!=EOF){

    fprintf(tel,"\n\n\t%s",nom);
        fprintf(tel,"\n\t%s",numero);
        fprintf(tel ,"\n\t%s",mail);
}
fclose(tel);
 fclose(nouv);
nouv=fopen("recuil.txt","w+");
 fclose(nouv);
printf("\n\t\t    suppressions reussi!!! \n\n");
 printf("   \t\t  °______________________________________°\t");

}
else
    {
        printf("\n\n\t\t    CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("         °________________________________________°\t");
    }

}



#endif // SUPPRIME_H_INCLUDED
