#함수 정의
def func(num1, num2, op):
    result = 0

    if op == "+":
        result = num1 + num2
    elif op == "-":
        result = num1 - num2
    elif op == "*":
        result = num1 * num2
    elif op == "/":
        result = num1 / num2

    return result


# 변수 선언 부분
result = 0
num1, num2, op = 0, 0, ""

#메인 코드 부분
num1 = int(input("첫번째 숫자 입력 : "))
op = input("연산자 입력 (+,-,*,/) : ")
num2 = int(input("두번째 숫자 입력 : "))


result = func(num1, num2, op)

print(f"{num1} {op} {num2} = {result} 입니다.")
           


