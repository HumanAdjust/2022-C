#include <stdio.h>
#define SEC_PER_MINUTE 60 // 1���� 60��

int main(void)
{
	/*
	* y = mx + b -> y \ m*x + b;
	* y = ax^2 + bx + c -> y = a*x*x + b*x + c;
	* m = (x+y+z) / 3 -> m = (x+y+z) / 3;
	*/
	// ���� 1
	/*int x, y, result;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
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

	// ���� 2
	/*int input, minute, second;

	printf("* �ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &input); // �ʴ����� �ð��� �д´�.

	minute = input / SEC_PER_MINUTE; // �� ��
	second = input % SEC_PER_MINUTE; // �� ��

	printf("%d�ʴ� %d�� %d���Դϴ�.\n", input, minute, second);*/

	// ���� 3
	printf("AND : %08X\n", 0x9 & 0xA);
	printf("OR : %08X\n", 0x9 | 0xA);
	printf("XOR : %08X\n", 0x9 ^ 0xA);
	printf("NOT : %08X\n", -0x9);
	printf("<< : %08X\n", 0x9 << 0xA);
	printf(">> : %08X\n", 0x9 >> 0xA);

	return 0;
}