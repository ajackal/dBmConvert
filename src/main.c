#include <stdio.h>
#include <math.h>

float dBmWattCoversion(float value)
{
	float exponent = value / 10;
	float milliwatts = pow(10.0, exponent);
	float watts = milliwatts / 1000;
	return watts;
}

float WattdBmConversion(float value)
{
	float log_value = log10(1000 * value);
	float dBm = 10 * log_value;
	return dBm;
}

int main(int argc, char *argv[])
{
	int version;
	float value;
	float result;

	printf("Enter '0' for dBm->Watt coversion.\n");
	printf("Enter '1' for Watt->dBm conversion.\n");
	scanf("%d", &version);

	printf("Enter the value you want to convert:\n");
	scanf("%f", &value);
	
	if (version == 0)
		result = dBmWattCoversion(value);
	else if (version == 1)
		result = WattdBmConversion(value);
	else
		printf("Invalid conversion type!\n");

	printf("The answer is: %f\n", result);
}
