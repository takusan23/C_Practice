#include <stdio.h>
int main(void)
{
	int yazyu = 1919;
	//�J�E���g�p
	int count = 0;
	while (yazyu <= 1145141919)
	{
		//����
		printf("�i��j %d %d��� \n", yazyu, count);
		yazyu += 10000;
		count++;
	}
	return 0;
}
