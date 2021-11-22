/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int len = strlen(str);
	char longstring[1000], shortstring[1000];
	int i = 0, longcount = 0, shortcount = 0, longest = 0, shortest = 1000;
	int longindex, shortindex;
	for(i = 0; i < len; i++) {
		if(str[i] != ' ') {
			shortcount++;
			longcount++;
		}
		else {
			if(shortcount < shortest) {
				shortest = shortcount;
				shortindex = i - shortest;
			}
			if(longcount > longest) {
				longest = longcount;
				longindex = i - longest;
			}
			shortcount = 0;
			longcount = 0;
		}
	}
	if(shortcount < shortest) {
				shortest = shortcount;
				shortindex = i - shortest;
	}
	if(longcount > longest) {
				longest = longcount;
				longindex = i - longest;
	}
	
	int j = 0;
	for(int i = longindex; i < (longindex + longest); i++) {
		longstring[j] = str[i];
		j++;
	}

	int k = 0;
	for(int i = shortindex; i < (shortindex + shortest); i++) {
		shortstring[k] = str[i];
		k++;
	}
	shortstring[k] = '\0';
	longstring[j] = '\0';

	printf("Shortest word: %s\n", shortstring);
	printf("Longest word: %s", longstring);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
