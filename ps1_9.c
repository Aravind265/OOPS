#include<stdio.h>
void main()
{
    char s[100];
    int a,i;
    printf("Enter a sentence to be encoded ");
    scanf("%[^\n]%*c",s);
    printf("\nEnter a positive number ");
    scanf("%d",&a);
    printf("\nThe sentence after encoding \n");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]+a);
    }
    printf("\n");
    printf("The string after decoding %s",s);
}
