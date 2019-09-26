/*
 * main.c
 *
 *  Created on: 19-Sep-2019
 *      Author: Gehlot
 */
#include<stdio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0); //Ignore these, Eclipse related issues
	setvbuf(stderr, NULL, _IONBF, 0); //

	long int N = 0; //Always a good to initialize variables with default values, maybe zero.
	int d = 0, count = 0, k, digit, T = 0; // d -- starting point of loop

	scanf("%d", &T);	//Take the number of test cases

	for (int i = 0; i < T; i++) {	//Loop to the number of test cases

		scanf("%ld", &N);	//Take the sample number, i.e. N

		while (d <= N) {	//Looping from d to N (i.e. 0 to N in our case)

			k = d;	//Take the number from d which is incrementing

			while (k) {	//Active till k is anything but zero
				digit = k % 10;	//
				if (digit == 2)
					count++;
				k = k / 10;
			}
			d++;	//Incrementing d
		}

		printf("Count: %d\n", count);	//Print the result in EXACT same format
	}

}
