#include"../include/cp.h"

int copy(int argc, char **argv)
{
	if(argc < 3)
		return 1;

	int fdSrcFile = open(argv[1], O_RDONLY);
	if(fdSrcFile == -1)
		return 2;

	int fdDesFile = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if(fdDesFile == -1)
		return 3;

	char buffer[10];
	ssize_t charCount;
	while(charCount = read(fdSrcFile, buffer, sizeof(buffer) != 0))
	{
		write(fdDesFile, buffer, charCount);
	}
	return 0;
}
