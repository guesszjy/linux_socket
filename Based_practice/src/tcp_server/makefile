tcp_server:tcp_server.cpp
	g++ $+ -o $@ -I../xsocket  -std=c++11 -lpthread -lxsocket -L../xsocket
	cp $@ ../../bin/
clean:
	rm -f tcp_client
	rm -f ../../bin/tcp_client
