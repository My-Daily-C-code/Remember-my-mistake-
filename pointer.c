// int�� ���� num1�� num2�� ����� ���ÿ� ���� 10�� 20���� �ʱ�ȭ �ϰ�, int�� Ǥ�� ���� ptr1�� ptr2�� �����Ͽ� ����num1�� num2�� ����Ű�� �Ѵ�
// �׸��� �� ���¿��� ������ ���� ptr�� prt2�� �̿��ؼ� num1�� num2��  ���� 10���� 10���� ��Ų��.
// ���� �� ������ ���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ۴�. �� ������ ���� ptr1�� num2�� ����Ű�� �ϰ� �� �ݴ�� �����
// �������� �� 2���� ���� ��� �Ѵ�.

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *temp;
	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("*ptr1 = %d  ptr2 = %d", *ptr1, *ptr2);

	return 0;
}
// ���� �����ϴ� ���� �������� tmep�� ����ؼ� �ϴ� ������ �˰� �Ǿ���.