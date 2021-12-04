#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int TTK = 4000;
	int N1 = TTK + (4000*8/100);
	int N2 = N1 + (N1*8/100);
	int N3 = N2 + (N2*8/100);
	int N4 = N3 + (N3*8/100);
	printf("So tien thu duoc sau 4 nam la :  %d",N4);
	printf("$");
	
	
}