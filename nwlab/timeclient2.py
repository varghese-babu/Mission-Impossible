import socket

msgFromClient =""
bytesToSend = str.encode(msgFromClient)

serverAddressPort = ("127.0.0.1",20001)
bufferSize = 1024 

UDPClientSocket = socket.socket(family=socket.AF_INET,type=socket.SOCK_DGRAM)

UDPClientSocket.sendto(bytesToSend,serverAddressPort)
msgFromServer = UDPClientSocket.recvfrom(bufferSize)

msg = "time Received from server is {}".format(msgFromServer[0])
print(msg)