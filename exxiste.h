#ifndef EXXISTE_H_INCLUDED
#define EXXISTE_H_INCLUDED
#include <string.h>

int y;

int voir(){

char numre[10];
char noma[30];
char numeroa[10];
char maila[30];
system("cls");
FILE *tel;


 while(!(feof)){
fscanf(tel,"%s%s%s",noma,numeroa,maila);
 if(strcmp(numeroa,numre)==0){
y=y+1;

                 printf("\n\t       _________________________________________\n\t");
           printf("       °                                         \n\t");
           printf("       ° %s     \n\t",noma);
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",numeroa);
           printf("       °                                         \n\t");
           printf("       ° %s            \n\t",maila);
           printf("       °__________________________________________°\t");

return 0;
    }
    }


 if(y==1)
    {
            printf("\n\n\t\t    CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("         °________________________________________°\t");
           return 1;
    }

 fclose(tel);
    }

#endif // EXXISTE_H_INCLUDED
