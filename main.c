#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int i,min,max;
    int emir[N];
    printf("%d kadar deger giriniz.\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",emir+i);
    }

    max=min=*emir; //emir[0] demek;
    for(i=1;i<N;i++)
    {
        if(*(emir+i)>max)
        {
            max=*(emir+i);
        }
        if(*(emir+i)<min)
        {
            min=*(emir+i);
        }
    }
    printf("Dizimizin max degeri: %d\n",max);
    printf("Dizimizin min degeri: %d\n",min);

}
