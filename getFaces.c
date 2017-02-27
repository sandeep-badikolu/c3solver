#include <stdio.h>

void getFaces()
{
	//counters
	int i, j, k;
	
	// Cara superior
	//Esquinas
	char u_e1;
	char u_e2;
	char u_e3;
	char u_e4;
	//Aristas
	char u_a1;
	char u_a2;
	char u_a3;
	char u_a4;
	//Centro
	char u_c;
	
	char caraSuperior[3][3] = {{u_e1, u_a1, u_e2}, {u_a2, u_c, u_a3}, {u_e3, u_a4, u_e4}};
	
	// Cara inferior
	//Esquinas
	char d_e1;
	char d_e2;
	char d_e3;
	char d_e4;
	//Aristas
	char d_a1;
	char d_a2;
	char d_a3;
	char d_a4;
	//Centro
	char d_c;
	
	char caraInferior[3][3] = {{d_e1, d_a1, d_e2}, {d_a2, d_c, d_a3}, {d_e3, d_a4, d_e4}};
	
	// Cara izquierda
	//Esquinas
	char l_e1;
	char l_e2;
	char l_e3;
	char l_e4;
	//Aristas
	char l_a1;
	char l_a2;
	char l_a3;
	char l_a4;
	//Centro
	char l_c;
	
	char caraIzquierda[3][3] = {{l_e1, l_a1, l_e2}, {l_a2, l_c, l_a3}, {l_e3, l_a4, l_e4}};
	
	// Cara derecha
	//Esquinas
	char r_e1;
	char r_e2;
	char r_e3;
	char r_e4;
	//Aristas
	char r_a1;
	char r_a2;
	char r_a3;
	char r_a4;
	//Centro
	char r_c;
	
	char caraDerecha[3][3] = {{r_e1, r_a1, r_e2}, {r_a2, r_c, r_a3}, {r_e3, r_a4, r_e4}};
	
	// Cara frontal
	//Esquinas
	char f_e1;
	char f_e2;
	char f_e3;
	char f_e4;
	//Aristas
	char f_a1;
	char f_a2;
	char f_a3;
	char f_a4;
	//Centro
	char f_c;
	
	char caraFrontal[3][3] = {{f_e1, f_a1, f_e2}, {f_a2, f_c, f_a3}, {f_e3, f_a4, f_e4}};
	
	// Cara trasera
	//Esquinas
	char b_e1;
	char b_e2;
	char b_e3;
	char b_e4;
	//Aristas
	char b_a1;
	char b_a2;
	char b_a3;
	char b_a4;
	//Centro
	char b_c;
	
	char caraTrasera[3][3] = {{b_e1, b_a1, b_e2}, {b_a2, b_c, b_a3}, {b_e3, b_a2, b_e4}};
	
	
	
	return 0;
	
}
