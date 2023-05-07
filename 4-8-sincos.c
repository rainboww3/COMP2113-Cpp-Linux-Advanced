#include<stdio.h>
#include<math.h>
#define PI 3.14159265

void GetSinCos(int d, double *dsin, double *dcos) {
	 *dsin = sin(d*PI / 180);
	 *dcos = cos(d*PI / 180);
}

int main() {
	double dsin;
	double dcos;
	int degree;

	scanf("%d", &degree);
	GetSinCos(degree, &dsin, &dcos);
	printf("The sin is %g \n", dsin);
	printf("The cos is %g \n", dcos);

	return 0;
}
