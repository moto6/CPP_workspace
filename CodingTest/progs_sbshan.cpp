#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int n);
int main(void) {
	printf("%s",solution(5));
	print("")
}

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(sizeof(char)*n*2);
    int i=0;
    for(i=0 ; i < n ; i=i+4) {
		answer[i]="��";
		answer[i+2]="��";
	//	strcpy(answer,s2);
	//	puts("strcpy");
	}
	if(n%2==1) {
		answer[i-1] = '\n';
	}
	else {
		answer[i] = '\n';
	}
	
    return answer;
}