#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
    //writeFile();
    //readFile();
    //copy();
    direct();
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

    if((fptr = fopen("C:\\Users\\rustam\\Desktop\\rustam.txt","r")) == NULL)
    {
        printf("err");
            exit(1);
    }

    fscanf(fptr,"%d",&num);
    printf("value of n=%d",num);
    fclose(fptr);

    return 0;
}

int direct(void){
    DIR *d;
    struct dirent *dir;
    d = opendir("../");
    if(d){
        while((dir = readdir(d)) != NULL){
            printf("%s\n",dir->d_name);
        }
        closedir(d);
    }
    return 0;
}

void copy()
{
    FILE *fptr;
    char filename[150000];
    char ch;

    printf("enter file name to open \n");
    scanf("%s",filename);

    fptr = fopen(filename,"r");
    if(fptr == NULL){
        printf("cannot open file \n");
        exit(0);
    }

    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
