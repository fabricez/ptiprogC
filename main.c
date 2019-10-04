#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ageSpectateur = 0 ;

    printf("bonjour quel age avez vous ?\n");
    scanf("%d", &ageSpectateur);

    if (ageSpectateur<=10)
    {
        afficherAgeEtQualite("enfant",ageSpectateur);
    }
    else if (ageSpectateur>17)
    {
        afficherAgeEtQualite("adulte",ageSpectateur);
    }
    else
    {
        afficherAgeEtQualite("ado",ageSpectateur);
    }

    return 0;
}
/* function afficherAgeEtQualite definition */
void afficherAgeEtQualite( char qualite[50], int age)
{
    printf("Qualite : %s\nAge : %d\nAnnee de naissance : %d", qualite, age, 2019-age);
}
