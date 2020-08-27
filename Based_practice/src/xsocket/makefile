libxsocket.so:XTcp.cpp XTcp.h XUdp.h XUdp.cpp
	g++ $+ -o $@ -fpic -shared -std=c++11 
	cp *.so ../../bin 
clean:
	rm -rf ../../bin/libxsocket.so
	rm -rf libxsocket.so
	
