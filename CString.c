#include "CString.h"
#include <stdlib.h>

CString* new(char* str){
	
	CString* newString = (CString*) malloc(sizeof(CString));
	newString->string = (char*) malloc(sizeof(str));
	
	int i;
	for(i=0; str[i] != '\0';i++){
		newString->string[i] = str[i];
	}

	return newString;
}

int length(CString* self){

	int i;
	for(i=0; self->string[i]!='\0'; i++){}

	return i;
}

char charAt(CString* self, int index){
	return self->string[index];
}

CString* replace(CString* self, char oldChar, char newChar){

	int i;
	for(i=0; self->string[i] != '\0'; i++){
		if(self->string[i] == oldChar){
			self->string[i] = newChar;
		}
	}

	return self;

}

CString* toLowerCase(CString* self){
	const int CHAR_OFFSET = 32;

	int i;
	for(i=0; self->string[i] != '\0'; i++){
		if(self->string[i]>65 && self->string[i] < 90){
			self->string[i] += CHAR_OFFSET;
		}
	}

	return self;

}

CString* toUpperCase(CString* self){
	const int CHAR_OFFSET = 32;

	int i;
	for(i=0; self->string[i] != '\0'; i++){
		if(self->string[i]>97 && self->string[i] < 122){
			self->string[i] -= CHAR_OFFSET;
		}
	}

	return self;
}


void destroy(CString* self){
	
	if(self != NULL){
		free(self);
		self = NULL;
	}
}
