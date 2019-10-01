#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x, y, z, m, a, b, c; // silsup 4week 1
	
	x = 1;
	z = 3;
	a = 3;
	b = 4;
	c = 5;
	
	y = a*x*x + b*x + c;
	m = (x + y + z) / 3;
	
	printf("y = %d \nm = %d", y, m);

	
	return 0;
}

int main(int argc, char *argv[]) {
	
	int x = 3;
	int cond1, cond2; // silsup 4week 2
	
	cond1 = 2 < x && x < 5;
	cond2 = x > 1 || x < 4 && x > 3;
	
	printf("cond1 = %d , cond2 = %d\n", cond1, cond2);
	
	return 0;
}

int main(int argc, char *argv[]) {
	
	int x, y, a, b, c, d, e; // silsup 4week 3
	
	printf("Input two integers : ");
	scanf("%d, %d", &x, &y);
	
	a = x + y;
	b = x - y;
	c = x * y;
	d = x / y;
	e = x % y;
	
	printf("+ result is : %d\n", a);
	printf("- result is : %d\n", b);
	printf("* result is : %d\n", c);
	printf("/ result is : %d\n", d);
	printf("%% result is : %d\n", e);
	
	return 0;
}
