#include <stdio.h>
#include "CString.h"

int main()
{
	
	CString* str = new("test");
	printf("%d\n", lastIndexOf(str,'t'));
	
	destroy(str);
	
	return 0;
}
