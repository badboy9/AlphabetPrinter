#include<stdio.h>
#include"Alphabets.h"
#include"Numerals.h"

void function(char ch,int i, int j, int n)
{
	switch(ch)
	{
		case 'a':
		case 'A':
			a_alpha(i, j ,n);
			break;
		case 'b':
		case 'B':	
			b_alpha(i, j ,n);
			break;
		case 'c':
		case 'C':
			c_alpha(i, j ,n);
			break;
		case 'd':
		case 'D':
			d_alpha(i, j ,n);
			break;
		case 'e':
		case 'E':
			e_alpha(i, j ,n);
			break;
		case 'f':
		case 'F':
			f_alpha(i, j ,n);
			break;
		case 'g':
		case 'G':
			g_alpha(i, j ,n);
			break;
		case 'h':
		case 'H':
			h_alpha(i, j ,n);
			break;
		case 'i':
		case 'I':
			i_alpha(i, j ,n);
			break;
		case 'j':
		case 'J':
			j_alpha(i, j ,n);
			break;
		case 'k':
		case 'K':
			k_alpha(i, j ,n);
			break;
		case 'l':
		case 'L':
			l_alpha(i, j ,n);
			break;
		case 'm':
		case 'M':
			m_alpha(i, j ,n);
			break;
		case 'n':
		case 'N':
			n_alpha(i, j ,n);
			break;
		case 'o':
		case 'O':
			o_alpha(i, j ,n);
			break;
		case 'p':
		case 'P':
			p_alpha(i, j ,n);
			break;
		case 'q':
		case 'Q':
			q_alpha(i, j ,n);
			break;
		case 'r':
		case 'R':
			r_alpha(i, j ,n);
			break;
		case 's':
		case 'S':
			s_alpha(i, j ,n);
			break;
		case 't':
		case 'T':
			t_alpha(i, j ,n);
			break;
		case 'u':
		case 'U':
			u_alpha(i, j ,n);
			break;
		case 'v':
		case 'V':
			v_alpha(i, j ,n);
			break;
		case 'w':
		case 'W':
			w_alpha(i, j ,n);
			break;
		case 'x':
		case 'X':
			x_alpha(i, j ,n);
			break;
		case 'y':
		case 'Y':
			y_alpha(i, j ,n);
			break;
		case 'z':
		case 'Z':
			z_alpha(i, j ,n);
			break;
		case '0':
			num_0(i,j,n);
			break;
		case '1':
			num_1(i,j,n);
			break;
		case '2':
			num_2(i,j,n);
			break;
		case '3':
			num_3(i,j,n);
			break;
		case '4':
			num_4(i,j,n);
			break;
		case '5':
			num_5(i,j,n);
			break;
		case '6':
			num_6(i,j,n);
			break;
		case '7':
			num_7(i,j,n);
			break;
		case '8':
			num_8(i,j,n);
			break;
		case '9':
			num_9(i,j,n);
			break;
		
	}
}

