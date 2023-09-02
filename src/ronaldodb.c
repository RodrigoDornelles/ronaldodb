#include "ronaldodb.h"
#include <stdint.h>

enum ronaldo_type_e {
    R_TYPE_ROOT,
    R_TYPE_UUID,
    R_TYPE_KEY,
    R_TYPE_NUM,
};

struct ronaldo_node_s {
    enum ronaldo_type_e type_self;
    enum ronaldo_type_e type_child;
    union {
        struct {
            uint32_t djb2;
            uint32_t sdbm;
            char* key;
        } key;
        size_t index;
    } hash;
    struct ronaldo_node_s** children;
    struct ronaldo_node_s* brother;
    char* value;
};

static struct ronaldo_node_s* hypervisor = NULL;
static size_t instances = 0;

int ronaldodb_init()
{
    return 0;
}

size_t ronaldodb_del(int db, char* key, char* ret, size_t size)
{
    return 0;
}

size_t ronaldodb_get(int db, char* key, char* ret, size_t size)
{
    return 0;
}

size_t ronaldodb_has(int db, char* key, char* ret, size_t size)
{
    return 0;
}

size_t ronaldodb_pop(int db, char* key, char* ret, size_t size)
{
    return 0;
}

size_t ronaldodb_put(int db, char* key, char* ret, size_t size, char* val)
{
    return 0;
}

size_t ronaldodb_ttl(int db, char* key, char* ret, size_t size)
{
    return 0;
}

void ronaldodb_exit(int db)
{

}
