//NEEDED IF NOT USING C99
typedef enum {false, true} bool;

typedef struct CString{
	char* string;	

}CString;

CString* new(char* str);

void destroy(CString* self);

int length(CString* self);

void substring(CString* self, int startIndex, int endIndex);

char charAt(CString* self, int index);

bool compareTo(CString* self, CString* anotherString);

bool compareToIgnoreCase(CString* self, CString* str);

CString* concat(CString* self, CString* str);

bool contains(CString* self, CString* str);

int indexOf(CString* self, int ch);

int lastIndexOf(CString* self, int ch);

CString* replace(CString* self, char oldChar, char newChar);

CString* toUpperCase(CString* self);

CString* toLowerCase(CString* self);

CString* trim(CString* self);
