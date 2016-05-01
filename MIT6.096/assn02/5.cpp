#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
	int n, hit = 0, total;
	cin >> n;
	total = n;

	double x, y;
	while(n--){
		srand(time(0));
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;

		if(sqrt(x * x + y * y) <= 1){
			hit++;
		}
	}

	cout << "Pi: " << 4 * (double)hit / total << "\n";

	return 0;
}
