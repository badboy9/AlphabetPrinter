#include<stdio.h>

void a_alpha(int i,int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0||j==n-1||i==n/2)
			printf("*");
		else
			printf(" ");
	}
}

void b_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0&&j!=n-1||j==0||i==n-1&&j!=n-1||j==n-1&i!=0&&i!=n-1&&i!=n/2||i==n/2&&j!=n-1)
			printf("*");
		else
			printf(" ");
	}
}

void c_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0||i==n-1)
			printf("*");
		else
			printf(" ");
	}
}

void d_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0&&j!=n-1||j==0||i==n-1&&j!=n-1||j==n-1&&i!=0&&i!=n-1)
			printf("*");
		else
			printf(" ");
	}
}
void e_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||i==n/2&&j<=n/2||j==0)
			printf("*");
		else
			printf(" ");
	}
}

void f_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n/2&&j<=n/2||j==0)
			printf("*");
		else
			printf(" ");
	}
}

void g_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||j==0||j==n-1&&i>=n/2||i==n/2&&j>=n/2)
			printf("*");
		else
			printf(" ");
	}
}




void h_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==n/2||j==0||j==n-1)
			printf("*");
		else
			printf(" ");
	}
}

void i_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(j==n/2)
			printf("*");
		else
			printf(" ");
	}
}

void j_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==n/2||i==n-1&&j<=n/2||j==0&&i>n/2)
			printf("*");
		else
			printf(" ");
	}
}

void k_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(j==0||i==j&&j>=n/2||i+j==n-1&&j>=n/2)
			printf("*");
		else
			printf(" ");
	}
}

void l_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(j==0||i==n-1)
			printf("*");
		else
			printf(" ");
	}
}

void m_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(j==0||j==n-1||i==j&&i<=n/2||i+j==n-1&&i<=n/2)
			printf("*");
		else
			printf(" ");
	}
}
void n_alpha(int i, int j, int n)							
{
	for(j=0;j<n;j++)
	{
		if(j==0||j==n-1||i==j)
			printf("*");
		else
			printf(" ");
	}
}
void o_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||j==0||j==n-1)
			printf("*");
		else
			printf(" ");
	}
}

void p_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0||i==n/2||j==n-1&&i<=n/2)
			printf("*");
		else
			printf(" ");
	}
}


void q_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||j==0||j==n-1||i==j)
			printf("*");
		else
			printf(" ");
	}
}

void r_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==0||i==n/2||j==n-1&&i<=n/2||i==j&&j>=n/2)
			printf("*");
		else
			printf(" ");
	}
}


void s_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||i==n/2||j==0&&i<=n/2||j==n-1&&i>=n/2)
			printf("*");
		else
			printf(" ");
	}
}


void t_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==0||j==n/2)
			printf("*");
		else
			printf(" ");
	}
}
void u_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==n-1||j==0||j==n-1)
			printf("*");
		else
			printf(" ");
	}
}
void v_alpha(int i, int j, int n)											//CHECK IT
{
	for(j=0;j<n;j++)
	{
		if(j==0&&i<=n/2||j==n-1&&i<=n/2||i-(n-1)/2==j&&i>=n/2||i+j==n-1+(n-1)/2&&i>=n/2)
			printf("*");
		else
			printf(" ");
	}
}

void w_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(j==0||j==n-1||i==j&&i>=n/2||i+j==n-1&&i>=n/2)
			printf("*");
		else
			printf(" ");
	}
}

void x_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(i==j||i+j==n-1)
			printf("*");
		else
			printf(" ");
	}
}


void y_alpha(int i, int j, int n)
{
	for(j=0;j<n;j++)
	{
		if(j==n/2&&i>=n/2||i==j&&i<=n/2||i+j==n-1&&i<=n/2)
			printf("*");
		else
			printf(" ");
	}
}

void z_alpha(int i, int j, int n)								
{
	for(j=0;j<n;j++)
	{
		if(i==0||i==n-1||i+j==n-1)
			printf("*");
		else
			printf(" ");
	}
}










