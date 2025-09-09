# include<stdio.h>
# include<limits.h>

int main(void) {
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min: %d\n", CHAR_MIN);

	signed short int sshort = 12345;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("Min: %d\n", SHRT_MIN);

	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);

	signed short sint = 1234;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Min: %d\n", INT_MIN);
	
	signed short int uint = 12345U;
	printf("\nsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);

	signed long int slong = 123456789L;
	printf("\nsigned long:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("Min: %d\n", LONG_MIN);

	unsigned long int ulong = 123456789UL;
	printf("\nsigned long:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);

	float f = 123.456F;
	printf("\nfloat:\n");
	printf("Value: %f\n", f);
	//printf("Max: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_MIN);

	double d = 123456.7890123F;
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_MIN);

	return 0;
}