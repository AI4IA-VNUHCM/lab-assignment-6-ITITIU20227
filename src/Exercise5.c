/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int len = strlen(str);
	char half1[100], half2[100], check[100];
	
	if(len % 2 != 0) {
		printf("Invalid!");
	}
	else {
		for(int i = 0; i < (len/2); i++) {
			half1[i] = str[i];
		}

		int half2index = 0;
		for(int j = len/2; j < len; j++) {
			half2[half2index] = str[j];
			half2index++;
		}
		half2[half2index] = '\0';

		for(int i = 0; i < len/2; i++) {
			if(half2[i] == ']') {
				half2[i] = '[';
			}
			else if(half2[i] == '}') {
				half2[i] = '{';
			}
			else if(half2[i] == ')') {
				half2[i] = '(';
			}
		}

		int j = 0;
		for(int i = (len/2) - 1; i >= 0; i--) {
			check[j] = half2[i];
			j++;
		}
		check[j] = '\0';
	
		if(strcmp(check, half1) == 0) {
			printf("Valid!");
		}
		else {
			printf("Invalid!");
		}
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
