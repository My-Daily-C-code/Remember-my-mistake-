// ��� ������ ���ڿ��� ����Ű�� ������

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	char str1[] = "my string"; // ���� ������ ���ڿ�
	char *str2 = "your string"; // ��� ������ ���ڿ�
	
	printf("%s %s\n", str1, str2);
	str2 = "our string";
	printf("%s %s", str1, str2);

	str1[0] = 'X'; // ���ڿ� ���� ����!
 	str2[0] = 'X'; // ���ڿ� ���� ����! 
	printf("%s %s\n", str1, str2);

	return 0;
}