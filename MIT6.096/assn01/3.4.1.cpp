#include <iostream>

int main(){
	int n;
	for(;;){
		std::cin >> n;
		(n >= 0 &&  n % 5 == 0) ? std::cout << n / 5 << "\n" : std::cout << -1 << "\n";
	}

	return 0;
}
