#include <stdio.h>
char number[8];
int numbernumber[8];
int max = -1;
int maxmax = 0;
int check(int a) {
	maxmax = 0;
	for (int g = 0; g <= 8; g++) {
		if (number[a] == number[a + g])
		{
			maxmax++;
		}
		else {
			break;
		}
	}
	return maxmax;


}
int main() {
	for (int i = 0; i < 3; i++) {
		max = -1;
		scanf("%s", number);
		for (int j = 0; j < 8; j++) {
			if (check(j) > max) { max = check(j); }

		}
		printf("%d \n",max);
	}


}
