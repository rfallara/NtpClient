/*
 * NtpClient.h
 *
 * Created: 2/26/2015 3:02:49 PM
 *  Author: rofallar
 */ 


#ifndef NTPCLIENT_H_
#define NTPCLIENT_H_

#include <Ethernet.h>
#include <EthernetUdp.h>

#define NTP_PACKET_SIZE 48

class NtpClientClass {
	
	private:
		unsigned int localPort;
		byte packetBuffer[NTP_PACKET_SIZE];
		//EthernetUDP& Udp;
		void sendNtpPacket(IPAddress& address );
		
	public:
		IPAddress timeServer;
		
		NtpClientClass();
		NtpClientClass(IPAddress timeServer, EthernetUDP& Udp);
		
		unsigned long getEpoch();
		void begin(IPAddress timeServer, EthernetUDP& Udp);
	
	};




#endif /* NTPCLIENT_H_ */