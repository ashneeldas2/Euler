#include <stdlib.h>
#include <stdio.h>

int main() {
    int i = 0;
    int j;
    while (i > 0) {
	for (j = 1; j < 21; j++) {
	    if (i % j != 0) break;
	}
	i++;
    }
}
