#include <iostream>

int main(int argc, char **argv){
	int n = 3, i;
	const char *hello = "Hello, World!\n";

	std::cout << "Using for loop:\n\n";
	for(i = 0; i < n; i++){
		std::cout << hello;
	}

	std::cout << "Using while loop:\n\n";
	i = 0;
	while(i < n){
		std::cout << hello;
		i++;
	}

	i = 0;
	std::cout << "Using do while loop:\n\n";
	do{
		std::cout << hello;
		i++;
	}while(i < n);

	return 0;
}
