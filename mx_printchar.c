#include <unistd.h>

void print_char(char ch) {
	write(1, &ch, 1);
}
