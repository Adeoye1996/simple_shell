#include <unistd.h>

/**
 * Abdulazeez_function - Example function following Betty style.
 *
 * Description: This function writes a message with the name Abdulazeez
 * to standard output using the write system call
 *
 * Return: Always 0
 */
int Abdulazeez_function(void)
{
	char *message = "Hello, Abdulazeez! This is a different message.\n";

	ssize_t len = 47;

	if (write(STDOUT_FILENO, message, len) != len)

		return (1);

	return (0);
}
/**
 * main - Entry point of the program.
 *
 * Description:nCalls the Abdulazeez_function and returs its result
 *
 * Return: The result of Abdulazeez_function.
 */
int main(void)
{
	return (Abdulazeez_function());
}
