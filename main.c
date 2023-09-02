#include "ronaldodb.h"

#include <stdio.h>

int main()
{
    char buffer[128];
    int db = ronaldodb_init();
    ronaldodb_put(db, "foo", NULL, 0, "hello world!");
    ronaldodb_get(db, "foo", buffer, sizeof(buffer));
    printf("key foo: '%s'\n", buffer);
    ronaldodb_exit(db);
    return 0;
}
