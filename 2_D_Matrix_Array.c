// Write a program to make multiplication of 2-D Matrix

#include<stdio.h>
main()
{
	int a[2][2],b[2][2],mul[2][2],r,c,k;
		printf("\t\t\t\t\t Matrix Multiplication");
		printf("\n\n-----------Matrix:1----------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter element : ",r,c);
			scanf("%d",&a[r][c]);
		}
	
	}
	printf("\n\n");
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("   %d",a[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n----------Matrix:2----------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter element : ",r,c);
			scanf("%d",&b[r][c]);
		}
	
	}
	
		printf("\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("   %d",b[r][c]);
		}
		printf("\n");
	}
	
	
	for(r=0;r<2;r++)
	{
			for(c=0;c<2;c++)
			{
				mul[r][c]=0;
				for(k=0;k<2;k++)
				{
					mul[r][c]=mul[r][c]+(a[r][k]*b[k][c]);
				
				}	
			}
			printf("\n");
	}
	
	printf("\n\n-------------Result : Multiplication Matrix------------------\n\n");
	
	for(r=0;r<2;r++)
	{
			for(c=0;c<2;c++)
			{
				printf("   %d",mul[r][c]);
			}
			printf("\n");
	}
	
}

