/*Adrián Castillo
Write a program that asks the user to type 10 integers and writes the smallest value. Use must use for().*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int count, num, newnum;
	printf("Give me 10 integers and I'll give you the smallest one.\n");
	scanf_s("%i", &num);
	for (count = 0; count < 9; count++){
		scanf_s("%i", &newnum);
		if (newnum < num){
			num = newnum;
		}
	}
	printf("The smallest value is: %i\n", num);
	system("pause");
	return 0;
}