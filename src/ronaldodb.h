#ifndef H_RONALDODB
#define H_RONALDODB

#include <stddef.h>

int ronaldodb_init();
size_t ronaldodb_del(int db, char* key, char* ret, size_t size);
size_t ronaldodb_get(int db, char* key, char* ret, size_t size);
size_t ronaldodb_has(int db, char* key, char* ret, size_t size);
size_t ronaldodb_pop(int db, char* key, char* ret, size_t size);
size_t ronaldodb_put(int db, char* key, char* ret, size_t size, char* val);
size_t ronaldodb_ttl(int db, char* key, char* ret, size_t size);
void ronaldodb_exit(int db);

#endif
