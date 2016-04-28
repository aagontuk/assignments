#include <iostream>
#include <limits.h>

int main(){
	int n, tmp, m, min = 2147483647, max = -2147483647;
	double sum = 0;

	std::cin >> n;
	tmp = n;
	while(tmp--){
		std::cin >> m;
		sum += m;
		if(m < min){
			min = m;
		}
		if(m > max){
			max = m;	
		}
	}

	std::cout << "Mean: " << sum/(double)n << "\n";
	std::cout << "Min: " << min << "\n";
	std::cout << "Max: " << max << "\n";
	std::cout << "Range: " << max - min << "\n";

	return 0;
}
