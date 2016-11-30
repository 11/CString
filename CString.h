//NEEDED IF NOT USING C99
typedef enum {false, true} bool;

typedef struct CString{
	
	char* string;
	
	int (*length)(struct CString* self);
	void (*substring)(struct CString* self, int startIndex, int endIndex);
	char (*charAt)(struct CString * self, int index);
	bool (*compareTo)(struct CString* self, struct CString* anotherString);
	bool (*comapreToIgnoreCase)(struct CString self, struct CString* str);
	struct CString* (*concat)(struct CString* self, struct CString* str);
	bool (*contains)(struct CString* self, struct CString* str);
	int (*indexOf)(struct CString* self, int ch);
	int (*lastIndexOf)(struct CString* self, int ch);
	struct CString* (*replace)(struct CString* self, char oldChar, char newChar);
	struct CString* (*toUpperCase)(struct CString* self);
	struct CString* (*toLowerCase)(struct CString* self);
	struct CString* (*trim)();
}CString;

CString* new(char* str);

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
