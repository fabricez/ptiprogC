#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;
    do
    {
        askForAge();
        printf("\nPress Y to continue. Press any Key To Exit");
        scanf(" %c",&answer); // dont forget type &
    }
    while(answer == 'y' || answer == 'Y');

    return 0;
}

/* function askForAge definition */
void askForAge()
{
    int ageSpectateur = 0;
    printf("bonjour quel age avez vous ?\n");
    scanf("%d", &ageSpectateur);
    printf("Annee de naissance : %d\n", 2019-ageSpectateur);

    int i = 0;
    while (i <= ageSpectateur && i <= 110)
    {
        testerAge(i,ageSpectateur);
        i++;//i = i +1
    }

    return 0;
}
/* function testerAge definition */
void testerAge( int increment, int age)
{
    if (increment<=10)
    {
        afficherAgeEtQualite("enfant", increment, age);
    }
    else if (increment>17)
    {
        afficherAgeEtQualite("adulte", increment, age);
    }
    else
    {
        afficherAgeEtQualite("ado", increment, age);
    }
}
/* function afficherAgeEtQualite definition */
void afficherAgeEtQualite( char qualite[50], int increment, int age)
{
    printf("Année: %d Age : %d (%s)\n", 2019 - age + increment, increment, qualite);
}
