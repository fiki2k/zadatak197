/*  Program treba stringove sortirat u obrnutom abecedno redu.  */

#include<stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char str[10][50], temp[50];

    printf("Unesi 10 rijeci: \n");

    for(i=0; i<10; ++i)
        scanf("%s[^\n]",str[i]);


    for(i=0; i<9; ++i)
        for(j=i+1; j<10 ; ++j)
        {
            if(strcmp(str[i], str[j])<0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nU abecednom redoslijedu : \n");
    for(i=0; i<10; ++i)
    {
        puts(str[i]);
    }

    return 0;
}
