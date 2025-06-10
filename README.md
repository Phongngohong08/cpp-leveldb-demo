# LevelDB Demo - C++ and Go Integration

This project demonstrates the integration between C++ LevelDB and Go, showing how to use LevelDB functionality across both languages.

## Tiếng Việt

### Yêu cầu hệ thống
- Go đã được cài đặt trên máy
- Trình biên dịch C++ (gcc/g++)
- Thư viện phát triển LevelDB

### Cài đặt các công cụ cần thiết

1. Cài đặt trình biên dịch C và C++:
```bash
sudo apt update
sudo apt install build-essential
```

2. Cài đặt thư viện LevelDB C++:
```bash
sudo apt-get install libleveldb-dev
```

3. Build thư viện chia sẻ:
```bash
chmod +x build.sh
./build.sh
```

4. Chạy chương trình Go:
```bash
go run go_main.go
```

### Kết quả mong đợi
```
Value from C++ LevelDB: world
```
