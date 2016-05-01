#include <iostream>

int strLen(const char *str);
void swap(int &x, int &y);
void pswap(int *x, int *y);
void swapPointer(int **x, int **y);

int main(){
	const char *cstr = "Hello, World";
	std::cout << strLen(cstr) << "\n";

	int x = 5, y = 6;
	int *pX = &x, *pY = &y;
	swapPointer(&pX, &pY);
	std::cout << *pX << " " << *pY << "\n";

	/* 7.5 Answer */
	char *oddOrEven = "Never odd or even";
	char *nthCharPtr;
	nthCharPtr = &oddOrEven[5];
	std::cout << *nthCharPtr << "\n";

	nthCharPtr -= 2;
	std::cout << *nthCharPtr << "\n";

	char **pointerPtr = &nthCharPtr;
	std::cout << pointerPtr << "\n";
	std::cout << **pointerPtr << "\n";

	nthCharPtr += 1;

	std::cout << "Far: " << nthCharPtr - oddOrEven << "\n";

	return 0;
}

int strLen(const char *str){
	int i = 0;
	while(*str++){
		i++;
	}

	return i;
}

void swap(int &x, int &y){
	int tmp = x;
	x = y;
	y = tmp;
}

void pswap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swapPointer(int **x, int **y){
	int *tmp = *x;
	*x = *y;
	*y = tmp;
}
