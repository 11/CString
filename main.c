#include <stdio.h>
#include "CString.h"

int main()
{
	
	CString* str = new("test");
	printf("%c\n", charAt(str,0));
	
	destroy(str);
	if(str == NULL) printf("hi");
	
	return 0;
}
