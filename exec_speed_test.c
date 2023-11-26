#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// NOTE: This program does not have proper error handling
int main( int argc, char *argv[]){

	const unsigned long ITERATIONS[3] = {1e5, 1e7, 1e9};
	unsigned long add = 0; 

	double time_spent;
	clock_t begin = clock();

	// 10 for base10 number	k
	long argument = strtol(argv[1], NULL, 10);

	// ascii values for '0' = 48 and '4' = 52
	if(argument < 0 && argument > 4){
		printf("Invalid argument: must be either 1, 2, or 3");
		return -1;
	}

	for(int i = 0; i < ITERATIONS[argument - 1]; i++){
		add++;
	}

	clock_t end = clock();

	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Added value %lu \n", add);
	printf("Total Time: %lf \n", time_spent);

	return 0;
}
