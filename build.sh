#!/bin/bash
set -e

echo "🔧 Building C++ shared library..."
g++ -fPIC -shared -o libcpp_leveldb.so cpp_leveldb.cpp -lleveldb

echo "✅ Done! Run: go run go_main.go"
