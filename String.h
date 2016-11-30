//NEEDED IF NOT USING C99
typedef enum {false, true} bool;

typedef struct{
	int length;

	void (*substring)(int startIndex, int endIndex);
	char (*charAt)(int index);
	bool (*compareTo)(String* anotherString);
	bool (*comapreToIgnoreCase)(String* str);
	String* (*concat)(String* str);
	bool (*contains)(String* str);
	int (*indexOf)(int ch);
	int (*lastIndexOf)(int ch);
	String* (*replace)(char oldChar, char newChar);
	String* (*toUpperCase)();
	String* (*toLowerCase)();
	String* (*trim)();
}

void substring(int startIndex, int endIndex);

char charAt(int index);

bool compareTo(String* anotherString);

bool compareToIgnoreCase(String* str);

String* concat(String* str);

bool contains(String* str);

int indexOf(int ch);

int lastIndexOf(int ch);

String* replace(char oldChar, char newChar);

String* toUpperCase();

String* toLowerCase();

String* trim();
