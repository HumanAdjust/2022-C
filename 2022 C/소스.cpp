#include <stdio.h>

int main(void) {
	/*double light_speed = 300000;
	double distance = 149600000;

	double time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("빛의 속도는 %fkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %fkm \n", distance);
	printf("도달 시간은 %f초\n", time);*/

	// 문제 1
	/*float a;

	printf("실수를 입력하시오: ");
	scanf_s("%f", &a);

	printf("실수형식으로는 %f입니다.\n", a);
	printf("지수형식으로는 %e입니다.\n", a);*/

	// 문제 2
	/*int data;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &data);

	printf("8진수로는 %#o입니다.\n", data);
	printf("10진수로는 %d입니다.\n", data);
	printf("16진수로는 %#x입니다.\n", data);*/

	// 문제 3
	/*int x, y, temp;

	x = 10;
	y = 20;
	temp = 0;
	printf("x=%d y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("x=%d y=%d", x, y);*/

	// 문제 4
	/*double w, h, d;

	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf", &w, &h, &d);

	printf("상자의 부피는 %lf입니다.", w * h * d);*/

	// 문제 5
	/*const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong;
	printf("평을 입력하세요: ");
	scanf_s("%lf", &pyeong);

	printf("%lf평방미터입니다.", pyeong * SQMETER_PER_PYEONG);*/

	// 문제 6
	/*double a = 3.32e-3;
	double b = 9.76e-8;

	printf("%lf", a + b);*/

	// 문제 7
	/*double m, v, kenergy;

	printf("질량(kg) : ");
	scanf_s("%lf", &m);
	printf("속도(m/s) : ");
	scanf_s("%lf", &v);

	kenergy = 0.5 * m * v * v;

	printf("운동에너지(J) : %lf", kenergy);*/

	// 문제 8
	/*int ascii;
	printf("아스키 코드 값을 입력하시오: ");
	scanf_s("%d", &ascii);

	printf("문자: %c입니다.", ascii);*/

	// 문제 9
	/*int x, y, z;

	x = 'a' + 1;
	y = 'a' + 2;
	z = 'a' + 3;

	printf("%c %c %c", x, y, z);*/

	// 문제 10
	// printf("\a화재가 발생하였습니다.\a");

	// 문제 11
	/*printf("\"ASCII code\", \'A\', \'B\', \'C\'\n");
	printf("\\t \\a \\n");*/

	return 0;
}