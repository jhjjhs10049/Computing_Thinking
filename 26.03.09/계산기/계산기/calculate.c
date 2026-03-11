#include <stdio.h>

void calculate(void) {

	int num1 = 0, num2 = 0;
	char op = 0;
	int result = 0;

	printf("첫번째 숫자 입력 : ");
	scanf("%d", &num1);
	getchar();
	printf("연산자를 입력하세요 : ");
	scanf("%c", &op);
	getchar();
	printf("두번째 숫자 입력 : ");
	scanf("%d", &num2);
	getchar();

	result = func(num1, op, num2);
	
	printf("연산결과 : %d %c %d = %d \n",num1, op, num2, result);
}