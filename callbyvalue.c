// ���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main �Լ��� �ۼ��� ���� 
// temp�� ����Կ� �־ ���Ǹ� �ؾ� �� �� ���� �κ��� ���� �Ͽ���

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	/*int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;*/ // ���� �����ߴ� �˰����� �ݴ� �������� ��� ���� ���´�. �� �̷� ������ �ڵ��� �� ���� �������� �˰����� �����ϰ� �ڵ��� �ؾ� �� �� ����. 

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp; // �̷��� �ڵ带 �����ϸ� 20 30 10 �̷� ���� ����� �ȴ�. 

}

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);

	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}
// �Լ� ȣ���� ����� num1�� ���� num2�� num2�� ����� ���� num3�� num3�� ���� �� ���� num1���� ���� �Ѵ�. 
// ����� ��� ���� 30 10 20 �̴�. 