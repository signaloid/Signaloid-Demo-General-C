#include <stdio.h>
#include <uxhw.h>

int
main(int argc, char *  argv[])
{
	double	a, b, c;

	a = UxHwDoubleUniformDist(0.5, 1.0);
	printf("a = %lf\n", a);

	b = UxHwDoubleUniformDist(10.0, 20.0);
	printf("b = %lf\n", b);

	c = (a+b)/(a-b);
	printf("c = %lf\n", c);

#ifdef DEBUG
	printf("debug message\n");
#endif

	return 0;
}

