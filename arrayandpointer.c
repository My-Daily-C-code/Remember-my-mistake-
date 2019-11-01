// 포인터의 연산 
// 메모리의 접근을 위한 *연산 이외에 증가 및 감소 연산도 가능하다. --> 그러나 연산이 된다는 것보다 연산의 결과가 더 중요하다!

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int * ptr1 = 0x0010;
	double *ptr2 = 0x0010;

	printf("%p %p\n", ptr1 + 1, ptr1 + 2); // 4가 증가하고 8이 증가 한다
	printf("%p %p\n", ptr2 + 1, ptr2 + 2); // 8이 증가하고 16이 증가 한다

	printf("%p %p\n", ptr1, ptr2);
	ptr1++; // 4가 증가 한다
	ptr2++; // 8이 증가 한다

	printf("%p %p\n", ptr1, ptr2);

	return 0;
}

// int형 포인터를 대상으로 1을 증가 시키면 4가 증가 하고 double형 포인터를 대상으로 1을 증가 시키면 8이 증가 한다!
// int형 포인터를 대상으로 n증가 --> sizeof(int)의 크기 만큼 증가
// double 형 포인터를 대상으로 n증가 --> sizeof(double)의 크가 만큼 증가!!!
// 감소 연산 또한 동일하게 진행 된다. 
// 정리 하자면 TYPE형 포인터를 대상으로 n의 크기 만큼 값을 증가 및 감소 시, n*sizeof(TYPE)의 크기 만큼 주소 값이 증가 및 감소 한다!!
// 위의 포인터의 연산 특성으로 인한 예제 코드

int main()
{
	int arr[3] = { 11, 22, 33 };
	int * ptr = arr; // int *ptr=&arr[0];과 같은 문장이다!
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // 일단 여기서 11,22,33이 출력이 된다.

	printf(" %d", *ptr); ptr++; // 11출력
	printf(" %d", *ptr); ptr++; // 위의 ++ 결과인 22가 출력
	printf(" %d", *ptr); ptr--; // 위의 ++ 연산으로 33가 출력
	printf(" %d", *ptr); ptr--; // 위의 -- 연산으로 22 출력
	printf(" %d", *ptr); printf("\n"); // 위의 -- 연산으로 11출력
	return 0;
}
// 참고로 1이 증가하면 실질적으로 int의 크기 만큼 4가 증가 한다!
// *(++ptr) = 20; --> ptr에 저장된 값 자체를 변경
// *(ptr+1) = 20; --> ptr에 저장 된 값을 변경 하지 않음 


// arr[i] == *(arr+i)






// 위의 식에서 arr은 배열의 이름이어도 성립하고 포인터 변수여도 성립 한다. 