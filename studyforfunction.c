// 함수의 정의에 관해 정리를 한 page이다.
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int Add(int num1, int num2) // 인자 전달o 반환 값o
{
	return num1 + num2;

}
// void가 매개 변수로도, 반환형으로도 선언이 되어 있지 않으므로 인자 전달과 반환 값을 모두 갖겠다는 의미이다. 간단히 말해 (인자)이므로 ()안에 들어 있는 값이 인자를 전달하게 된다. 반환 값은 말 그대로 받은 인자를 'return 반환'으로 반환을 한다는 의미이다.
void ShowAddResult(int num) // 인자 전달o 반환 값x
{
	printf("The result of the add: %d\n", num);
}
// 여기서 반환 형으로 void를 사용하였기 때문에 반환을 하지 않는 다는 의미이며, 그래서 return문이 존재하지 않는다.
int ReadNum(void) // 인자전달x 반환값o
{
	int num;
	scanf_s("%d", &num);
	return num;
}
// 여기서는 매개변수로 void를 선언하였기 때문에 인자를 전달하지 않는다는 의미이며 실제로 함수가 실행 될 떄 인자를 전달하지 않는다.
void HowToUseThisProg(void) // 인자 전달 x 반환 값 x
{

	printf("Insert the two number to see the result: \n");
	printf("Please insert the number \n");
}

int main()
{

	int result, num1, num2; // 일단 값을 입력 받아야 하므로 값을 초기화 해준다
	HowToUseThisProg(); // 필요한 함수를 출력 한다.
	num1 = ReadNum(); // 각 값들이 어디 들어가는지 값을 지정한다.
	num2 = ReadNum();
	result = Add(num1, num2); // 여기도 마찬가지, result가 어떻게 사용이 될지 값을 지정한다
	ShowAddResult(result); // 결과물인 result를 반환 값으로 출력을 하기 위해 ()안에 result를 넣어서 반환을 하였다.
	return 0;
}

//void를 매개변수 선언의 위치에 선언을 하면 인자를 전달하지 않는다는 의미이다. 따라서 함수를 호출 할 때, 실제 인자를 전달하지 않는다.
//void를 반환 형으로 선언을 한 겨우 반환을 하지 않는 다는 뜻이고, 이 함수 안에는 return문이 존재하지 않는다.

// return이 가지는 두 가지 의미 중 한 가지 의미만 살리기
// return은 값을 반환하면서 함수를 빠져나갈 때 사용된다. 즉 return엔 1.함수를 빠져나간다 2.값을 반환한다 이렇게 2가지 의미가 있다.
//반환형이 void로 사용이 된 경에도 return을 사용 할 수 있는데

int NoreturnType(int num)
{
	if (num < 0)
		return; // 값을 반환하지 않는 return문이다! --> 반환 하는 값 없이 그냥 함수를 빠져 나간다!

}
// 이런 방향으로도 사용이 가능하다.
// 함수를 만들 때 먼저 선언을 하고 뒤에서 정의를 해도 된다. 왜냐하면 컴파일러가 뒤에서 정의를 할 것을 알고 있기 때문이다. 