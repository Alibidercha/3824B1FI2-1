#include <stdio.h>
#include <math.h>

int main() {
	float x1, x2, y1, y2, r1, r2, d;

	do {
		printf("Input coordinates and radius of the 1st circle x, y, r (r > or = 0):");
		scanf_s("%f %f %f", &x1, &y1, &r1); // Input the 1st circle
	} while (r1 < 0); // Check is r1 >= 0 ((r = 0) - circle is point)
	do {
		printf("Input coordinates and radius of the 2nd circle x, y, r (r > or = 0):");
		scanf_s("%f %f %f", &x2, &y2, &r2); // Input the 2nd circle
	} while (r2 < 0); // Check is r2 >= 0 ((r = 0) - circle is point)

	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); // Distance between circle centers

	if (d == 0 && r1 == r2) {
		printf("Circles coincide");
	}
	else if (d < fabs(r1 - r2) && (d > 0)) {
		printf("Circles don't intersect (inside)");
	}
	else if (d > (r1 + r2)) {
		printf("Circles don't intersect (outside)");
	}
	else if (d < (r1 + r2) && (d > fabs(r1 - r2))) {
		printf("Circles intersect in two points");
	}
	else if (d == r1 + r2) {
		printf("Circles intersect in one point (outside)");
	}
	else if (d == fabs(r1 - r2)) {
		printf("Circles intersect in one point (inside)");
	}
	return 0;
}