#include <string.h>
#include "XTcp.h"

int main()
{
	for (;;)
	{
		XTcp client;
		client.CreateSocket();
		client.SetBlock(false);
		client.Connect("192.168.3.69",8080,3000);
		//client.Send("client", 6);
		char* msg = "GET / HTTP/1.1\r\n\r\n";
		client.Send(msg, strlen(msg));
		char buf[1024] = { 0 };
		client.Recv(buf, sizeof(buf));
		printf("%s\n", buf);
	}
	getchar();
	return 0;
}
