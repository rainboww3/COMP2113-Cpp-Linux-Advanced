#include <stdio.h>
#include <string.h>

int main()
{
	char words[100][10];
	char temp[10];
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", words[i]);
	}

	// Add codes here to sort words


	for (int i = 0; i < n; i++) {
		printf("%s\n", words[i]);
	}

  return 0;
}
