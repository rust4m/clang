#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int a[MAX];
int rand_seed = 10;
typedef int number;

int main()
{
    //writeFile();
    //readFile();
    arrSort();
}

int writeFile()
{
    char text[1000];
    FILE *fprt;

    fprt = fopen("C:\\Users\\rustam\\Desktop\\rustam.txt","w");

    if(fprt == NULL)
    {
        printf("err");
            exit(1);
    }

    printf("enter text: \n");
    //scanf("%d",&num);
    gets(text);

    fprintf(fprt,"%s",text);
    fclose(fprt);

    return 0;
}

int readFile()
{
    int num;
    FILE *fptr;

    if((fptr = fopen("C:\\Users\\rustam\\Desktop\\index.txt","r")) == NULL)
    {
        printf("err");
            exit(1);
    }

    fscanf(fptr,"%d",&num);
    printf("value of n=%d",num);
    fclose(fptr);

    return 0;
}

int rand()
{
    rand_seed = rand_seed * 1103515245  + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int arrSort()
{
    number i,t,x,y;

    for(i=0;i<MAX;i++)
    {
        a[i]=rand();
        printf("%d\n",a[i]);
    }

    for (x=0; x < MAX-1; x++)
        for (y=0; y < MAX-x-1; y++)
            if (a[y] > a[y+1])
            {
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }

    printf("--------------------\n");
    for (i=0; i < MAX; i++)
        printf("%d\n",a[i]);

    return 0;
}
