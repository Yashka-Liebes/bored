#ifndef STRING_H_
#define STRING_H_



#define LENGTH 30000
#define AFTERLAST -1



typedef struct {
	char chars[LENGTH];
} String;



extern const String ZERO_STR;



/* returns String initialized with zeros */
String initstring();
String tostring(char* source);
String inttostring(int n, int numofdigits);
int gettoken(String source, int pos, String *tocen, int delimiter, ...);
int instring(String source, int sourceindex, String pattern);
int isdevided(String s, int n);
int multiply(String s, int n);
void tocharptr(String source, char *p, int maxptrsize);


#endif /* STRING_H_ */
