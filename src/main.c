#include <stdio.h>
#include <math.h>

double dBmWattCoversion(int value)
{
	double exponent = (double)value / 10;
	double milliwatts = pow(10.0, exponent);
	double watts = milliwatts / 1000;
	return watts;
}

double WattdBmConversion(int value)
{
	double log_value = log10(1000 * (double)value);
	double dBm = 10 * log_value;
	return dBm;
}

int main(int argc, char *argv[])
{
	int version;
	int value;
	double result;

	printf("Enter '0' for dBm->Watt coversion.\n");
	printf("Enter '1' for Watt->dBm conversion.\n");
	scanf("%d", &version);

	printf("Enter the value you want to convert:\n");
	scanf("%d", &value);
	
	if (version == 0)
		result = dBmWattCoversion(value);
	else if (version == 1)
		result = WattdBmConversion(value);
	else
		printf("Invalid conversion type!\n");

	printf("The answer is: %f\n", result);
}
