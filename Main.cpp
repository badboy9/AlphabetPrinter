#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>
#include"Selector.h"
int i,j,n;
int main()
{
	
	char string[40];
	char string2[40];
	printf("Enter The String: ");
	
	scanf("%[^\n]s",string);
	fflush(stdin);
	printf("Enter The String2: ");
	scanf("%[^\n]s",string2);
	while(1)
	{
		printf("\nFont Size: ");
		scanf("%d",&n);
		if(n>=5&&n%2==1)
			break;
		system("cls");
		
	}
	getch();
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	int k;
	for(i=0;i<n;i++)
	{
		printf("\t");
		k=0;
		while(1)
		{
			if(string[k]=='\0')
			{
				break;
			}
			if(string[k]==32)
			{
				printf("     ");
			}
			function(string[k],i,j,n);
			printf("  ");
			Sleep(100);
			k++;
		}
		Sleep(500);
	
		printf("\n");
	}
	n=5;
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		k=0;
		printf("");
		while(1)
		{
			if(string2[k]=='\0')
			{
				break;
			}
			if(string2[k]==32)
			{
				printf("     ");
			}
			function(string2[k],i,j,n);
			printf("  ");
			Sleep(100);
			k++;
		}
		Sleep(300);
	
		printf("\n");
	}
	Sleep(5000);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	

}





