#pragma once
#include "Trafan.h"

namespace PacketAnalyzer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TrafStat
	/// </summary>
	public ref class TrafStat : public System::Windows::Forms::Form
	{
	public:
		TrafStat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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


	private: System::Windows::Forms::Label^  InfoP;
	private: System::Windows::Forms::Label^  Bytes;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  Sorting;

	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  No;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SrcIP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SrcMac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DstIP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DstMac;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DstPort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Prot;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TTL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PckLength;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TCPFlag;













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
			this->InfoP = (gcnew System::Windows::Forms::Label());
			this->Bytes = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->Sorting = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->No = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SrcIP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SrcMac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DstIP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DstMac = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DstPort = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prot = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TTL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PckLength = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TCPFlag = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->No, this->SrcIP,
					this->SrcMac, this->DstIP, this->DstMac, this->DstPort, this->Prot, this->TTL, this->PckLength, this->TCPFlag
			});
			this->dataGridView1->Location = System::Drawing::Point(1, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(670, 229);
			this->dataGridView1->TabIndex = 0;
			// 
			// Filter
			// 
			this->Filter->AutoSize = true;
			this->Filter->Location = System::Drawing::Point(456, 6);
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
			this->NIC->Size = System::Drawing::Size(25, 13);
			this->NIC->TabIndex = 2;
			this->NIC->Text = L"NIC";
			this->NIC->Click += gcnew System::EventHandler(this, &TrafStat::label2_Click);
			// 
			// Quantity
			// 
			this->Quantity->AutoSize = true;
			this->Quantity->Location = System::Drawing::Point(144, 333);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(46, 13);
			this->Quantity->TabIndex = 3;
			this->Quantity->Text = L"Qauntity";
			// 
			// BadPack
			// 
			this->BadPack->AutoSize = true;
			this->BadPack->Location = System::Drawing::Point(299, 333);
			this->BadPack->Name = L"BadPack";
			this->BadPack->Size = System::Drawing::Size(65, 13);
			this->BadPack->TabIndex = 4;
			this->BadPack->Text = L"BadPackets";
			// 
			// InfoP
			// 
			this->InfoP->AutoSize = true;
			this->InfoP->Location = System::Drawing::Point(42, 265);
			this->InfoP->Name = L"InfoP";
			this->InfoP->Size = System::Drawing::Size(66, 13);
			this->InfoP->TabIndex = 5;
			this->InfoP->Text = L"Info packets";
			// 
			// Bytes
			// 
			this->Bytes->AutoSize = true;
			this->Bytes->Location = System::Drawing::Point(45, 301);
			this->Bytes->Name = L"Bytes";
			this->Bytes->Size = System::Drawing::Size(33, 13);
			this->Bytes->TabIndex = 6;
			this->Bytes->Text = L"Bytes";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Intel Centrino", L"Qualcomm Atheros" });
			this->comboBox1->Location = System::Drawing::Point(48, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &TrafStat::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"No", L"SrcIP", L"SrcMac", L"DstPort", L"Prot" });
			this->comboBox2->Location = System::Drawing::Point(265, 6);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 8;
			// 
			// Sorting
			// 
			this->Sorting->AutoSize = true;
			this->Sorting->Location = System::Drawing::Point(209, 9);
			this->Sorting->Name = L"Sorting";
			this->Sorting->Size = System::Drawing::Size(40, 13);
			this->Sorting->TabIndex = 9;
			this->Sorting->Text = L"Sorting";
			this->Sorting->Click += gcnew System::EventHandler(this, &TrafStat::Sorting_Click);
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
			this->No->FillWeight = 35;
			this->No->HeaderText = L"No";
			this->No->Name = L"No";
			this->No->Width = 35;
			// 
			// SrcIP
			// 
			this->SrcIP->FillWeight = 35;
			this->SrcIP->HeaderText = L"SrcIP";
			this->SrcIP->Name = L"SrcIP";
			this->SrcIP->Width = 35;
			// 
			// SrcMac
			// 
			this->SrcMac->HeaderText = L"SrcMac";
			this->SrcMac->Name = L"SrcMac";
			this->SrcMac->Width = 35;
			// 
			// DstIP
			// 
			this->DstIP->HeaderText = L"DstIP";
			this->DstIP->Name = L"DstIP";
			this->DstIP->Width = 35;
			// 
			// DstMac
			// 
			this->DstMac->HeaderText = L"DstMac";
			this->DstMac->Name = L"DstMac";
			this->DstMac->Width = 35;
			// 
			// DstPort
			// 
			this->DstPort->HeaderText = L"DstPort";
			this->DstPort->Name = L"DstPort";
			// 
			// Prot
			// 
			this->Prot->HeaderText = L"Prot";
			this->Prot->Name = L"Prot";
			this->Prot->Width = 35;
			// 
			// TTL
			// 
			this->TTL->HeaderText = L"TTL";
			this->TTL->Name = L"TTL";
			this->TTL->Width = 35;
			// 
			// PckLength
			// 
			this->PckLength->HeaderText = L"PckLength";
			this->PckLength->Name = L"PckLength";
			// 
			// TCPFlag
			// 
			this->TCPFlag->HeaderText = L"TCPFlag";
			this->TCPFlag->Name = L"TCPFlag";
			// 
			// TrafStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(683, 355);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->Sorting);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Bytes);
			this->Controls->Add(this->InfoP);
			this->Controls->Add(this->BadPack);
			this->Controls->Add(this->Quantity);
			this->Controls->Add(this->NIC);
			this->Controls->Add(this->Filter);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"TrafStat";
			this->Text = L"TrafStat";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Sorting_Click(System::Object^  sender, System::EventArgs^  e) {
}
		 Trafan^ Trafanobject;
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		/*dataGridView1->Columns->Clear();
		dataGridView1->ColumnCount = 2;*/
		//dataGridView1->Rows->Add(10); //Добавили 10 строк
		/*dataGridView1->Columns[0]->Name = "X";
		dataGridView1->Columns[1]->Name = "Y(X)"; */
		Trafanobject = gcnew Trafan();
		Trafanobject->Initialize(comboBox1->SelectedIndex + 1,dataGridView1);
}
};
}
