# Refer的代码储备库

## [网络编程相关]

### [socket_server_level1]

实现了多进程的socket server,  基本的IO响应函数

### [socket_server_level2]
remote bind shell, 利用signal处理僵尸子进程问题，实现了基本的后门


### [socket_server_level3]
打算实现客户端信息的获取,比如说发送ip, 主要是文件描述和sockaddr结构体或者更多深入的结构怎么调用的问题


待完成。。。。

### [pthread_base.c]
线程的基本运用，主要的三个函数，pthread_create, pthread_exit, pthread_join

### [pthread_mutex.c]
互斥锁的使用，待完成。。。。保证对某一资源的访问某一时刻仅有一个线程
