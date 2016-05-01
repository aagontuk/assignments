/* 3.1 & 3.2 Solution */

/* First Way */

#include <iostream>

void printNum(int number);

int main(){
	printNum(35);
	return 0;
}

void printNum(int number){
	std::cout << number;
}

/* Second Way */

#include <iostream>

void printNum(int number){
	std::cout << number;
}

int main(){
	printNum(35);
	return 0;
}

/* 3.3 Solution */

#include <iostream>

void doubleNumber (int &num ) {num = num * 2;}

int main () {

	int num = 35;
	doubleNumber ( num );
	std :: cout << num ; // Should print 70
	return 0;
}

/* 3.4 Solution */
/* Easy - Lazy to type */

/* 3.6 Solution */
/* OK */
