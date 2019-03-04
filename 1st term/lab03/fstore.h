#ifndef fstore_h
#define fstore_h

typedef struct fstore {

    int (*pointer)(int);
	int argument;

} fstore;

int init(fstore *ptr,  int (*ptrFunction)(int), int arg);

int call(fstore *ptr);

int callWithArg(fstore *ptr, int arg);

#endif
