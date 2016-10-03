#include<stdio.h>
void main()
{
    int c=0;
    int b=0;
    int d=0;
int i,j,k=0;
int a[4];
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
int row=2;
int column=2;
int matrix[row][column];
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        matrix[i][j]=a[k];
        k++;
}
}
for(i=0;i<row;i++)
{
    printf("salesperson %d\t",i+1);
    for(j=0;j<column;j++)
    {
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
}

    for(i=0,j=0;j<column;j++)
{
b=b+matrix[i][j];
}
printf("%d\n",b);

for(i=1,j=0;j<column;j++)
{
c=c+matrix[i][j];
}
printf("%d\n",c);

for(i=2,j=0;j<column;j++)
{
d=d+matrix[i][j];
}
printf("%d\n",d);
}















