#include <stdio.h>
#include <stdlib.h>

// �Ѵ� �������� �����ߵ�

int main() {
	char* str1 = "ABABAB";
	char* str2 = "ABAB";
	char* output = (char*)calloc(2001, sizeof(char));
	int w = 0;
	int fin = 0, s1 = 0, s2 = 0;
	
	while (!fin) {
		if (str1[w] == '\0' || str2[w] == '\0')
			break;
		else 
		{
			if (str1[w] == str2[w])
				output[w] = str1[w];
			// if output���� str1�� str2�� ����
			// �������� break
			// �� �������� continue
			// str1�� a�� ���������� �˻�, str2�� ����
			// str1�� ab�� ���������� �˻�, =
			for (int i = 0; str1[i] == '\0'; ++i) {
				if (str1[i] == output[w])
					s1 = 1;
			}
			for (int i = 0; str2[i] == '\0'; ++i) {
				if (str2[i] == output[w])
					s2 = 1;
			}

			//++s1;
			//++s2;
			++w;
		}
		
	}
	printf("Output: %s\n", output);
	free(output);
	return 0;
}
