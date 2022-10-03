#include "main.h"

/**
<<<<<<< HEAD
* _memset - fills a memory block with a constant byte
* @b: char to be used
* @n: number of bytes to be used
*
* Return: pointer to the memory block
*/
char *_memset(char *s, char b, unsigned int n)
{ 
                       while (n)
                       {
                               s[n - 1] = b;
                               n--;
                      }
                     return (s);
=======
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to string
 * @b: constant byte
 * @n: first bytes to change
 * Return: pointer to modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
>>>>>>> 9ffc9a9105152a8a371355f95fa7198229c8247c
}
