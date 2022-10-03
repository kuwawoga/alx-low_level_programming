<<<<<<< HEAD
#ifndet MAIN_H 
#define MAIN_H

/**
# void prototypes()
* int prototypes()
*/

int _putchar (char);
=======
  
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
>>>>>>> 9ffc9a9105152a8a371355f95fa7198229c8247c
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
<<<<<<< HEAD
void print_chessboard(char (*a) [8]);
void print_diagsums(int *a, int size);
void set_string (char **s, char *to);

#endif /*MAIN_H*/

=======
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */
>>>>>>> 9ffc9a9105152a8a371355f95fa7198229c8247c
