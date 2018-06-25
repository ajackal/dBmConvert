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
	char input[256];
	double value;
	double result;

	printf("Enter '0' for dBm->Watt coversion.\n");
	printf("Enter '1' for Watt->dBm conversion.\n");
	scanf("%d", &version);
	printf("%d\n", version);

	printf("Enter the value you want to convert:\n");
	while (1)
	{
		fgets (input, 256, stdin);
		if (sscanf (input, "%f", &value) == 1) break;
	}
	printf("%d\n", value);
	
	if (version == 0)
		result = dBmWattCoversion(value);
	else if (version == 1)
		result = WattdBmConversion(value);
	else
		printf("Invalid conversion type!\n");

	printf("The answer is: %f\n", result);
}
