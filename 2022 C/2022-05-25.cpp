#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*unsigned int num;
	printf("������: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("������: ");

	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	printf("\n");*/

	/*double f_temp;
	double c_temp;

	printf("ȭ���µ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("�����µ��� %f�Դϴ�.", c_temp);*/

	/*int x, y;

	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	printf("��: %d ������: %d \n", x / y, x % y);*/

	/*double x, y;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	printf("%f %f %f %f \n", x + y, x - y, x * y, x / y);*/

	/*int a, b, c, max;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("�ִ밪: %d", max);*/

	/*int cm, feet;
	double inch;
	const double CM_PER_FEET = (12 * 2.54);

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &cm);
	feet = cm / (int)(CM_PER_FEET);
	inch = (cm - feet * CM_PER_FEET) / 2.54;
	printf("%dcm�� %d��Ʈ %f��ġ�Դϴ�. \n", cm, feet, inch);*/

	/*int value;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	printf("���� �ڸ�: %d\n", (value / 10) % 10);
	printf("���� �ڸ�: %d\n", (value / 1) % 10);*/

	/*int value;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	value = -value;
	value += 0x1;
	printf("2�� ����: %d \n", value);*/

	/*int value, count;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	printf("2�� ���ϰ� ���� Ƚ��: ");
	scanf("%d", &count);
	printf("%d<<%d�� ��: %d \n", value, count, value << count);
	*/

	/*
	double r, volume, area;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);

	area = 4.0 * 3.141592 * r * r * r;
	volume = (4.0 / 3.0) * 3.141592 * r * r * r;
	printf("ǥ������ %f�Դϴ�.\n", area);
	printf("ü���� %f,�Դϴ�.\n", volume);
	*/

	/*
	double stick_height, shadow_length, dist, pyramid_height;
	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &stick_height);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &shadow_length);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &dist);

	pyramid_height = stick_height * shadow_length / dist;

	printf("�Ƕ�̵��� ���̴� %f�Դϴ�.")
	*/

	/*int x, y;
	printf("x ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d", &y);

	(x > 0) ? ((y - 0) ? printf("1��и�\n") : printf("4��и�\n")) : ((y > 0) ? printf("2��и�\n") : printf("3��и�\n"));
	*/

	/*
	double dist, degree, circ, radius;
	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf("%d", &dist);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &degree);

	unsigned int value;
	char c1, c2, c3, c4;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c1);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c2);
	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c3);
	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c4);

	value = (c4 << 24) | (c3 << 16) | (c2 << 8) | c1;
	printf("�����: %x\n", value);*/

	/*int a, b, c;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�: ");
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		printf("�ùٸ� �ﰢ��\n");
	}
	else {
		printf("�ùٸ��� ���� �ﰢ��\n");
	}*/

	/*char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	c = getchar();

	switch (c) {
	case 'a':
	case 'i':
	case 'o':
	case 'u':
	case 'e':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
	}*/

	/*int x;
	int y;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	if (x % y == 0)
		printf("����Դϴ�. \n");
	else
		printf("����� �ƴմϴ�.\n");
	*/

	/*int x, y, z, min;
	printf("3���� ������ �Է��Ͻÿ�:");
	scanf("%d %d %d", &x, &y, &z);
	if (x < y) {
		if (z < x)
			min = z;
		else
			min = x;
	}
	else {
		if (z < y)
			min = z;
		else
			min = y;
	}
	printf("���� ���� ������ %d�Դϴ�. \n", min);
	*/

	/*int computer = rand() % 3 + 1;
	printf("%d", computer);
	int user;
	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��): ");
	scanf("%d", &user);
	if (user == 1 && computer == 2)
		printf("��ǻ�Ͱ� �̰���\n");
	else if (user == 1 && computer == 3)
		printf("����ڰ� �̰���\n");
	else if (user == 2 && computer == 1)
		printf("����ڰ� �̰���\n");
	else if (user == 2 && computer == 3)
		printf("��ǻ�Ͱ� �̰���\n");
	else if (user == 3 && computer == 1)
		printf("��ǻ�Ͱ� �̰���\n");
	else if (user == 3 && computer == 2)
		printf("����ڰ� �̰���\n");
	else
		printf("�����\n");*/
	
	/*int month;

	printf("����ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &month);
	switch (month) {
		case 1: printf("Jan\n"); break;
		case 2: printf("Feb\n"); break;
		case 3: printf("Mar\n"); break;
		case 4: printf("Apr\n"); break;
		case 5: printf("May\n"); break;
		case 6: printf("Jun\n"); break;
		case 7: printf("Jul\n"); break;
		case 8: printf("Aug\n"); break;
		case 9: printf("Sep\n"); break;
		case 10: printf("Oct\n"); break;
		case 11: printf("Nov\n"); break;
		case 12: printf("Dev\n"); break;
		default: printf("�߸��Է��ϼ̳׿�\n"); break;
	}*/

	/*int age, time, fee;
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);

	if (time < 17) {
		if (age < 3)
			fee = 0;
		else if (age > 65 || age <= 12)
			fee = 25000;
		else
			fee = 34000;
	}
	else {
		if (age < 3)
			fee = 0;
		else
			fee = 10000;
	}
	printf("����� %d�Դϴ�.\n", fee);*/

	return 0;
}