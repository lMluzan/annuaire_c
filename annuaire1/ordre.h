#ifndef ORDRE_H_INCLUDED
#define ORDRE_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void ordonner(){
 char nom[30];
char numero[10],NOM[30];
  char numre[10],NUMERO[10];
   char mail[30],MAIL[30];
   long i=0;
   int y;
FILE *tel,*nouv;
tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","r+");
while(fscanf(tel,"%s%s%s",NOM,NUMERO,MAIL)!=EOF){

    break;
}
fclose(tel);
tel=fopen("annuaire.txt","r+");
while(fscanf(tel,"%s%s%s",nom,numero,mail)!=EOF){

        if(0==strcmp(NOM,nom)){
                y=1;
        fprintf(nouv,"\n\n\t%s",nom);
        fprintf(nouv,"\n\t%s",numero);
        fprintf(nouv ,"\n\t%s",mail);
        continue;
    }
    if(0<strcmp(NOM,nom)){
        fprintf(nouv,"\n\n\t%s",nom);
        fprintf(nouv,"\n\t%s",numero);
        fprintf(nouv ,"\n\t%s",mail);
        continue;
        }
    if(0<strcmp(NOM,nom)){
            y=0;
        fprintf(nouv,"\n\n\t%s",NOM);
        fprintf(nouv,"\n\t%s",NUMERO);
        fprintf(nouv ,"\n\t%s",MAIL);
        fscanf(tel,"%s%s%s",NOM,NUMERO,MAIL);
        continue;
    }

}
fclose(tel);
fclose(nouv);
tel=fopen("annuaire.txt","w+");
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
}
#endif // ORDRE_H_INCLUDED
