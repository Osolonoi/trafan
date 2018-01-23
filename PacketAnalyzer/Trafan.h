#pragma once
// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include "stdio.h"
#include "winsock2.h"   //need winsock for inet_ntoa and ntohs methods
#define HAVE_REMOTE
#include "pcap.h"   //Winpcap :)
#include "TrafStat.h"
#pragma comment(lib , "ws2_32.lib") //For winsock
#pragma comment(lib , "wpcap.lib") //For winpcap

public ref class Trafan
{
	//some packet processing functions
public:
	System::Windows::Forms::DataGridView^ DataGridView1;
	u_int Inum;


	Trafan();
	void Initialize();
	void PrintIpHeader(unsigned char*, int);
	void PrintData(u_char*, int);
	void ProcessPacket(u_char*, int); //This will decide how to digest
	void print_ethernet_header(u_char*);
	void PrintIcmpPacket(u_char*, int);
	void print_udp_packet(u_char*, int);
	void PrintTcpPacket(u_char*, int);

};

