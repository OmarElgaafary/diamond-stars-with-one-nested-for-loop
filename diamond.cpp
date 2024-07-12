#include <iostream>

void diamond();


int main() {

	diamond();

	return 0;
}

void diamond() {

	int spaces = 4;
	int z = 0;
	int y = 8;

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {

			if (i <= 4) {
				if (j < spaces || j >(i * 2) + spaces) {

					std::cout << " ";
				}
				else {
					std::cout << "*";
				}
			}

			if (i >= 5) {
				if (j > z && j < y) {

					std::cout << "*";
				}
				else {
					std::cout << " ";
				}
			}

		}

		if (i >= 5) {
			z++;
			y--;
		}
		spaces--;
		std::cout << std::endl;

	}
}
