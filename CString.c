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
