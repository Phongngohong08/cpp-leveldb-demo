#include <leveldb/db.h>
#include <string>
#include <cstring>

leveldb::DB* db;

extern "C" {
    void init(const char* path) {
        leveldb::Options options;
        options.create_if_missing = true;
        leveldb::DB::Open(options, path, &db);
    }

    void put(const char* key, const char* value) {
        db->Put(leveldb::WriteOptions(), key, value);
    }

    const char* get(const char* key) {
        std::string value;
        leveldb::Status s = db->Get(leveldb::ReadOptions(), key, &value);
        if (s.ok()) {
            return strdup(value.c_str());
        } else {
            return strdup("");  // trả về rỗng nếu không tìm thấy
        }
    }
}
