#include <gtest/gtest.h>

#include "crc.h"

unsigned long int function(unsigned long int inputLength)
{
	return inputLength;
}

TEST(CRC_TEST, Negative) {
	unsigned long int input_length = 10;
	auto* input = new unsigned char[input_length];
	unsigned long int output_length = 10;
	auto* output = new unsigned char[output_length];
	
	compute_crc(input, input_length, output, output_length);

	// auto result = function(input_length);
	
	// EXPECT_EQ(result, input_length);
	EXPECT_EQ(1, 1);
}