/*
* ---------------------------------------------
* 2022 컴퓨터 보안과 C언어 예제
* 날짜: 2022/04/13
* 작성자: 정상현
* 진행한 교재 페이지: P. 92
* ---------------------------------------------
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//#pragma warning(disable : 4996)

int main() {
/*
* ---------------------------------------------
* 이름 : C 프로그램 구성 요소
* 교재 P. 93
* ---------------------------------------------
*/

// 예제 1. 덧셈 프로그램
	//int x; // 첫 번째 정수를 저장할 변수
	//int y; // 두 번째 정수를 저장할 변수
	//int sum; // 두 정수의 합을 저장하는 변수

	//x = 100;
	//y = 200;

	//sum = x + y;
	//printf("===== 예제 7 =====\n");
	//printf("두수의 합: %d", sum);

/*
* ---------------------------------------------
* 이름 : 사칙 연산
* 교재 P. 111~112
* ---------------------------------------------
*/

// 예제 2. 정수간의 가감승제를 계산하는 프로그램
	//int x;  // 첫 번째 정수를 저장할 변수
	//int y;  // 두 번째 정수를 저장할 변수
	//int sum, diff, mul, div;  // 두 정수 간의 연산의결과를 저장하는 변수

	//x = 20;  // 변수 x에 2를 저장
	//y = 10;  // 변수 y에 10을 저장

	//sum = x + y;  // 변수 sum에 (x+y)의 결과를 저장
	//diff = x - y;  // 변수 diff에 (x-y)의 결과를 저장
	//mul = x * y;  // 변수 mul에 (x*y)의 결과를 저장
	//div = x / y;  // 변수 div에 (x/y)의 결과를 저장

/*
* ---------------------------------------------
* 이름 : 덧셈 프로그램 #2
* 교재 P. 116 ~ 117
* ---------------------------------------------
*/

// 예제 3. 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
	//int x = 0;  // 첫번째 정수를 저장할 변수
	//int y = 0;  // 두번째 정수를 저장할 변수
	//int sum = 0;  // 2개의 정수의 합을 저장할 변수

	//printf("첫번째 숫자를 입력하시오: ");  // 입력 안내 메세지 출력
	//scanf("%d", &x);  // 하나의 정수를 받아서 x에 저장

	//printf("두번째 숫자를 입력하시오: ");  // 입력 안내 메세지 출력
	//scanf("%d", &x); // 하나의 정수를 받아서 x에 저장

	//sum = x + y;  // 변수 2개를 더한다.
	//printf("두 수의 합: %d", sum);  // sum의 값을 10진수 형태로 출력

/*
* ---------------------------------------------
* 이름 : 원의 면적 구하기
* 교재 P. 118
* ---------------------------------------------
*/

// 예제 4. 원의 면적 구하기 프로그램
	//float radius; // 원의 반지름
	//float area; // 면적
	
	//printf("반지름을 입력하시오: ");
	//scanf("%f", &radius);
	//area = 3.14 * radius * radius;
	//printf("원의 면적 : %f\n", area);

/*
* ---------------------------------------------
* 이름 : 환율 계산 프로그램
* 교재 P. 119
* ---------------------------------------------
*/

// 예제 5. 환율계산 프로그램
	double rate; // 원/달러 환율
	double usd;  // 달러화
	int krw;  // 원화

	printf("환율을 입력하시오: ");// 입력 안내 메시지
	scanf("%lf", &rate);// 사용자로부터 환율 입력

	printf("원화 금액을 입력하시오: "); // 입력 안내 메시지
	scanf("%ld", &krw);  // 원화 금액 입력

	usd = krw / rate;  // 달러화로 환산

	printf("원화 %d원은 %f달러입니다.\n", krw, usd);  // 계산 결과 출력

/*
* ---------------------------------------------
* 이름 : 사각형의 둘레와 면적
* 교재 P. 120
* ---------------------------------------------
*/

// 예제 6. 사각형의 둘레와 면적
	double w;
	double h;
	double area;
	double perimeter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);

	return 0; // 0을 외부로 반환

/*
* ---------------------------------------------
* 이름 : 연봉계산기 프로그램
* 교재 P. 117
* ---------------------------------------------
*/

// 예제 7. 월수령액을 계산하는 프로그램
	int ysalary; // 연봉
	int msalary: // 월수령액

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("월수령액(단위: 만원): %d\n", msalary);
}