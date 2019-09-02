#include <stdio.h>
#include <stdlib.h>

int main()
{
    //writeFile();
    //readFile();
    //memoryAlloc();
    pointer();
}

int pointer()
{
    int* pc,c;
    c = 5;
    pc = &c;
    printf("%d",*pc);

    return 0;
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

int memoryAlloc()
{
    int i, num;
    float *data;

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &num);

    data = (float*) calloc(num, sizeof(float));
    if(data == NULL)
    {
        printf("Error!!! memory not allocated.");
        exit(0);
    }
    printf("\n");

    for(i = 0; i < num; ++i)
    {
       printf("Enter Number %d: ", i + 1);
       scanf("%f", data + i);
    }

    for(i = 1; i < num; ++i)
    {
       if(*data < *(data + i))
           *data = *(data + i);
    }

    printf("Largest element = %.2f", *data);
    return 0;
}
