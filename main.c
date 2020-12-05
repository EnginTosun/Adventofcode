#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplam = 0;
    int i;
     FILE *file;
     file = fopen("starss.txt" ,"r");
     int mass[100];

    for (i = 0; i <100; i++)
    {
        fscanf(file,"%d",&mass[i]);
        printf("\n %d Mass: %d Fuel: %d",(i+1),mass[i],((int)mass[i]/3)-2);
        toplam += ((int)mass[i]/3)-2;
    }
    printf("\n toplam : %d",toplam);

    fclose(file);
    return 0;
}
