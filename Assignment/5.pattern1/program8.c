//8.
// Enter the no. of rows
// 4
//  1  3  5  7 
//  9  11  13  15
//  17  19  21  23
//  25  27  29  31

#include<stdio.h>
void main()
{
    int row;
    printf("Enter the no. of rows\n");
    scanf("%d",&row);
    int x=1;
    for(int i=1;i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            printf(" %d ",x);
            x++;
            x++;   
        }
        printf("\n");
    }
}