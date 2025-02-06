#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    printf("Entrez un nombre réel non nul a: \n");
    scanf("%d",&a);
    printf("Entrez un nombre réel non nul b: \n");
    scanf("%d",&b);
    if(a==0 || b==0)
    {
        printf("Ce produit est nul\n");
    }
    else
    {
        if((a<0 && b<0) || (a>0 && b>0))
        {
            printf("Le produit %d x %d est positif\n",a,b);
        }
        else
        {
            printf("Le produit %d x %d est négatif\n",a,b);
        }
    }
}
