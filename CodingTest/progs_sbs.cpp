#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int n);
int main(void) {
	printf("%s",solution(5));
}

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char) * n);
    int i=0;
    for(i=0 ; i < n ; i=i+2) {
		answer[i]='s';
		answer[i+1]='b';
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
