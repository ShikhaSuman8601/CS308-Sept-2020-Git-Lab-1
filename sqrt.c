/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//this is the main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT: Usage: ./sqrt 'input'\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input<0) {
		int input2=input * (-1);
		printf("NEGSUPPORT: Square Root of %d is %fi\n", input, sqrt(input2));
		printf("NEGSUPPORT: Exiting\n");
		return 0;
	}
	printf("NEGSUPPORT: Square Root of %d is %f\n",input,sqrt(input));
	printf("NEGSUPPORT: End of program. Exiting\n");
	return(0);

} // end main
