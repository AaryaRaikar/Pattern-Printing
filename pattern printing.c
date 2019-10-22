#include <stdio.h>
#include <stdlib.h>

void top_left();
void top_right();
void bottom_left();
void bottom_right();
int i,j,rows;

int main() 
{
	int num;
	printf("Enter a number to print respective patterns:\n1.Right angled triangle pyramid(Top Left)\n2.Right angled Triangle pyramid(Top Right)\n3.Right angled triangle pyramid (Bottom Left)\n4.Right angled Triangle pyramid(Bottom Right)");
	printf("\nEnter your choice:\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			top_left();
			break;
		case 2:
			top_right();
			break;
		case 3:
			bottom_left();
			break;
		case 4:
			bottom_right();
			break;
	    default:
				printf("\nEnter valid choice:\n");
	}
	return 0;
}

void bottom_left()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


void top_left()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
void bottom_right()
{
	
	int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        for(j=rows; j>i; j--)
        {
            printf(" ");
        }
       
        for(j=1;j<=i;j++)
        {
        	printf("*");
		}
		 printf("\n");


    }
	return 0;
}

void top_right()
{
	int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf(" ");
        }
        for(j=rows;j>i;j--)
        {
        	printf("*");
		}
        printf("\n");
    }
    return 0;
}
