from socket import *
from time import time

serverName = 'localhost'
serverPort = 12000
clientSocket = socket(AF_INET, SOCK_DGRAM)
clientSocket.settimeout(2.0);
l=[]
for i in range(1, 11):
 sentTime = time();
 message = "Ping " + str(i) + " " + str(sentTime)
 try:
 clientSocket.sendto(message.encode(), (serverName, serverPort))
 retMessage, serverAddress = clientSocket.recvfrom(2048)
 RTT = time() - sentTime
 l.append(RTT)
 print("{} RTT = {:.5f}".format(retMessage.decode(), RTT))
 except Exception as e:
 # print(e)
 print("Request timed out")
 maxRTT = max(l)
minRTT = min(l)
avgRTT = sum(l)/len(l)
packetLoss = (10-len(l))/10*100
print("Max RTT = {:.5f}".format(maxRTT))
print("Min RTT = {:.5f}".format(minRTT))
print("Avg RTT = {:.5f}".format(avgRTT))
print("Packet Loss = {:.2f}%".format(packetLoss))
clientSocket.close()