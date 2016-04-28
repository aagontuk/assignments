#include <iostream>
#include <cmath>

bool isPrime(int n);

int main(){
	int n;
	std::cin >> n;

	if(n > 0){
		std::cout << 2 << "\n";
		for(int i = 3, j = 0; j < n - 1; i+=2){
			if(isPrime(i)){
				std::cout << i << "\n";
				j++;
			}
		}
	}

	return 0;
}

bool isPrime(int n){
	for(int i = 3; i <= sqrt(n); i+=2){
		if(n % i == 0){
			return false;
		}
	}

	return true;
}
