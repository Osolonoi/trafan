#pragma once
#include "TrafanData.h"
#include "winsock2.h"   //need winsock for inet_ntoa and ntohs methods
#define HAVE_REMOTE
#include "pcap.h"   //Winpcap :)

#pragma comment(lib , "ws2_32.lib") //For winsock
#pragma comment(lib , "wpcap.lib") //For winpcap

namespace PacketAnalyzer
{

	using System::String;

	delegate void AddListItem(array<String^>^ items);

	delegate void SetDevicesDelegate(array<String^>^ devices);

	delegate void DelegateThreadTask();

	public ref class Trafan
	{
	public:
		DelegateThreadTask ^ DelToRun;
		System::Windows::Forms::Form^ _form;
		AddListItem ^_delToRun;
		SetDevicesDelegate ^ _setDevicesDelegate;

		int counter = 0;
		String ^_fieldProt;
		String ^_fieldSrcMac;
		String ^_fieldSrcIp;





		FILE *logfile;
		int tcp = 0, udp = 0, icmp = 0, others = 0, igmp = 0, total = 0, i, j;
		struct sockaddr_in *source, *dest;
		char ^hex;

		//Its free!
		ETHER_HDR *ethhdr;
		IPV4_HDR *iphdr;
		TCP_HDR *tcpheader;
		UDP_HDR *udpheader;
		ICMP_HDR *icmpheader;
		u_char *data;

		//System::Windows::Forms::DataGridView^ DataGridView1;


		Trafan(System::Windows::Forms::Form^, AddListItem ^);

		void Run();
		void AddRow();
		array<String^>^ GetDevices();

		void Initialize(u_int);
		void PrintIpHeader(unsigned char*, int);
		void PrintData(u_char*, int);
		void ProcessPacket(u_char*, int); //This will decide how to digest
		void print_ethernet_header(u_char*);
		void PrintIcmpPacket(u_char*, int);
		void print_udp_packet(u_char*, int);
		void PrintTcpPacket(u_char*, int);
	private:
	};
}
