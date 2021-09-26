#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int i=0;
	char a[100];
	int x = 0;
	int y = 0;
	printf("Enter string :");
	scanf("%s", a);
	while (a[i] != '\0') {
		if (a[i] >= 'a' && a[i] <= 'z') { x += 1; }
		else if(a[i] >= 'A' && a[i] <= 'Z') {y += 1; }
			i++;
	}
	printf("Uppercase = %d\n", y);
	printf("Lowercase = %d", x);
	return 0;
}