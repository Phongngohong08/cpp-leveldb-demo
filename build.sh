#!/bin/bash
set -e

echo "🔧 Building C++ shared library..."
g++ -fPIC -shared -o libcpp_leveldb.so cpp_leveldb.cpp -lleveldb

# Build Go binary with correct library path
echo "🔧 Building Go program with library path set..."
go build -ldflags "-r=." -o cpp_leveldb_demo go_main.go

echo "✅ Done! You can now run: ./cpp_leveldb_demo"
