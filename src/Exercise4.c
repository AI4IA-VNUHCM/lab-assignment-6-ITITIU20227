/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	char newstring[1000];
	int i = 0, j = 0;

	while(str[i] != '\0') {
		if(!(str[i] == ' ' && str[i+1] == ' ')) {
			newstring[j] = str[i];
			j++;
		}
		i++;
	}

	newstring[j] = '\0';

	printf("%s", newstring);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}