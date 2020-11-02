#ifndef CRC_LIB_H
#define CRC_LIB_H

#ifdef __cplusplus
extern "C" {
#endif
	
#ifdef BUILD_CRC_DLL
#define CRC_LIB __declspec(dllexport)
#else
#define CRC_LIB __declspec(dllimport)
#endif

	CRC_LIB void __cdecl compute_crc(unsigned char* input, unsigned long int input_length, unsigned char* output, unsigned long int output_length);
	
#ifdef __cplusplus
}
#endif

#endif
