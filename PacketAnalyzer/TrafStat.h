#pragma once
#include "Trafan.h"


namespace PacketAnalyzer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;


	/// <summary>
	/// Summary for TrafStat
	/// </summary>
	public ref class TrafStat : public System::Windows::Forms::Form
	{
	public:
		delegate void AddListItem(String ^ items);
		AddListItem^ myDelegate;
	public:
		TrafStat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void ThreadFunction();

		void AddListItemMethod(String ^ items)
		{
			String^ myItem;
			for (int i = 1; i < 6; i++)
			{
				myItem = "MyListItem {0}", i;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[dataGridView1->RowCount - 1]->Cells["Prot"]->Value = items[0];
				dataGridView1->Update();
				Thread::Sleep(300);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrafStat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;

			 Thread^ myThread;

	protected:












	private: System::Windows::Forms::Label^  Filter;

	private: System::Windows::Forms::Label^  NIC;

	private: System::Windows::Forms::Label^  Quantity;
	private: System::Windows::Forms::Label^  BadPack;



	private: System::Windows::Forms::Label^  Bytes;


	private: System::Windows::Forms::ComboBox^  comboBox1;



	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IPvers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SrcIP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SrcMac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SrcPort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DstIP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DstMac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DstPort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prot;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TTL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PckLength;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Checksum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TCPFlag;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Anomaly;





























































































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Filter = (gcnew System::Windows::Forms::Label());
			this->NIC = (gcnew System::Windows::Forms::Label());
			this->Quantity = (gcnew System::Windows::Forms::Label());
			this->BadPack = (gcnew System::Windows::Forms::Label());
			this->Bytes = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IPvers = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SrcIP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SrcMac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SrcPort = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DstIP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DstMac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DstPort = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prot = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TTL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PckLength = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Checksum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TCPFlag = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Anomaly = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->No, this->IPvers,
					this->SrcIP, this->SrcMac, this->SrcPort, this->DstIP, this->DstMac, this->DstPort, this->Prot, this->TTL, this->PckLength, this->Checksum,
					this->TCPFlag, this->Anomaly
			});
			this->dataGridView1->Location = System::Drawing::Point(7, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(783, 297);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TrafStat::dataGridView1_CellContentClick);
			// 
			// Filter
			// 
			this->Filter->AutoSize = true;
			this->Filter->Location = System::Drawing::Point(456, 9);
			this->Filter->Name = L"Filter";
			this->Filter->Size = System::Drawing::Size(29, 13);
			this->Filter->TabIndex = 1;
			this->Filter->Text = L"Filter";
			// 
			// NIC
			// 
			this->NIC->AutoSize = true;
			this->NIC->Location = System::Drawing::Point(12, 9);
			this->NIC->Name = L"NIC";
			this->NIC->Size = System::Drawing::Size(133, 13);
			this->NIC->TabIndex = 2;
			this->NIC->Text = L"Network Interface Cotroller";
			// 
			// Quantity
			// 
			this->Quantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Quantity->AutoSize = true;
			this->Quantity->Location = System::Drawing::Point(62, 333);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(46, 13);
			this->Quantity->TabIndex = 3;
			this->Quantity->Text = L"Qauntity";
			// 
			// BadPack
			// 
			this->BadPack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->BadPack->AutoSize = true;
			this->BadPack->Location = System::Drawing::Point(508, 350);
			this->BadPack->Name = L"BadPack";
			this->BadPack->Size = System::Drawing::Size(65, 13);
			this->BadPack->TabIndex = 4;
			this->BadPack->Text = L"BadPackets";
			// 
			// Bytes
			// 
			this->Bytes->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Bytes->AutoSize = true;
			this->Bytes->Location = System::Drawing::Point(216, 333);
			this->Bytes->Name = L"Bytes";
			this->Bytes->Size = System::Drawing::Size(33, 13);
			this->Bytes->TabIndex = 6;
			this->Bytes->Text = L"Bytes";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Qualcomm Atheros", L"Intel Centrino" });
			this->comboBox1->Location = System::Drawing::Point(151, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TrafStat::comboBox1_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"SrcIP", L"SrcMac", L"DstPort", L"Prot", L"PckLength",
					L"TCPFlag"
			});
			this->comboBox3->Location = System::Drawing::Point(491, 6);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 10;
			// 
			// No
			// 
			this->No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->No->FillWeight = 22;
			this->No->HeaderText = L"No";
			this->No->Name = L"No";
			this->No->Width = 46;
			// 
			// IPvers
			// 
			this->IPvers->HeaderText = L"IPvers";
			this->IPvers->Name = L"IPvers";
			this->IPvers->ReadOnly = true;
			this->IPvers->Width = 62;
			// 
			// SrcIP
			// 
			this->SrcIP->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->SrcIP->FillWeight = 122;
			this->SrcIP->HeaderText = L"SrcIP";
			this->SrcIP->Name = L"SrcIP";
			this->SrcIP->Width = 58;
			// 
			// SrcMac
			// 
			this->SrcMac->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->SrcMac->FillWeight = 122;
			this->SrcMac->HeaderText = L"SrcMac";
			this->SrcMac->Name = L"SrcMac";
			this->SrcMac->Width = 69;
			// 
			// SrcPort
			// 
			this->SrcPort->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->SrcPort->HeaderText = L"SrcPort";
			this->SrcPort->Name = L"SrcPort";
			this->SrcPort->ReadOnly = true;
			this->SrcPort->Width = 67;
			// 
			// DstIP
			// 
			this->DstIP->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DstIP->FillWeight = 122;
			this->DstIP->HeaderText = L"DstIP";
			this->DstIP->Name = L"DstIP";
			this->DstIP->Width = 58;
			// 
			// DstMac
			// 
			this->DstMac->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DstMac->FillWeight = 122;
			this->DstMac->HeaderText = L"DstMac";
			this->DstMac->Name = L"DstMac";
			this->DstMac->Width = 69;
			// 
			// DstPort
			// 
			this->DstPort->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DstPort->HeaderText = L"DstPort";
			this->DstPort->Name = L"DstPort";
			this->DstPort->Width = 67;
			// 
			// Prot
			// 
			this->Prot->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Prot->FillWeight = 50;
			this->Prot->HeaderText = L"Prot";
			this->Prot->Name = L"Prot";
			this->Prot->Width = 51;
			// 
			// TTL
			// 
			this->TTL->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->TTL->FillWeight = 50;
			this->TTL->HeaderText = L"TTL";
			this->TTL->Name = L"TTL";
			this->TTL->Width = 52;
			// 
			// PckLength
			// 
			this->PckLength->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->PckLength->FillWeight = 50;
			this->PckLength->HeaderText = L"PckLength";
			this->PckLength->Name = L"PckLength";
			this->PckLength->Width = 84;
			// 
			// Checksum
			// 
			this->Checksum->HeaderText = L"Checksum";
			this->Checksum->Name = L"Checksum";
			this->Checksum->Width = 82;
			// 
			// TCPFlag
			// 
			this->TCPFlag->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->TCPFlag->FillWeight = 50;
			this->TCPFlag->HeaderText = L"TCPFlag";
			this->TCPFlag->Name = L"TCPFlag";
			this->TCPFlag->Width = 73;
			// 
			// Anomaly
			// 
			this->Anomaly->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Anomaly->HeaderText = L"Anomaly";
			this->Anomaly->Name = L"Anomaly";
			this->Anomaly->ReadOnly = true;
			this->Anomaly->Width = 72;
			// 
			// TrafStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(802, 372);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Bytes);
			this->Controls->Add(this->BadPack);
			this->Controls->Add(this->Quantity);
			this->Controls->Add(this->NIC);
			this->Controls->Add(this->Filter);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"TrafStat";
			this->Text = L"TrafStat";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			myDelegate = gcnew AddListItem(this, &TrafStat::AddListItemMethod);


		}
#pragma endregion


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		/*dataGridView1->Columns->Clear();
		dataGridView1->ColumnCount = 2;*/
		//dataGridView1->Rows->Add(10); //Добавили 10 строк
		/*dataGridView1->Columns[0]->Name = "X";
		dataGridView1->Columns[1]->Name = "Y(X)"; */

		/*ThreadStart^ threadDelegate = gcnew ThreadStart(Trafanobject, &Trafan::Initialize);
		Thread^ newThread = gcnew Thread(threadDelegate);
		newThread->Start();*/
		// Trafanobject->Initialize(comboBox1->SelectedIndex + 1, dataGridView1);

/*myThread = gcnew Thread(gcnew ThreadStart(Trafanobject, &Trafan::Initialize));
myThread->Start();*/
		myThread = gcnew Thread(gcnew ThreadStart(this, &TrafStat::ThreadFunction));
		myThread->Start();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}


	};

	// Set the packing to a 1 byte boundary
	//#include "pshpack1.h"
	//Ethernet Header
	typedef struct ethernet_header
	{
		UCHAR dest[6];
		UCHAR source[6];
		USHORT type;
	}   ETHER_HDR, *PETHER_HDR, FAR * LPETHER_HDR, ETHERHeader;

	//Ip header (v4)
	typedef struct ip_hdr
	{
		unsigned char ip_header_len : 4; // 4-bit header length (in 32-bit words) normally=5 (Means 20 Bytes may be 24 also)
		unsigned char ip_version : 4; // 4-bit IPv4 version
		unsigned char ip_tos; // IP type of service
		unsigned short ip_total_length; // Total length
		unsigned short ip_id; // Unique identifier

		unsigned char ip_frag_offset : 5; // Fragment offset field

		unsigned char ip_more_fragment : 1;
		unsigned char ip_dont_fragment : 1;
		unsigned char ip_reserved_zero : 1;

		unsigned char ip_frag_offset1; //fragment offset

		unsigned char ip_ttl; // Time to live
		unsigned char ip_protocol; // Protocol(TCP,UDP etc)
		unsigned short ip_checksum; // IP checksum
		unsigned int ip_srcaddr; // Source address
		unsigned int ip_destaddr; // Source address
	} IPV4_HDR;

	//UDP header
	typedef struct udp_hdr
	{
		unsigned short source_port; // Source port no.
		unsigned short dest_port; // Dest. port no.
		unsigned short udp_length; // Udp packet length
		unsigned short udp_checksum; // Udp checksum (optional)
	} UDP_HDR;

	// TCP header
	typedef struct tcp_header
	{
		unsigned short source_port; // source port
		unsigned short dest_port; // destination port
		unsigned int sequence; // sequence number - 32 bits
		unsigned int acknowledge; // acknowledgement number - 32 bits

		unsigned char ns : 1; //Nonce Sum Flag Added in RFC 3540.
		unsigned char reserved_part1 : 3; //according to rfc
		unsigned char data_offset : 4; /*The number of 32-bit words in the TCP header.
									   This indicates where the data begins.
									   The length of the TCP header is always a multiple
									   of 32 bits.*/

		unsigned char fin : 1; //Finish Flag
		unsigned char syn : 1; //Synchronise Flag
		unsigned char rst : 1; //Reset Flag
		unsigned char psh : 1; //Push Flag
		unsigned char ack : 1; //Acknowledgement Flag
		unsigned char urg : 1; //Urgent Flag

		unsigned char ecn : 1; //ECN-Echo Flag
		unsigned char cwr : 1; //Congestion Window Reduced Flag

							   ////////////////////////////////

		unsigned short window; // window
		unsigned short checksum; // checksum
		unsigned short urgent_pointer; // urgent pointer
	} TCP_HDR;

	typedef struct icmp_hdr
	{
		BYTE type; // ICMP Error type
		BYTE code; // Type sub code
		USHORT checksum;
		USHORT id;
		USHORT seq;
	} ICMP_HDR;
	ref class MyThreadClass
	{


		// Restore the byte boundary back to the previous value
		//#include <poppack.h>

		FILE *logfile;
		int tcp = 0, udp = 0, icmp = 0, others = 0, igmp = 0, total = 0, i, j;
		struct sockaddr_in*  source, *dest;
		char *hex;

		//Its free!
		ETHER_HDR *ethhdr;
		IPV4_HDR *iphdr;
		TCP_HDR *tcpheader;
		UDP_HDR *udpheader;
		ICMP_HDR *icmpheader;
		u_char *data;

		int counter = 0;

		void MyThreadClass::Initialize()
		{
			u_int i, res;
			u_char errbuf[PCAP_ERRBUF_SIZE], buffer[100];
			u_char *pkt_data;
			time_t seconds;
			struct tm tbreak;
			pcap_if_t *alldevs, *d;
			pcap_t *fp;
			struct pcap_pkthdr *header;

			//fopen_s(&logfile, "log.txt", "w");
			if (logfile == NULL)
			{
				printf("Unable to create file.");
			}

			/* The user didn't provide a packet source: Retrieve the local device list */
			if (pcap_findalldevs_ex((char*)PCAP_SRC_IF_STRING, NULL, &alldevs, (char*)errbuf) == -1)
			{
				fprintf(stderr, "Error in pcap_findalldevs_ex: %s\n", errbuf);
				//	return -1;
			}

			i = 0;
			/* Print the list */
			for (d = alldevs; d; d = d->next)
			{
				printf("%d. %s\n    ", ++i, d->name);

				if (d->description)
				{
					printf(" (%s)\n", d->description);
				}
				else
				{
					printf(" (No description available)\n");
				}
			}

			if (i == 0)
			{
				fprintf(stderr, "No interfaces found! Exiting.\n");
				//		return -1;
			}

			printf("Enter the interface number you would like to sniff : ");
			//	scanf_s("%d", &inum);


			/* Jump to the selected adapter */
			for (d = alldevs, i = 0; i < 2 - 1; d = d->next, i++);

			/* Open the device */
			if ((fp = pcap_open(d->name,
				100 /*snaplen*/,
				PCAP_OPENFLAG_PROMISCUOUS /*flags*/,
				20 /*read timeout*/,
				NULL /* remote authentication */,
				(char*)errbuf)
				) == NULL)
			{
				fprintf(stderr, "\nError opening adapter\n");
				//		return -1;
			}

			//read packets in a loop :)

			while ((res = pcap_next_ex(fp, &header, (const u_char**)&pkt_data)) >= 0 && counter < 100)
			{
				if (res == 0)
				{
					// Timeout elapsed
					continue;
				}
				counter++;
				seconds = header->ts.tv_sec;
				localtime_s(&tbreak, &seconds);
				strftime((char*)buffer, 80, "%d-%b-%Y %I:%M:%S %p", &tbreak);
				//print pkt timestamp and pkt len
				//fprintf(logfile , "\nNext Packet : %ld:%ld (Packet Length : %ld bytes) " , header->ts.tv_sec, header->ts.tv_usec, header->len);
				fprintf(logfile, "\nNext Packet : %s.%ld (Packet Length : %ld bytes) ", buffer, header->ts.tv_usec, header->len);
				ProcessPacket(pkt_data, header->caplen);
			}

			if (res == -1)
			{
				fprintf(stderr, "Error reading the packets: %s\n", pcap_geterr(fp));
				//		return -1;
			}

			//	return 0;
		}
		void MyThreadClass::ProcessPacket(u_char* Buffer, int Size)
		{
			//Ethernet header
			ethhdr = (ETHER_HDR *)Buffer;
			++total;
			//DataGridView1->Rows->Add(1);
			//Ip packets
			if (ntohs(ethhdr->type) == 0x0800)
			{
				//ip header
				iphdr = (IPV4_HDR *)(Buffer + sizeof(ETHER_HDR));

				switch (iphdr->ip_protocol) //Check the Protocol and do accordingly...
				{
				case 1: //ICMP Protocol
					icmp++;
					PrintIcmpPacket(Buffer, Size);
					break;

				case 2: //IGMP Protocol
					igmp++;
					array<Object^>^myStringArray = { "IGMP" };
					myFormControl1->Invoke(myFormControl1->myDelegate, myStringArray);
					//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["No"]->Value = DataGridView1->RowCount - 1;

					//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Prot"]->Value = gcnew System::String("IGMP");
					break;

				case 6: //TCP Protocol
					tcp++;
					PrintTcpPacket(Buffer, Size);
					break;

				case 17: //UDP Protocol
					udp++;
					print_udp_packet(Buffer, Size);
					break;

				default: //Some Other Protocol like ARP etc.
					others++;
					array<Object^>^myStringArray = { "Other" };
					myFormControl1->Invoke(myFormControl1->myDelegate, myStringArray);

					//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Prot"]->Value = gcnew System::String("Other");
					break;
				}
			}

			printf("TCP : %d UDP : %d ICMP : %d IGMP : %d Others : %d Total : %d\r", tcp, udp, icmp, igmp, others, total);
		}

		/*
		Print the Ethernet header
		*/
		void MyThreadClass::print_ethernet_header(u_char* buffer)
		{
			ETHER_HDR *eth = (ETHER_HDR *)buffer;
			char x[256];
			//sprintf(x, "%.2X-%.2X-%.2X-%.2X-%.2X-%.2X", eth->source[0], eth->source[1], eth->source[2], eth->source[3], eth->source[4], eth->source[5]);
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["SrcMac"]->Value = gcnew System::String(x);
			ZeroMemory(x, 256);
			sprintf(x, "%.2X-%.2X-%.2X-%.2X-%.2X-%.2X", eth->dest[0], eth->dest[1], eth->dest[2], eth->dest[3], eth->dest[4], eth->dest[5]);
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["DstMac"]->Value = gcnew System::String(x);

			fprintf(logfile, "\n");
			fprintf(logfile, "Ethernet Header\n");
			fprintf(logfile, " |-Destination Address : %.2X-%.2X-%.2X-%.2X-%.2X-%.2X \n", eth->dest[0], eth->dest[1], eth->dest[2], eth->dest[3], eth->dest[4], eth->dest[5]);
			fprintf(logfile, " |-Source Address      : %.2X-%.2X-%.2X-%.2X-%.2X-%.2X \n", eth->source[0], eth->source[1], eth->source[2], eth->source[3], eth->source[4], eth->source[5]);
			fprintf(logfile, " |-Protocol            : 0x%.4x \n", ntohs(eth->type));
		}

		/*
		Print the IP header for IP packets
		*/
		void MyThreadClass::PrintIpHeader(unsigned char* Buffer, int Size)
		{
			int iphdrlen = 0;

			iphdr = (IPV4_HDR *)(Buffer + sizeof(ETHER_HDR));
			iphdrlen = iphdr->ip_header_len * 4;

			/*memset(&source, 0, sizeof(source));
			source.sin_addr.s_addr = iphdr->ip_srcaddr;*/

			/*memset(&dest, 0, sizeof(dest));
			dest.sin_addr.s_addr = iphdr->ip_destaddr;
			char x[256];
			sprintf(x, "%s\n", inet_ntoa(dest.sin_addr));
			DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["DstIP"]->Value = gcnew System::String(x);
			ZeroMemory(x, 256);
			sprintf(x, "%s\n", inet_ntoa(source.sin_addr));
			DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["SrcIP"]->Value = gcnew System::String(x);
	*/
	/*DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["TTL"]->Value = ((unsigned int)iphdr->ip_ttl);
	DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["PckLength"]->Value = ntohs(iphdr->ip_total_length);
	DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["IPvers"]->Value = ((unsigned int)iphdr->ip_version);
	*/
			print_ethernet_header((u_char*)Buffer);

			/*fprintf(logfile, "\n");
			fprintf(logfile, "IP Header\n");
			fprintf(logfile, " |-IP Version : %d\n", (unsigned int)iphdr->ip_version);
			fprintf(logfile, " |-IP Header Length : %d DWORDS or %d Bytes\n", (unsigned int)iphdr->ip_header_len, ((unsigned int)(iphdr->ip_header_len)) * 4);
			fprintf(logfile, " |-Type Of Service : %d\n", (unsigned int)iphdr->ip_tos);
			fprintf(logfile, " |-IP Total Length : %d Bytes(Size of Packet)\n", ntohs(iphdr->ip_total_length));
			fprintf(logfile, " |-Identification : %d\n", ntohs(iphdr->ip_id));
			fprintf(logfile, " |-Reserved ZERO Field : %d\n", (unsigned int)iphdr->ip_reserved_zero);
			fprintf(logfile, " |-Dont Fragment Field : %d\n", (unsigned int)iphdr->ip_dont_fragment);
			fprintf(logfile, " |-More Fragment Field : %d\n", (unsigned int)iphdr->ip_more_fragment);
			fprintf(logfile, " |-TTL : %d\n", (unsigned int)iphdr->ip_ttl);
			fprintf(logfile, " |-Protocol : %d\n", (unsigned int)iphdr->ip_protocol);
			fprintf(logfile, " |-Checksum : %d\n", ntohs(iphdr->ip_checksum));
			fprintf(logfile, " |-Source IP : %s\n", inet_ntoa(source.sin_addr));
			fprintf(logfile, " |-Destination IP : %s\n", inet_ntoa(dest.sin_addr));*/
		}

		/*
		Print the TCP header for TCP packets
		*/
		void MyThreadClass::PrintTcpPacket(u_char* Buffer, int Size)
		{
			unsigned short iphdrlen;
			int header_size = 0, tcphdrlen, data_size;

			iphdr = (IPV4_HDR *)(Buffer + sizeof(ETHER_HDR));
			iphdrlen = iphdr->ip_header_len * 4;

			tcpheader = (TCP_HDR*)(Buffer + iphdrlen + sizeof(ETHER_HDR));
			tcphdrlen = tcpheader->data_offset * 4;

			data = (Buffer + sizeof(ETHER_HDR) + iphdrlen + tcphdrlen);
			data_size = (Size - sizeof(ETHER_HDR) - iphdrlen - tcphdrlen);

			fprintf(logfile, "\n\n***********************TCP Packet*************************\n");


			//Rows[DataGridView1->RowCount - 2]->Cells["DstPort"]->Value = (ntohs(tcpheader->dest_port));
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["SrcPort"]->Value = (ntohs(tcpheader->source_port));
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Checksum"]->Value = (ntohs(tcpheader->checksum));
			/*if ((unsigned int)tcpheader->ack) {
				DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["TCPFlag"]->Value = "ACK";
			}
			else if ((unsigned int)tcpheader->syn) {
				DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["TCPFlag"]->Value = "SYN";
			}
			else if ((unsigned int)tcpheader->rst) {
				DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["TCPFlag"]->Value = "RST";
			}
			else if ((unsigned int)tcpheader->fin) {
				DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["TCPFlag"]->Value = "FIN";
			}*/

			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Prot"]->Value = gcnew System::String("TCP");

			PrintIpHeader(Buffer, Size);
			fprintf(logfile, "\n");
			fprintf(logfile, "TCP Header\n");
			fprintf(logfile, " |-Source Port : %u\n", ntohs(tcpheader->source_port));
			fprintf(logfile, " |-Destination Port : %u\n", ntohs(tcpheader->dest_port));
			fprintf(logfile, " |-Sequence Number : %u\n", ntohl(tcpheader->sequence));
			fprintf(logfile, " |-Acknowledge Number : %u\n", ntohl(tcpheader->acknowledge));
			fprintf(logfile, " |-Header Length : %d DWORDS or %d BYTES\n", (unsigned int)tcpheader->data_offset, (unsigned int)tcpheader->data_offset * 4);
			fprintf(logfile, " |-CWR Flag : %d\n", (unsigned int)tcpheader->cwr);
			fprintf(logfile, " |-ECN Flag : %d\n", (unsigned int)tcpheader->ecn);
			fprintf(logfile, " |-Urgent Flag : %d\n", (unsigned int)tcpheader->urg);
			fprintf(logfile, " |-Acknowledgement Flag : %d\n", (unsigned int)tcpheader->ack);
			fprintf(logfile, " |-Push Flag : %d\n", (unsigned int)tcpheader->psh);
			fprintf(logfile, " |-Reset Flag : %d\n", (unsigned int)tcpheader->rst);
			fprintf(logfile, " |-Synchronise Flag : %d\n", (unsigned int)tcpheader->syn);
			fprintf(logfile, " |-Finish Flag : %d\n", (unsigned int)tcpheader->fin);
			fprintf(logfile, " |-Window : %d\n", ntohs(tcpheader->window));
			fprintf(logfile, " |-Checksum : %d\n", ntohs(tcpheader->checksum));
			fprintf(logfile, " |-Urgent Pointer : %d\n", tcpheader->urgent_pointer);
			fprintf(logfile, "\n");
			fprintf(logfile, " DATA Dump ");
			fprintf(logfile, "\n");

			fprintf(logfile, "IP Header\n");
			PrintData((u_char*)iphdr, iphdrlen);

			fprintf(logfile, "TCP Header\n");
			PrintData((u_char*)tcpheader, tcphdrlen);

			fprintf(logfile, "Data Payload\n");
			PrintData(data, data_size);

			fprintf(logfile, "\n###########################################################\n");
		}

		/*
		Print the UDP header for UDP packets
		*/
		void MyThreadClass::print_udp_packet(u_char *Buffer, int Size)
		{
			int iphdrlen = 0, data_size = 0;

			iphdr = (IPV4_HDR *)(Buffer + sizeof(ETHER_HDR));
			iphdrlen = iphdr->ip_header_len * 4;

			udpheader = (UDP_HDR*)(Buffer + iphdrlen + sizeof(ETHER_HDR));

			data = (Buffer + sizeof(ETHER_HDR) + iphdrlen + sizeof(UDP_HDR));
			data_size = (Size - sizeof(ETHER_HDR) - iphdrlen - sizeof(UDP_HDR));

			fprintf(logfile, "\n\n***********************UDP Packet*************************\n");
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["DstPort"]->Value = (ntohs(udpheader->dest_port));
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Prot"]->Value = gcnew System::String("UDP");
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["SrcPort"]->Value = (ntohs(udpheader->source_port));
			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Checksum"]->Value = (ntohs(udpheader->udp_checksum));
			PrintIpHeader(Buffer, Size);

			fprintf(logfile, "\nUDP Header\n");
			fprintf(logfile, " |-Source Port : %d\n", ntohs(udpheader->source_port));
			fprintf(logfile, " |-Destination Port : %d\n", ntohs(udpheader->dest_port));
			fprintf(logfile, " |-UDP Length : %d\n", ntohs(udpheader->udp_length));
			fprintf(logfile, " |-UDP Checksum : %d\n", ntohs(udpheader->udp_checksum));

			fprintf(logfile, "\n");

			fprintf(logfile, "IP Header\n");
			PrintData((u_char*)iphdr, iphdrlen);

			fprintf(logfile, "UDP Header\n");
			PrintData((u_char*)udpheader, sizeof(UDP_HDR));

			fprintf(logfile, "Data Payload\n");
			PrintData(data, data_size);

			fprintf(logfile, "\n###########################################################\n");
		}

		void PrintIcmpPacket(u_char* Buffer, int Size)
		{
			int iphdrlen = 0, icmphdrlen = 0, data_size = 0;

			iphdr = (IPV4_HDR *)(Buffer + sizeof(ETHER_HDR));
			iphdrlen = iphdr->ip_header_len * 4;

			icmpheader = (ICMP_HDR*)(Buffer + iphdrlen + sizeof(ETHER_HDR));

			data = (Buffer + sizeof(ETHER_HDR) + iphdrlen + sizeof(ICMP_HDR));
			data_size = (Size - sizeof(ETHER_HDR) - iphdrlen - sizeof(ICMP_HDR));

			fprintf(logfile, "\n\n***********************ICMP Packet*************************\n");

			//DataGridView1->Rows[DataGridView1->RowCount - 2]->Cells["Prot"]->Value = gcnew System::String("ICMP");

			PrintIpHeader(Buffer, Size);

			fprintf(logfile, "\n");

			fprintf(logfile, "ICMP Header\n");
			fprintf(logfile, " |-Type : %d", (unsigned int)(icmpheader->type));

			if ((unsigned int)(icmpheader->type) == 11)
			{
				fprintf(logfile, " (TTL Expired)\n");
			}
			else if ((unsigned int)(icmpheader->type) == 0)
			{
				fprintf(logfile, " (ICMP Echo Reply)\n");
			}

			fprintf(logfile, " |-Code : %d\n", (unsigned int)(icmpheader->code));
			fprintf(logfile, " |-Checksum : %d\n", ntohs(icmpheader->checksum));
			fprintf(logfile, " |-ID : %d\n", ntohs(icmpheader->id));
			fprintf(logfile, " |-Sequence : %d\n", ntohs(icmpheader->seq));
			fprintf(logfile, "\n");

			fprintf(logfile, "IP Header\n");
			PrintData((u_char*)iphdr, iphdrlen);

			fprintf(logfile, "ICMP Header\n");
			PrintData((u_char*)icmpheader, sizeof(ICMP_HDR));

			fprintf(logfile, "Data Payload\n");
			PrintData(data, data_size);

			fprintf(logfile, "\n###########################################################\n");
		}

		/*
		Print the hex values of the data
		*/
		void PrintData(u_char* data, int Size)
		{
			unsigned char a, line[17], c;
			int j;

			//loop over each character and print
			for (i = 0; i < Size; i++)
			{
				c = data[i];

				//Print the hex value for every character , with a space
				fprintf(logfile, " %.2x", (unsigned int)c);

				//Add the character to data line
				a = (c >= 32 && c <= 128) ? (unsigned char)c : '.';

				line[i % 16] = a;

				//if last character of a line , then print the line - 16 characters in 1 line
				if ((i != 0 && (i + 1) % 16 == 0) || i == Size - 1)
				{
					line[i % 16 + 1] = '\0';

					//print a big gap of 10 characters between hex and characters
					fprintf(logfile, "          ");

					//Print additional spaces for last lines which might be less than 16 characters in length
					for (j = strlen((const char*)line); j < 16; j++)
					{
						fprintf(logfile, "   ");
					}

					fprintf(logfile, "%s \n", line);
				}
			}

			fprintf(logfile, "\n");
		}

	private:
		TrafStat ^ myFormControl1;
	public:
		MyThreadClass(TrafStat^ myForm)
		{
			myFormControl1 = myForm;
		}

		void Run()
		{
			// Execute the specified delegate on the thread that owns
			// 'myFormControl1' control's underlying window handle.
			Initialize();
			//myFormControl1->Invoke(myFormControl1->myDelegate, "1");
		}
	};


	void TrafStat::ThreadFunction()
	{
		MyThreadClass^ myThreadClassObject = gcnew MyThreadClass(this);
		myThreadClassObject->Run();
	}



}



