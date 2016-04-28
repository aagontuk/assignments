#include <iostream>

int main(){
	int n;
	for(;;){
		std::cin >> n;
		if(n < 0){
			std::cout << "Good Bye!\n";
			break;
		}

		if(n % 5 != 0){
			continue;
		}

		std::cout << n / 5 << "\n";
	}

	return 0;
}
