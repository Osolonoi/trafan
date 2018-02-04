#pragma once
#include "Notification.h"
#include "NewThreadClass.h"



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
		AddListItem ^ myDelegate;
	public:
		TrafStat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			Trafan ^cl = gcnew Trafan((System::Windows::Forms::Form^)this, myDelegate);
			//cl->GetDevices();

			SetDevicesMethod(cl->GetDevices());
		}

		/*void StartThread()
		{
			Thread^ myThread;
			myThread = gcnew Thread(gcnew ThreadStart(this, &PacketAnalyzer::TrafStat::ThreadFunction));
			myThread->Start();
		}

		void ThreadFunction()
		{
			PacketAnalyzer::NewThreadClass^ myThreadClassObject = gcnew PacketAnalyzer::NewThreadClass(this);
			myThreadClassObject->Run();
		}*/

		void AddListItemMethod(array<String^>^ items)
		{
			/*for (int i = 0; i < 1006; i++)
			{*/
			/*myItem = "MyListItem {0}", i;*/
			dataGridView1->Rows->Add();

			// 0 : No
			// 1 : Prot

			dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells["No"]->Value = items[0];
			dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells["Prot"]->Value = items[1];
			dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells["SrcMac"]->Value = items[2];
			dataGridView1->Rows[dataGridView1->RowCount - 2]->Cells["SrcIp"]->Value = items[3];

			dataGridView1->Update();

			//}
		}

		void SetDevicesMethod(array<String^>^ devices)
		{
			comboBox1->Items->AddRange(devices);
		}
	private: Thread ^ trd;
			 //delegate void DelegateThreadTask();
	private: void ThreadTask()
	{
		int stp;
		int newval;
		//Random *rnd = new Random();

		/*if (progressBar1->InvokeRequired == false)
		{
			stp = this->progressBar1->Step*rnd->Next(-1, 2);
			newval = this->progressBar1->Value + stp;

			if (newval > this->progressBar1->Maximum)
				newval = this->progressBar1->Maximum;
			else if (newval < this->progressBar1->Minimum)
				newval = this->progressBar1->Minimum;

			this->progressBar1->Value = newval;
		}
		else
		{*/

		/*DelegateThreadTask ^myThreadDelegate = gcnew DelegateThreadTask(this, &TrafStat::ThreadTask);*/

		myDelegate = gcnew AddListItem(this, &TrafStat::AddListItemMethod);
		//this->Invoke(myDelegate);


		Trafan ^cl = gcnew Trafan((System::Windows::Forms::Form^)this, myDelegate);
		cl->Run();
		//}
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
			this->Filter = (gcnew System::Windows::Forms::Label());
			this->NIC = (gcnew System::Windows::Forms::Label());
			this->Quantity = (gcnew System::Windows::Forms::Label());
			this->BadPack = (gcnew System::Windows::Forms::Label());
			this->Bytes = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->No, this->IPvers,
					this->SrcIP, this->SrcMac, this->SrcPort, this->DstIP, this->DstMac, this->DstPort, this->Prot, this->TTL, this->PckLength, this->Checksum,
					this->TCPFlag, this->Anomaly
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 46);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1436, 548);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TrafStat::dataGridView1_CellContentClick);
			// 
			// No
			// 
			this->No->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->No->FillWeight = 22;
			this->No->HeaderText = L"No";
			this->No->Name = L"No";
			this->No->Width = 78;
			// 
			// IPvers
			// 
			this->IPvers->HeaderText = L"IPvers";
			this->IPvers->Name = L"IPvers";
			this->IPvers->ReadOnly = true;
			this->IPvers->Width = 108;
			// 
			// SrcIP
			// 
			this->SrcIP->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->SrcIP->FillWeight = 122;
			this->SrcIP->HeaderText = L"SrcIP";
			this->SrcIP->Name = L"SrcIP";
			this->SrcIP->Width = 101;
			// 
			// SrcMac
			// 
			this->SrcMac->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->SrcMac->FillWeight = 122;
			this->SrcMac->HeaderText = L"SrcMac";
			this->SrcMac->Name = L"SrcMac";
			this->SrcMac->Width = 121;
			// 
			// SrcPort
			// 
			this->SrcPort->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->SrcPort->HeaderText = L"SrcPort";
			this->SrcPort->Name = L"SrcPort";
			this->SrcPort->ReadOnly = true;
			this->SrcPort->Width = 118;
			// 
			// DstIP
			// 
			this->DstIP->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DstIP->FillWeight = 122;
			this->DstIP->HeaderText = L"DstIP";
			this->DstIP->Name = L"DstIP";
			// 
			// DstMac
			// 
			this->DstMac->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DstMac->FillWeight = 122;
			this->DstMac->HeaderText = L"DstMac";
			this->DstMac->Name = L"DstMac";
			this->DstMac->Width = 120;
			// 
			// DstPort
			// 
			this->DstPort->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->DstPort->HeaderText = L"DstPort";
			this->DstPort->Name = L"DstPort";
			this->DstPort->Width = 117;
			// 
			// Prot
			// 
			this->Prot->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Prot->FillWeight = 50;
			this->Prot->HeaderText = L"Prot";
			this->Prot->Name = L"Prot";
			this->Prot->Width = 88;
			// 
			// TTL
			// 
			this->TTL->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->TTL->FillWeight = 50;
			this->TTL->HeaderText = L"TTL";
			this->TTL->Name = L"TTL";
			this->TTL->Width = 90;
			// 
			// PckLength
			// 
			this->PckLength->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->PckLength->FillWeight = 50;
			this->PckLength->HeaderText = L"PckLength";
			this->PckLength->Name = L"PckLength";
			this->PckLength->Width = 146;
			// 
			// Checksum
			// 
			this->Checksum->HeaderText = L"Checksum";
			this->Checksum->Name = L"Checksum";
			this->Checksum->Width = 147;
			// 
			// TCPFlag
			// 
			this->TCPFlag->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->TCPFlag->FillWeight = 50;
			this->TCPFlag->HeaderText = L"TCPFlag";
			this->TCPFlag->Name = L"TCPFlag";
			this->TCPFlag->Width = 132;
			// 
			// Anomaly
			// 
			this->Anomaly->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Anomaly->HeaderText = L"Anomaly";
			this->Anomaly->Name = L"Anomaly";
			this->Anomaly->ReadOnly = true;
			this->Anomaly->Width = 130;
			// 
			// Filter
			// 
			this->Filter->AutoSize = true;
			this->Filter->Location = System::Drawing::Point(836, 17);
			this->Filter->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Filter->Name = L"Filter";
			this->Filter->Size = System::Drawing::Size(54, 25);
			this->Filter->TabIndex = 1;
			this->Filter->Text = L"Filter";
			// 
			// NIC
			// 
			this->NIC->AutoSize = true;
			this->NIC->Location = System::Drawing::Point(22, 17);
			this->NIC->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->NIC->Name = L"NIC";
			this->NIC->Size = System::Drawing::Size(241, 25);
			this->NIC->TabIndex = 2;
			this->NIC->Text = L"Network Interface Cotroller";
			// 
			// Quantity
			// 
			this->Quantity->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Quantity->AutoSize = true;
			this->Quantity->Location = System::Drawing::Point(114, 615);
			this->Quantity->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(85, 25);
			this->Quantity->TabIndex = 3;
			this->Quantity->Text = L"Qauntity";
			// 
			// BadPack
			// 
			this->BadPack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->BadPack->AutoSize = true;
			this->BadPack->Location = System::Drawing::Point(931, 646);
			this->BadPack->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->BadPack->Name = L"BadPack";
			this->BadPack->Size = System::Drawing::Size(117, 25);
			this->BadPack->TabIndex = 4;
			this->BadPack->Text = L"BadPackets";
			// 
			// Bytes
			// 
			this->Bytes->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Bytes->AutoSize = true;
			this->Bytes->Location = System::Drawing::Point(396, 615);
			this->Bytes->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Bytes->Name = L"Bytes";
			this->Bytes->Size = System::Drawing::Size(61, 25);
			this->Bytes->TabIndex = 6;
			this->Bytes->Text = L"Bytes";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(277, 11);
			this->comboBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(537, 32);
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
			this->comboBox3->Location = System::Drawing::Point(900, 11);
			this->comboBox3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(219, 32);
			this->comboBox3->TabIndex = 10;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &TrafStat::comboBox3_SelectedIndexChanged);
			// 
			// TrafStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1470, 687);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Bytes);
			this->Controls->Add(this->BadPack);
			this->Controls->Add(this->Quantity);
			this->Controls->Add(this->NIC);
			this->Controls->Add(this->Filter);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"TrafStat";
			this->Text = L"TrafStat";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		ThreadStart ^myThreadDelegate = gcnew ThreadStart(this, &TrafStat::ThreadTask);
		trd = gcnew Thread(myThreadDelegate);
		trd->IsBackground = false;
		trd->Start();
		//ThreadTask();
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {



	}


	private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Notification^ form2 = gcnew Notification();
		form2->Show();

	}
	};



}



