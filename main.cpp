#include"iostream"
#include"cstdio"
int main() {
	int i = 0;
	while (i < 100) {

		if (i % 15 == 0)
		{
			
			printf("%s\n", "FIZZBUZZ");
		}
		else if (i % 5 == 0) {
			printf("%s\n", "FIZZ");

		}
		else if (i % 3 == 0) {
			printf("%s\n", "BUZZ");
		}
		else {
			printf("%d\n", i);
		}

		i++;

	}
	return 0;
}