#include <stdio.h>
#define MY_AGE 30 

/**
 * Variable types
 * Type                 Size (bytes)              Range                                         Format specifier
 * int                  4                         -2,147,483,648 to 2,147,483,647               %i
 * unsigned int         4                         0 to 4,294,967,295                            %u
 * char                 1                         -128 to 127                                   %c
 * unsigned char        1                         0 to 255                                      %c
 * float                4                         1.175494e-38 to 3.402823e+38                  %f
 * double               8                         2.3E-308 to 1.7E+308                          %lf
 * short                2                         -32,768 to 32,767                             %hd
 * unsigned short       2                         0 to 65,535                                   %hu
 * long                 8                         -9223372036854775808 to 9223372036854775807   %li
 */

int main()
{
    printf("The size of long variable is %li", sizeof(long));
}

/**
 * C Keywords
 * auto	double	int	struct
 * break	else	long	switch
 * case	enum	register	typedef
 * char	extern	return	union
 * const	float	short	unsigned
 * continue	for	signed	void
 * default	goto	sizeof	volatile
 * do	if	static	while
 */