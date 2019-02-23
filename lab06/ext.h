#ifndef ext_h
#define ext_h

struct Ext {

    int *data;
    int size;
    int capacity;
    int (*allocator)(int);
};

void init(Ext *vector);

void initWithSizeAndPolicy(Ext *vector, int places, int (*function)(int));

inline int size(const Ext *vector) { return vector->size; }

inline int at(const Ext *vector, int index) { return vector->data[index]; }

inline void clear(Ext *vector) { if(vector) delete [] vector->data; }

int capacity(Ext *vector);

void insert(Ext *vector, int value);

#endif
