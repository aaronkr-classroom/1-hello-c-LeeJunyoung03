#include<stdio.h>
#include<string.h>

void cypher(char* msg, int sht) {
	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];

		//��ȣ(�빮��)
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
		//��ȣ(�ҹ���)
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
	//�޼����ޱ�
	char message[100];
	printf("Enter amessage: ");
	fgets(message, sizeof(message), stdin);
		//��ȣ �� �ֱ�
	int shift;
	scanf_s("%d", &shift);

	//��ȣ�� ����
	cypher(message, shift);

	//��ȣ�� �޽��� ���
	printf("Encrypted %s", message);

	return 0;
}