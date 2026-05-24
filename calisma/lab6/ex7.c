// Write a new program that reads the file created by exercise number 6, and adds the numbers (of the file) together. Write the output on the console.

#include <stdio.h>

int main(){
	FILE* fp = fopen("even_numbers.txt", "r");

	if(fp == NULL)
	{
		printf("File access failed\n");
		return -1;
	}

	// fscanf // word by word
	// fgets // line by line
	// getc // char by char
	int sum = 0;
	int num = 0;
	while (fscanf(fp, "%d", &num) != EOF){
		sum += num;
	}

	printf("Sum: %d\n", sum); // 2


	fclose(fp);


	return 0;
}
