#include<stdio.h>

int main(int argc,char *argv[])
{
    int i;
    if (argc>1)
    {
        printf("number of argument %d\n",argc);

        for(i=0;i<argc;i++)
        {
            printf("argument %d: %s\n",i,argv[i]);

        }
    }
    else
    {
        printf("no argument is found");
    }
    return 0;
}