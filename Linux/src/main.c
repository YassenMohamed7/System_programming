#include <unistd.h>
#include <fcntl.h>
#include "cp.c"

int main(int argc, char **argv)
{
	return copy(argc, argv);
}