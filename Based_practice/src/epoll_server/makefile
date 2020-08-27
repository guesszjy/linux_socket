epoll_server:epoll_server.cpp
	g++ $+ -o $@ -I../xsocket  -std=c++11 -lpthread -lxsocket -L../xsocket -g
	cp $@ ../../bin
clean:
	rm -rf ../../bin/epoll_server
	rm -rf epoll_server
