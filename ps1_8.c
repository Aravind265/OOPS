#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],t[5],i,pa=0,pb=0,pc=0;
    printf("Enter the production of employee A in 5 days of the week ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Enter the production of employee B in 5 days of the week ");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    printf("Enter the production of employee C in 5 days of the week ");
    for(i=0;i<5;i++)
        scanf("%d",&c[i]);
    for(i=0;i<5;i++)
    {
        pa=pa+a[i];
        pb=pb+b[i];
        pc=pc+c[i];
        t[i]=a[i]+b[i]+c[i];
    }
    printf("\nTotal production of employee A is %d",pa);
    printf("\nTotal production of employee B is %d",pb);
    printf("\nTotal production of employee C is %d",pc);
    printf("\nProduction on Monday is %d",t[0]);
    printf("\nProduction on Tuesday is %d",t[1]);
    printf("\nProduction on Wednesday is %d",t[2]);
    printf("\nProduction on Thursday is %d",t[3]);
    printf("\nProduction on Friday is %d",t[4]);
}
