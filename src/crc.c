#include "crc.h"

#include <string.h>

void compute_crc(unsigned char* input, unsigned long int input_length, unsigned char* output, unsigned long int output_length)
{
	memcpy(output, input, output_length * sizeof(unsigned char));
}
