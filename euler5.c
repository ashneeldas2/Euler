#include <stdlib.h>
#include <stdio.h>

int main() {
    int i = 1;
    int j;
    int breakable = 0;
    while (i > 0) {
	for (j = 1; j < 21; j++) {
	    if (i % j != 0) break;
	    if (j == 20) {
		printf("%d\n", i);
		breakable = 1;
	    }
	}
	i++;
	if (breakable == 1) break;
    }
}
