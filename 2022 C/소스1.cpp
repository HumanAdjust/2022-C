#include <stdio.h>
#define SEC_PER_MINUTE 60 // 1분은 60초

int main(void)
{
	/*
	* y = mx + b -> y \ m*x + b;
	* y = ax^2 + bx + c -> y = a*x*x + b*x + c;
	* m = (x+y+z) / 3 -> m = (x+y+z) / 3;
	*/
	// 예제 1
	/*int x, y, result;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;
	printf("%d % d = %d\n", x, y, result);*/

	// 예제 2
	/*int input, minute, second;

	printf("* 초를 입력하시오: ");
	scanf("%d", &input); // 초단위의 시간을 읽는다.

	minute = input / SEC_PER_MINUTE; // 몇 분
	second = input % SEC_PER_MINUTE; // 몇 초

	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);*/

	// 예제 3
	printf("AND : %08X\n", 0x9 & 0xA);
	printf("OR : %08X\n", 0x9 | 0xA);
	printf("XOR : %08X\n", 0x9 ^ 0xA);
	printf("NOT : %08X\n", -0x9);
	printf("<< : %08X\n", 0x9 << 0xA);
	printf(">> : %08X\n", 0x9 >> 0xA);

	return 0;
}