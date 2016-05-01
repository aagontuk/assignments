#include <iostream>

#define COLUMN 3
#define ROW 2

void transpose(const int input[][COLUMN], int output[][ROW]);

int main(){
	int imat[ROW][COLUMN] = {1, 2, 3,
							4, 5, 6};

	int omat[COLUMN][ROW];

	transpose(imat, omat);

	return 0;
}

void transpose(const int input[][COLUMN], int output[][ROW]){
	int i, j;
	int k = 0, l = 0;
	for(i = 0; i < ROW; i++){
		for(j = 0; j < COLUMN; j++){
			if(l == ROW){
				l = 0;
				k++;
			}
			output[k][l] = input[i][j];
			l++;
		}
	}
}

