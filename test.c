#include <stdio.h>
int main(void)
{
	int yazyu = 1919;
	//カウント用
	int count = 0;
	while (yazyu <= 1145141919)
	{
		//あれ
		printf("（首） %d %d回目 \n", yazyu, count);
		yazyu += 10000;
		count++;
	}
	return 0;
}
