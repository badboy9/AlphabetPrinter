#include<stdio.h>

void num_0(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||j==0||j==n-1||i+j==n-1)
			printf("*");
		else
			printf(" ");
	}
}
void num_1(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==n-1||j==n/2||i+j==n-1-((n-1)/2))
			printf("*");
		else
			printf(" ");
	}
}
void num_2(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||i==n/2||j==0&&i>=n/2||j==n-1&&i<=n/2)
			printf("*");
		else
			printf(" ");
	}
}
void num_3(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||j==n-1||i==n/2&&j>=n/2)
			printf("*");
		else
			printf(" ");
	}
}
void num_4(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==n/2||j==n-1||j==0&&i<=n/2)
			printf("*");
		else
			printf(" ");
	}
}
void num_5(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1&&j!=n-1||i==n/2&&j!=n-1||j==0&&i<=n/2||i!=n/2&&i!=n-1&&j==n-1 && i>=n/2)
			printf("*");
		else
			printf(" ");
	}
}
void num_6(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0||i==n-1||j==n-1&&i>=n/2||i==n/2)
			printf("*");
		else
			printf(" ");
	}
}
void num_7(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i+j==n-1)
			printf("*");
		else
			printf(" ");
	}
}
void num_8(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0||i==n-1||j==n-1||i==n/2)
			printf("*");
		else
			printf(" ");
	}
}
void num_9(int i,int j,int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0&&i<=n/2||i==n-1||j==n-1||i==n/2)
			printf("*");
		else
			printf(" ");
	}
}
