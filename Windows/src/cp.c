#include "../include/cp.h"

int copy(int argc, char** argv)
{
	if(argc <3)
		return 1;
	
	FILE* srcptr = fopen(argv[1], "rb");
	if(srcptr == NULL)
		return 2;

	FILE* dstptr = fopen(argv[2], "wb");
	if(dstptr == NULL)
		return 3;
	char buffer[10];

	 int read;
	while((read = fread(buffer, sizeof(char), 10, srcptr)) > 0)
	{

		fwrite(buffer, sizeof(char), read, dstptr);
	}

	fclose(srcptr);
	fclose(dstptr);
	return 0;
}