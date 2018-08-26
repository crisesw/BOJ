#include <stdio.h>

int main()
{
	int N,i;
	int ret = -1;
	scanf("%d", &N);
	if (N % 5 == 0)
		ret = N/5;
	else {
		for (i = N/5; i >= 0; i--) {
			if ((N-5*i) % 3 == 0) {
				ret = i + (N - 5*i)/3;
				break;
			}
		}
	}
	printf("%d\n", ret);
	return 0;
}
