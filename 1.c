#include <stdio.h>
double pb(int n);

int main(int argc, char *argv[]) {
	int n = 5;
	double sum;
	sum = pb(n);
	printf("%f", sum);
	
	return 0;
}

double pb(int n) {
	if(n <= 1) {
		return 2;
	} else if(n == 2) {
		return 3;
	} else {
		return pb(n-1) * pb(n-2);
	}
}