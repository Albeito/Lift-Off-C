#include<string.h>
#include<stdio.h>

int main()
{
    char s[80];
    int count=1, i;

    printf("Enter the string:\n");
    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '||s[i]=='\n'||s[i]=='\t')
        {
            count++;
        }
    }
    printf("\n Total Numbers of Words in sentence %s=%d",s,count);

    return 0;
}