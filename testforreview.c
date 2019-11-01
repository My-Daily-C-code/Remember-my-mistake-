// 상수 형태의 문자열을 가르키는 포인터

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{

	char str1[] = "my string"; // 변수 형태의 문자열
	char *str2 = "your string"; // 상수 형태의 문자열
	
	printf("%s %s\n", str1, str2);
	str2 = "our string";
	printf("%s %s", str1, str2);

	str1[0] = 'X'; // 문자열 변경 성공!
 	str2[0] = 'X'; // 문자열 변경 실패! 
	printf("%s %s\n", str1, str2);

	return 0;
}