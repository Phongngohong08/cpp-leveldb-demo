#ifndef CPP_LEVELDB_H
#define CPP_LEVELDB_H

#ifdef __cplusplus
extern "C" {
#endif

void init(const char* path);
void put(const char* key, const char* value);
const char* get(const char* key);

#ifdef __cplusplus
}
#endif

#endif
