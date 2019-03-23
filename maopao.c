#include <stdio.h>

#define SIZEOFARR(x) (sizeof(x)/sizeof(*x))

void maopao_sort(int *array, int len)
{
	int tmp,n,m;
	int *p = array;;
	int flag = 1;
	for (m = len; m > 1 && flag == 1; m--) {
		flag = 0;
		for (n = 0; n < (m-1); n++) {
			if (p[n] > p[n+1]) {
				tmp = p[n];
				p[n] = p[n+1];
				p[n+1] = tmp;
				flag = 1;
			}
		}
	}
}


int main()
{
	int array[] = {43, 12 ,3 ,55, 46, 77, 1, 561, 2, 53, 99};
	int len = SIZEOFARR(array);
	maopao_sort(array, len);

	for (int i = 0; i < len; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}
