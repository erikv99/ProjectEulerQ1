// Project Euler Question 1
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.
#include <stdio.h>

int main() {

	int sum = getSum();
	printf("sum = %d", sum);
}

int getSum() {

	int sum = 0;

	// Looping thru all the numbers until 1000
	for (int i = 1; i < 1000; i++) {

		// Checking if there is no remainder when dividing by 3 or 5
		if (i % 3 == 0 || i % 5 == 0) {

			// Adding the current number to the sum.
			sum += i;
		}
	}
	return sum;
}