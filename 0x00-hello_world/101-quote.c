#include <unistd.h>
/**
 * main-entry point for the function
 * no parameters set
 *
 * Description: function for out putting on std err
 * Return:1
 */
int main(void)
{
	const char message[] = "and that piece of art is useful -Dora Korpar, 2015-10-19\n";
	const int stderr_fd = 2;
	const size_t message_len = sizeof(message) - 1;

	write(stderr_fd, message, message_len);
	return (1);
}

