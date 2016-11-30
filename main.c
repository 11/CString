#include <stdio.h>
#include "CString.h"

int main()
{
	
	CString* str = new("test");
	printf("\n%s", str->string);

	return 0;
}
