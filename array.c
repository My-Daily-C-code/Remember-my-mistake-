
	


		while (voca[len] != '\0') //끝에 NULL문자를 삽입하여 문장의 시작과 끝을 알려주는 코드이다.
		len++; 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		 char str[] = { 'a', 'b', 'c', 'd', 'e' };
		 int arrLen = sizeof(str) / sizeof(char); // 배열의 길이를 계산하는 코드는 이렇게 사용한다! 암기!! 

///////////////////////////////////////////////////////////////////////////////////////////////////////////

		 // %s로 인자를 전달 받는 경우 2가지를 유의해야 한다. 
		 // scanf_s가 아닌 scanf를 사용하며
		 // 뒤에 &를 사용하지 않는다.
		 // 예시
		 scanf("%s", voca); // 이런 식으로 입력을 하면 된다.


//////////////////////////////////////////////////////////////////////////////////////////////////////////
		