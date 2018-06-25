#include <stdio.h>
#include <math.h>

double dBmWattCoversion(double value)
{
	double exponent = value / 10;
	double milliwatts = pow(10.0, exponent);
	double watts = milliwatts / 1000;
	return watts;
}

double WattdBmConversion(double value)
{
	return 10*log(1000*value);
}

int main(int argc, char *argv[])
{
	int version;
	double value;
	double result;

	/*printf("Enter '0' for dBm->Watt coversion.\n");
	printf("Enter '1' for Watt->dBm conversion.\n");
	scanf("%d", &version);

	printf("Enter the value you want to convert:\n");
	while (1)
	{
		fgets (input, 256, stdin);
		sscanf (input, "%f", &value);
	}
	printf("%d\n", value);*/
	version = (int)argv[1]
	if (argv[1] == 0)
		result = dBmWattCoversion(argv[2]);
	else if (argv[1] == 1)
		result = WattdBmConversion(argv[2]);
	else
		printf("Invalid conversion type!\n");

	printf("The answer is: %f\n", result);
}
