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


void destroy(CString* self){
	
	if(self != NULL){
		free(self);
		self = NULL;
	}
}
