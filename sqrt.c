/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#define printfc(c) printf("%f%c%fi",creal(c),(cimag(c)>=0.0f)?'+':'\0',cimag(c))

// first commit
// second edit
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
    if (input >= 0) {
        printf("Sqrt of %d is %f\n",input,sqrt(input));
    }
    // added input testing
    //
    //version 3
    // added negative number support
    else {
        complex double result = csqrt( (complex double)input );
        printf("Sqrt of %d is ",input);
        printfc(result);
        printf("\n");
    }
    printf("End of program. Exiting.\n");
    printf("conflict in br3. \n");
	return(0);

} // end main
