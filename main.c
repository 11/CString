#include <stdio.h>
#include "CString.h"

int main()
{
	
	CString* str = new("test");
	toUpperCase(str);
	printf("%s\n", str->string);
	
	destroy(str);
	if(str == NULL) printf("hi");
	
	return 0;
}
