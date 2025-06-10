package main

/*
#cgo LDFLAGS: -L. -lcpp_leveldb
#include "cpp_leveldb.h"
#include <stdlib.h>
*/
import "C"
import (
	"fmt"
	"unsafe"
)

func main() {
	path := C.CString("mydb")
	C.init(path)
	C.free(unsafe.Pointer(path))

	key := C.CString("hello")
	value := C.CString("world")
	C.put(key, value)
	C.free(unsafe.Pointer(key))
	C.free(unsafe.Pointer(value))

	getKey := C.CString("hello")
	result := C.get(getKey)
	fmt.Println("Value from C++ LevelDB:", C.GoString(result))
	C.free(unsafe.Pointer(result))
	C.free(unsafe.Pointer(getKey))
}
