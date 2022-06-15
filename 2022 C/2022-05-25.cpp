#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*unsigned int num;
	printf("십진수: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("이진수: ");

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

	printf("화씨온도를 입력하시오: ");
	scanf("%lf", &f_temp);
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("섭씨온도는 %f입니다.", c_temp);*/

	/*int x, y;

	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("몫: %d 나머지: %d \n", x / y, x % y);*/

	/*double x, y;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y);

	printf("%f %f %f %f \n", x + y, x - y, x * y, x / y);*/

	/*int a, b, c, max;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);
	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("최대값: %d", max);*/

	/*int cm, feet;
	double inch;
	const double CM_PER_FEET = (12 * 2.54);

	printf("키를 입력하시오(cm): ");
	scanf("%d", &cm);
	feet = cm / (int)(CM_PER_FEET);
	inch = (cm - feet * CM_PER_FEET) / 2.54;
	printf("%dcm는 %d피트 %f인치입니다. \n", cm, feet, inch);*/

	/*int value;

	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	printf("십의 자리: %d\n", (value / 10) % 10);
	printf("일의 자리: %d\n", (value / 1) % 10);*/

	/*int value;

	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	value = -value;
	value += 0x1;
	printf("2의 보수: %d \n", value);*/

	/*int value, count;

	printf("정수를 입력하시오: ");
	scanf("%d", &value);
	printf("2를 곱하고 싶은 횟수: ");
	scanf("%d", &count);
	printf("%d<<%d의 값: %d \n", value, count, value << count);
	*/

	/*
	double r, volume, area;
	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);

	area = 4.0 * 3.141592 * r * r * r;
	volume = (4.0 / 3.0) * 3.141592 * r * r * r;
	printf("표면적은 %f입니다.\n", area);
	printf("체적은 %f,입니다.\n", volume);
	*/

	/*
	double stick_height, shadow_length, dist, pyramid_height;
	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &stick_height);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &shadow_length);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &dist);

	pyramid_height = stick_height * shadow_length / dist;

	printf("피라미드의 높이는 %f입니다.")
	*/

	/*int x, y;
	printf("x 좌표를 입력하시오: ");
	scanf("%d", &x);
	printf("y 좌표를 입력하시오: ");
	scanf("%d", &y);

	(x > 0) ? ((y - 0) ? printf("1사분면\n") : printf("4사분면\n")) : ((y > 0) ? printf("2사분면\n") : printf("3사분면\n"));
	*/

	/*
	double dist, degree, circ, radius;
	printf("거리를 입력하시오: ");
	scanf("%d", &dist);
	printf("각도를 입력하시오: ");
	scanf("%d", &degree);

	unsigned int value;
	char c1, c2, c3, c4;

	printf("첫번째 문자를 입력하시오: ");
	scanf("%c", &c1);
	printf("두번째 문자를 입력하시오: ");
	scanf("%c", &c2);
	printf("세번째 문자를 입력하시오: ");
	scanf("%c", &c3);
	printf("네번째 문자를 입력하시오: ");
	scanf("%c", &c4);

	value = (c4 << 24) | (c3 << 16) | (c2 << 8) | c1;
	printf("결과값: %x\n", value);*/

	/*int a, b, c;

	printf("삼각형의 3번을 입력하시오: ");
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		printf("올바른 삼각형\n");
	}
	else {
		printf("올바르지 않은 삼각형\n");
	}*/

	/*char c;
	printf("문자를 입력하시오: ");
	c = getchar();

	switch (c) {
	case 'a':
	case 'i':
	case 'o':
	case 'u':
	case 'e':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
	}*/

	/*int x;
	int y;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);
	printf("정수를 입력하시오: ");
	scanf("%d", &y);

	if (x % y == 0)
		printf("약수입니다. \n");
	else
		printf("약수가 아닙니다.\n");
	*/

	/*int x, y, z, min;
	printf("3개의 정수를 입력하시오:");
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
	printf("제일 작은 정수는 %d입니다. \n", min);
	*/

	/*int computer = rand() % 3 + 1;
	printf("%d", computer);
	int user;
	printf("선택하시오(1: 가위 2: 바위 3: 보): ");
	scanf("%d", &user);
	if (user == 1 && computer == 2)
		printf("컴퓨터가 이겼음\n");
	else if (user == 1 && computer == 3)
		printf("사용자가 이겼음\n");
	else if (user == 2 && computer == 1)
		printf("사용자가 이겼음\n");
	else if (user == 2 && computer == 3)
		printf("컴퓨터가 이겼음\n");
	else if (user == 3 && computer == 1)
		printf("컴퓨터가 이겼음\n");
	else if (user == 3 && computer == 2)
		printf("사용자가 이겼음\n");
	else
		printf("비겼음\n");*/
	
	/*int month;

	printf("월번호를 입력하시오: ");
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
		default: printf("잘못입력하셨네요\n"); break;
	}*/

	/*int age, time, fee;
	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
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
	printf("요금은 %d입니다.\n", fee);*/

	/*double divisor, divident, sum;
	int loop_count;

	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("반복횟수: ");
	scanf("%d", &loop_count);

	while (loop_count > 0) {
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;
	}

	printf("Pi = %f", sum);*/

	/*int counter, i;
	printf("카운터의 초기값을 입력하시오: ");
	scanf("%d", &counter);
	for (i = counter; i > 1; i--) {
		printf("%d", i);
	}
	printf("\n\a");*/

	/*int i, sum;
	i = 1;
	sum = 0;
	while (i <= 100)
	{
		if ((i % 3) == 0) {
			sum += i;
		}
		i++;
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다. \n", sum);*/

	/*int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("약수: ");
	for(int i=1; i <= x; i++) {
		if(x % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");*/

	/*int y, x;
	for (y = 0; y < 7; y++) { 
		for (x = 0; x < (6 - y); x++) {
			printf(" ");
		}
		for (x = 6-y; x < 7; x++) {
			printf("*");
		}
		printf("\n");
	}*/


	return 0;
}   