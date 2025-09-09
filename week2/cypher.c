#include<stdio.h>
#include<string.h>

void cypher(char* msg, int sht) {
	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];

		//암호(대문자)
		if (ch > 'A' && ch <= 'Z') {
			ch = ch + sht;

			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			else if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}
			msg[i] = ch;
		}
		//암호(소문자)
		if (ch > 'a' && ch <= 'z') {
			ch = ch + sht;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}
			msg[i] = ch;
		}
	}
}

int main(void) {
	//메세지받기
	char message[100];
	printf("Enter amessage: ");
	fgets(message, sizeof(message), stdin);
		//암호 값 주기
	int shift;
	scanf_s("%d", &shift);

	//암호로 변경
	cypher(message, shift);

	//암호된 메시지 출력
	printf("Encrypted %s", message);

	return 0;
}