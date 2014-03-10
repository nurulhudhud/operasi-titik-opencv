#pragma once
#include "opencv2/highgui/highgui.hpp"
#include "cvToBitmap.h"
#include <math.h>
cv::Mat Citra;
cv::Mat CitraHasil;
cv::Mat CitraTerolah;

namespace OperasiTitik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  tampilanCitraAsli;
	private: System::Windows::Forms::Button^  tombolBuka;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  tampilanCitraOlah;
	private: System::Windows::Forms::RadioButton^  tombolOperasiKecemerlangan;
	private: System::Windows::Forms::RadioButton^  tombolOperasiKontras;
	private: System::Windows::Forms::RadioButton^  tombolOperasiNegasi;
	private: System::Windows::Forms::HScrollBar^  scrollR;
	private: System::Windows::Forms::HScrollBar^  scrollG;
	private: System::Windows::Forms::HScrollBar^  scrollB;
	private: System::Windows::Forms::Label^  labelR;
	private: System::Windows::Forms::Label^  labelG;


	private: System::Windows::Forms::Label^  labelB;

	private: System::Windows::Forms::HScrollBar^  scrollP;
	private: System::Windows::Forms::HScrollBar^  scrollGradien;
	private: System::Windows::Forms::Label^  labelP;
	private: System::Windows::Forms::Label^  labelGradien;
	private: System::Windows::Forms::TextBox^  textBoxR;
	private: System::Windows::Forms::TextBox^  textBoxG;
	private: System::Windows::Forms::TextBox^  textBoxB;
	private: System::Windows::Forms::TextBox^  textBoxP;
	private: System::Windows::Forms::TextBox^  textBoxGradien;




	private: System::Windows::Forms::CheckBox^  checkBoxKombinasi;
	private: System::Windows::Forms::TextBox^  textBoxSeragam;
	private: System::Windows::Forms::Label^  labelSeragam;


	private: System::Windows::Forms::HScrollBar^  scrollSeragam;
	private: System::Windows::Forms::CheckBox^  checkBoxSeragam;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;









	protected: 

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
			this->tampilanCitraAsli = (gcnew System::Windows::Forms::PictureBox());
			this->tombolBuka = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tampilanCitraOlah = (gcnew System::Windows::Forms::PictureBox());
			this->tombolOperasiKecemerlangan = (gcnew System::Windows::Forms::RadioButton());
			this->tombolOperasiKontras = (gcnew System::Windows::Forms::RadioButton());
			this->tombolOperasiNegasi = (gcnew System::Windows::Forms::RadioButton());
			this->scrollR = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollG = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollB = (gcnew System::Windows::Forms::HScrollBar());
			this->labelR = (gcnew System::Windows::Forms::Label());
			this->labelG = (gcnew System::Windows::Forms::Label());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->scrollP = (gcnew System::Windows::Forms::HScrollBar());
			this->scrollGradien = (gcnew System::Windows::Forms::HScrollBar());
			this->labelP = (gcnew System::Windows::Forms::Label());
			this->labelGradien = (gcnew System::Windows::Forms::Label());
			this->textBoxR = (gcnew System::Windows::Forms::TextBox());
			this->textBoxG = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGradien = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxKombinasi = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxSeragam = (gcnew System::Windows::Forms::TextBox());
			this->labelSeragam = (gcnew System::Windows::Forms::Label());
			this->scrollSeragam = (gcnew System::Windows::Forms::HScrollBar());
			this->checkBoxSeragam = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tampilanCitraAsli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tampilanCitraOlah))->BeginInit();
			this->SuspendLayout();
			// 
			// tampilanCitraAsli
			// 
			this->tampilanCitraAsli->Location = System::Drawing::Point(13, 128);
			this->tampilanCitraAsli->Name = L"tampilanCitraAsli";
			this->tampilanCitraAsli->Size = System::Drawing::Size(640, 480);
			this->tampilanCitraAsli->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tampilanCitraAsli->TabIndex = 0;
			this->tampilanCitraAsli->TabStop = false;
			// 
			// tombolBuka
			// 
			this->tombolBuka->Location = System::Drawing::Point(13, 34);
			this->tombolBuka->Name = L"tombolBuka";
			this->tombolBuka->Size = System::Drawing::Size(75, 23);
			this->tombolBuka->TabIndex = 1;
			this->tombolBuka->Text = L"Pilih Citra";
			this->tombolBuka->UseVisualStyleBackColor = true;
			this->tombolBuka->Click += gcnew System::EventHandler(this, &MyForm::tombolBuka_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Jpeg|*.jpg|All|*.*";
			this->openFileDialog1->InitialDirectory = L".";
			// 
			// tampilanCitraOlah
			// 
			this->tampilanCitraOlah->Location = System::Drawing::Point(659, 128);
			this->tampilanCitraOlah->Name = L"tampilanCitraOlah";
			this->tampilanCitraOlah->Size = System::Drawing::Size(640, 480);
			this->tampilanCitraOlah->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tampilanCitraOlah->TabIndex = 2;
			this->tampilanCitraOlah->TabStop = false;
			// 
			// tombolOperasiKecemerlangan
			// 
			this->tombolOperasiKecemerlangan->AutoSize = true;
			this->tombolOperasiKecemerlangan->Enabled = false;
			this->tombolOperasiKecemerlangan->Location = System::Drawing::Point(133, 37);
			this->tombolOperasiKecemerlangan->Name = L"tombolOperasiKecemerlangan";
			this->tombolOperasiKecemerlangan->Size = System::Drawing::Size(138, 17);
			this->tombolOperasiKecemerlangan->TabIndex = 3;
			this->tombolOperasiKecemerlangan->TabStop = true;
			this->tombolOperasiKecemerlangan->Text = L"Operasi Kecemerlangan";
			this->tombolOperasiKecemerlangan->UseVisualStyleBackColor = true;
			this->tombolOperasiKecemerlangan->CheckedChanged += gcnew System::EventHandler(this, &MyForm::tombolOperasiKecemerlangan_CheckedChanged);
			// 
			// tombolOperasiKontras
			// 
			this->tombolOperasiKontras->AutoSize = true;
			this->tombolOperasiKontras->Enabled = false;
			this->tombolOperasiKontras->Location = System::Drawing::Point(294, 37);
			this->tombolOperasiKontras->Name = L"tombolOperasiKontras";
			this->tombolOperasiKontras->Size = System::Drawing::Size(100, 17);
			this->tombolOperasiKontras->TabIndex = 4;
			this->tombolOperasiKontras->TabStop = true;
			this->tombolOperasiKontras->Text = L"Operasi Kontras";
			this->tombolOperasiKontras->UseVisualStyleBackColor = true;
			this->tombolOperasiKontras->CheckedChanged += gcnew System::EventHandler(this, &MyForm::tombolOperasiKontras_CheckedChanged);
			// 
			// tombolOperasiNegasi
			// 
			this->tombolOperasiNegasi->AutoSize = true;
			this->tombolOperasiNegasi->Enabled = false;
			this->tombolOperasiNegasi->Location = System::Drawing::Point(419, 37);
			this->tombolOperasiNegasi->Name = L"tombolOperasiNegasi";
			this->tombolOperasiNegasi->Size = System::Drawing::Size(97, 17);
			this->tombolOperasiNegasi->TabIndex = 5;
			this->tombolOperasiNegasi->TabStop = true;
			this->tombolOperasiNegasi->Text = L"Operasi Negasi";
			this->tombolOperasiNegasi->UseVisualStyleBackColor = true;
			this->tombolOperasiNegasi->CheckedChanged += gcnew System::EventHandler(this, &MyForm::tombolOperasiNegasi_CheckedChanged);
			// 
			// scrollR
			// 
			this->scrollR->Location = System::Drawing::Point(871, 22);
			this->scrollR->Maximum = 255;
			this->scrollR->Minimum = -255;
			this->scrollR->Name = L"scrollR";
			this->scrollR->Size = System::Drawing::Size(346, 17);
			this->scrollR->TabIndex = 6;
			this->scrollR->Visible = false;
			this->scrollR->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::scrollR_Scroll);
			// 
			// scrollG
			// 
			this->scrollG->Location = System::Drawing::Point(871, 47);
			this->scrollG->Maximum = 255;
			this->scrollG->Minimum = -255;
			this->scrollG->Name = L"scrollG";
			this->scrollG->Size = System::Drawing::Size(346, 17);
			this->scrollG->TabIndex = 7;
			this->scrollG->Visible = false;
			this->scrollG->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::scrollG_Scroll);
			// 
			// scrollB
			// 
			this->scrollB->Location = System::Drawing::Point(871, 75);
			this->scrollB->Maximum = 255;
			this->scrollB->Minimum = -255;
			this->scrollB->Name = L"scrollB";
			this->scrollB->Size = System::Drawing::Size(346, 17);
			this->scrollB->TabIndex = 8;
			this->scrollB->Visible = false;
			this->scrollB->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::scrollB_Scroll);
			// 
			// labelR
			// 
			this->labelR->AutoSize = true;
			this->labelR->Location = System::Drawing::Point(717, 24);
			this->labelR->Name = L"labelR";
			this->labelR->Size = System::Drawing::Size(15, 13);
			this->labelR->TabIndex = 9;
			this->labelR->Text = L"R";
			this->labelR->Visible = false;
			// 
			// labelG
			// 
			this->labelG->AutoSize = true;
			this->labelG->Location = System::Drawing::Point(717, 53);
			this->labelG->Name = L"labelG";
			this->labelG->Size = System::Drawing::Size(15, 13);
			this->labelG->TabIndex = 10;
			this->labelG->Text = L"G";
			this->labelG->Visible = false;
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Location = System::Drawing::Point(717, 78);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(14, 13);
			this->labelB->TabIndex = 11;
			this->labelB->Text = L"B";
			this->labelB->Visible = false;
			// 
			// scrollP
			// 
			this->scrollP->Location = System::Drawing::Point(871, 39);
			this->scrollP->Maximum = 255;
			this->scrollP->Minimum = -255;
			this->scrollP->Name = L"scrollP";
			this->scrollP->Size = System::Drawing::Size(346, 17);
			this->scrollP->TabIndex = 12;
			this->scrollP->Visible = false;
			this->scrollP->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::scrollP_Scroll);
			// 
			// scrollGradien
			// 
			this->scrollGradien->LargeChange = 6;
			this->scrollGradien->Location = System::Drawing::Point(871, 64);
			this->scrollGradien->Maximum = 250;
			this->scrollGradien->Name = L"scrollGradien";
			this->scrollGradien->Size = System::Drawing::Size(346, 17);
			this->scrollGradien->TabIndex = 13;
			this->scrollGradien->Visible = false;
			this->scrollGradien->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::scrollGradien_Scroll);
			// 
			// labelP
			// 
			this->labelP->AutoSize = true;
			this->labelP->Location = System::Drawing::Point(717, 41);
			this->labelP->Name = L"labelP";
			this->labelP->Size = System::Drawing::Size(14, 13);
			this->labelP->TabIndex = 14;
			this->labelP->Text = L"P";
			this->labelP->Visible = false;
			// 
			// labelGradien
			// 
			this->labelGradien->AutoSize = true;
			this->labelGradien->Location = System::Drawing::Point(717, 65);
			this->labelGradien->Name = L"labelGradien";
			this->labelGradien->Size = System::Drawing::Size(15, 13);
			this->labelGradien->TabIndex = 15;
			this->labelGradien->Text = L"G";
			this->labelGradien->Visible = false;
			// 
			// textBoxR
			// 
			this->textBoxR->Location = System::Drawing::Point(751, 22);
			this->textBoxR->Name = L"textBoxR";
			this->textBoxR->Size = System::Drawing::Size(100, 20);
			this->textBoxR->TabIndex = 16;
			this->textBoxR->Visible = false;
			// 
			// textBoxG
			// 
			this->textBoxG->Location = System::Drawing::Point(751, 49);
			this->textBoxG->Name = L"textBoxG";
			this->textBoxG->Size = System::Drawing::Size(100, 20);
			this->textBoxG->TabIndex = 17;
			this->textBoxG->Visible = false;
			// 
			// textBoxB
			// 
			this->textBoxB->Location = System::Drawing::Point(751, 73);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->Size = System::Drawing::Size(100, 20);
			this->textBoxB->TabIndex = 18;
			this->textBoxB->Visible = false;
			// 
			// textBoxP
			// 
			this->textBoxP->Location = System::Drawing::Point(751, 38);
			this->textBoxP->Name = L"textBoxP";
			this->textBoxP->Size = System::Drawing::Size(100, 20);
			this->textBoxP->TabIndex = 19;
			this->textBoxP->Visible = false;
			// 
			// textBoxGradien
			// 
			this->textBoxGradien->Location = System::Drawing::Point(751, 64);
			this->textBoxGradien->Name = L"textBoxGradien";
			this->textBoxGradien->Size = System::Drawing::Size(100, 20);
			this->textBoxGradien->TabIndex = 20;
			this->textBoxGradien->Visible = false;
			// 
			// checkBoxKombinasi
			// 
			this->checkBoxKombinasi->AutoSize = true;
			this->checkBoxKombinasi->Enabled = false;
			this->checkBoxKombinasi->Location = System::Drawing::Point(533, 38);
			this->checkBoxKombinasi->Name = L"checkBoxKombinasi";
			this->checkBoxKombinasi->Size = System::Drawing::Size(74, 17);
			this->checkBoxKombinasi->TabIndex = 24;
			this->checkBoxKombinasi->Text = L"Kombinasi";
			this->checkBoxKombinasi->UseVisualStyleBackColor = true;
			this->checkBoxKombinasi->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxKombinasi_CheckedChanged);
			// 
			// textBoxSeragam
			// 
			this->textBoxSeragam->Location = System::Drawing::Point(751, 103);
			this->textBoxSeragam->Name = L"textBoxSeragam";
			this->textBoxSeragam->Size = System::Drawing::Size(100, 20);
			this->textBoxSeragam->TabIndex = 27;
			this->textBoxSeragam->Visible = false;
			// 
			// labelSeragam
			// 
			this->labelSeragam->AutoSize = true;
			this->labelSeragam->Location = System::Drawing::Point(688, 108);
			this->labelSeragam->Name = L"labelSeragam";
			this->labelSeragam->Size = System::Drawing::Size(49, 13);
			this->labelSeragam->TabIndex = 26;
			this->labelSeragam->Text = L"Seragam";
			this->labelSeragam->Visible = false;
			// 
			// scrollSeragam
			// 
			this->scrollSeragam->Location = System::Drawing::Point(871, 105);
			this->scrollSeragam->Maximum = 255;
			this->scrollSeragam->Minimum = -255;
			this->scrollSeragam->Name = L"scrollSeragam";
			this->scrollSeragam->Size = System::Drawing::Size(346, 17);
			this->scrollSeragam->TabIndex = 25;
			this->scrollSeragam->Visible = false;
			this->scrollSeragam->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::scrollSeragam_Scroll);
			// 
			// checkBoxSeragam
			// 
			this->checkBoxSeragam->AutoSize = true;
			this->checkBoxSeragam->Location = System::Drawing::Point(152, 60);
			this->checkBoxSeragam->Name = L"checkBoxSeragam";
			this->checkBoxSeragam->Size = System::Drawing::Size(68, 17);
			this->checkBoxSeragam->TabIndex = 28;
			this->checkBoxSeragam->Text = L"Seragam";
			this->checkBoxSeragam->UseVisualStyleBackColor = true;
			this->checkBoxSeragam->Visible = false;
			this->checkBoxSeragam->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxSeragam_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 616);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Nurul Huda (36663)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(171, 616);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Satria Antariksa R (36945)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(333, 616);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Ressy Jaya Yanti (36743)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(668, 616);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"M Haidar R H (38801)";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(496, 616);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Lisbet Nuryalaya M (36487)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1309, 636);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBoxSeragam);
			this->Controls->Add(this->textBoxSeragam);
			this->Controls->Add(this->labelSeragam);
			this->Controls->Add(this->scrollSeragam);
			this->Controls->Add(this->checkBoxKombinasi);
			this->Controls->Add(this->textBoxGradien);
			this->Controls->Add(this->textBoxP);
			this->Controls->Add(this->textBoxB);
			this->Controls->Add(this->textBoxG);
			this->Controls->Add(this->textBoxR);
			this->Controls->Add(this->labelGradien);
			this->Controls->Add(this->labelP);
			this->Controls->Add(this->scrollGradien);
			this->Controls->Add(this->scrollP);
			this->Controls->Add(this->labelB);
			this->Controls->Add(this->labelG);
			this->Controls->Add(this->labelR);
			this->Controls->Add(this->scrollB);
			this->Controls->Add(this->scrollG);
			this->Controls->Add(this->scrollR);
			this->Controls->Add(this->tombolOperasiNegasi);
			this->Controls->Add(this->tombolOperasiKontras);
			this->Controls->Add(this->tombolOperasiKecemerlangan);
			this->Controls->Add(this->tampilanCitraOlah);
			this->Controls->Add(this->tombolBuka);
			this->Controls->Add(this->tampilanCitraAsli);
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->Text = L"Program Operasi Titik";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tampilanCitraAsli))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->tampilanCitraOlah))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	std::string MarshalString (System::String ^ s) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)
		(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		std::string os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
		return os;
	}

	private: System::Void tombolBuka_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK){
					tampilanCitraAsli->Image=Image::FromFile(openFileDialog1->FileName);
					Citra = cv::imread(MarshalString(openFileDialog1->FileName));
					tampilanCitraAsli->Image = IplImageToBitmap(&(IplImage) Citra);
					Citra.copyTo(CitraHasil);
					tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);					
					tombolOperasiKecemerlangan->Enabled = true;
					tombolOperasiKontras->Enabled = true;
					tombolOperasiNegasi->Enabled = true;
					checkBoxKombinasi->Enabled = true;
					reset();
					 }				 
			 }			

			 void reset(){
				 scrollB->Value = 0;
				 scrollG->Value = 0;
				 scrollR->Value = 0;
				 scrollP->Value = 0;
				 scrollGradien->Value = 10;
			 }

			 void tampilkanPeubahKecemerlangan(){
				 labelR->Visible = true;
				 textBoxR->Visible = true;
				 scrollR->Visible = true;
				 labelG->Visible = true;
				 textBoxG->Visible = true;
				 scrollG->Visible = true;
				 labelB->Visible = true;
				 textBoxB->Visible = true;
				 scrollB->Visible = true;
				 labelP->Visible = false;
				 textBoxP->Visible = false;
				 scrollP->Visible = false;
				 labelGradien->Visible = false;
				 textBoxGradien->Visible = false;
				 scrollGradien->Visible = false;				 
				 checkBoxSeragam->Visible = true;
			 }

			 void tampilkanPeubahKontras(){
				 labelR->Visible = false;
				 textBoxR->Visible = false;
				 scrollR->Visible = false;
				 labelG->Visible = false;
				 textBoxG->Visible = false;
				 scrollG->Visible = false;
				 labelB->Visible = false;
				 textBoxB->Visible = false;
				 scrollB->Visible = false;
				 labelP->Visible = true;
				 textBoxP->Visible = true;
				 scrollP->Visible = true;
				 labelGradien->Visible = true;
				 textBoxGradien->Visible = true;
				 scrollGradien->Visible = true;				 
				 checkBoxSeragam->Visible = false;
				 labelSeragam->Visible = false;
				 textBoxSeragam->Visible = false;
				 scrollSeragam->Visible = false;
			 }

			 void tampilkanPeubahNegasi(){
				 labelR->Visible = false;
				 textBoxR->Visible = false;
				 scrollR->Visible = false;
				 labelG->Visible = false;
				 textBoxG->Visible = false;
				 scrollG->Visible = false;
				 labelB->Visible = false;
				 textBoxB->Visible = false;
				 scrollB->Visible = false;
				 labelP->Visible = false;
				 textBoxP->Visible = false;
				 scrollP->Visible = false;
				 labelGradien->Visible = false;
				 textBoxGradien->Visible = false;
				 scrollGradien->Visible = false;				 
				 checkBoxSeragam->Visible = false;
				 labelSeragam->Visible = false;
				 textBoxSeragam->Visible = false;
				 scrollSeragam->Visible = false;
			 }

			 void operasiKecemerlangan(){
				 int nilaiB = scrollB->Value;
				 int nilaiG = scrollG->Value;
				 int nilaiR = scrollR->Value;
				 int nilaiSeragam = scrollSeragam->Value;
				 //if(checkBoxSeragam->Checked == false){					 
					 if(checkBoxKombinasi->Checked == true && checkBoxSeragam->Checked == false){
						CitraHasil = CitraTerolah + cv::Scalar(nilaiB, nilaiG, nilaiR);
						tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
						textBoxR->Text = Convert::ToString(nilaiR);
						textBoxG->Text = Convert::ToString(nilaiG);
						textBoxB->Text = Convert::ToString(nilaiB);
					 }
					 else if(checkBoxKombinasi->Checked == false && checkBoxSeragam->Checked == false){
						CitraHasil = Citra + cv::Scalar(nilaiB, nilaiG, nilaiR);
						tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
						textBoxR->Text = Convert::ToString(nilaiR);
						textBoxG->Text = Convert::ToString(nilaiG);
						textBoxB->Text = Convert::ToString(nilaiB);
					 }					 					 
				 //}
				 //else if(checkBoxSeragam->Checked == true){					 
					 else if(checkBoxKombinasi->Checked == true && checkBoxSeragam->Checked == true){
						CitraHasil = CitraTerolah + cv::Scalar(nilaiSeragam, nilaiSeragam, nilaiSeragam);
						tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);						
						textBoxSeragam->Text = Convert::ToString(nilaiSeragam);
					 }
					 else if(checkBoxKombinasi->Checked == false && checkBoxSeragam->Checked == true){
						CitraHasil = Citra + cv::Scalar(nilaiSeragam, nilaiSeragam, nilaiSeragam);
						tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
						scrollR->Value = scrollSeragam->Value;
						scrollG->Value = scrollSeragam->Value;
						scrollB->Value = scrollSeragam->Value;
						textBoxR->Text = Convert::ToString(nilaiSeragam);
						textBoxG->Text = Convert::ToString(nilaiSeragam);
						textBoxB->Text = Convert::ToString(nilaiSeragam);
						textBoxSeragam->Text = Convert::ToString(nilaiSeragam);
					 }					 
				 //}				 
			 }

			 void operasiKontras(){
				 int gradien = scrollGradien->Value;
				 float nilaiGradien = gradien/10.0f; //Manipulasi agar nilai dari scroll menjadi float
				 int nilaiP = scrollP->Value;
				 if(checkBoxKombinasi->Checked == true){
					 CitraHasil = nilaiGradien*(CitraTerolah-cv::Scalar(nilaiP, nilaiP, nilaiP))-cv::Scalar(nilaiP, nilaiP, nilaiP);
					 tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
				 }
				 else if(checkBoxKombinasi->Checked == false){
					 CitraHasil = nilaiGradien*(Citra-cv::Scalar(nilaiP, nilaiP, nilaiP))-cv::Scalar(nilaiP, nilaiP, nilaiP);				 
					 tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
				 }
				 textBoxGradien->Text = Convert::ToString(nilaiGradien);
				 textBoxP->Text = Convert::ToString(nilaiP);
			 }

			 void operasiNegasi(){
				 int kMax = 255;
				 if(checkBoxKombinasi->Checked == true){
					 CitraHasil = cv::Scalar(kMax, kMax, kMax) - CitraTerolah;
					 tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
				 }
				 else if(checkBoxKombinasi->Checked == false){
					 CitraHasil = cv::Scalar(kMax, kMax, kMax) - Citra;				 
					 tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
				 }
			 }
	
private: System::Void tombolOperasiKecemerlangan_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tampilkanPeubahKecemerlangan();
			 if(checkBoxKombinasi->Checked == true){
				 CitraHasil.copyTo(CitraTerolah);
			 }
			 else if(checkBoxKombinasi->Checked == false){
				 Citra.copyTo(CitraHasil);
				 tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
				 reset();
			 }
		 }
private: System::Void tombolOperasiKontras_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 tampilkanPeubahKontras();
			 if(checkBoxKombinasi->Checked == true){
				 CitraHasil.copyTo(CitraTerolah);
			 }
			 else if(checkBoxKombinasi->Checked == false){
				 Citra.copyTo(CitraHasil);
				 tampilanCitraOlah->Image = IplImageToBitmap(&(IplImage) CitraHasil);
				 reset();
			 }
		 }
private: System::Void tombolOperasiNegasi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 operasiNegasi();
			 if(checkBoxKombinasi->Checked == true){
				 CitraHasil.copyTo(CitraTerolah);
			 }
			 else if(checkBoxKombinasi->Checked == false){
				 reset();
			 }
		 }
private: System::Void scrollR_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 operasiKecemerlangan();
		 }
private: System::Void scrollP_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 operasiKontras();
		 }
private: System::Void scrollG_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 operasiKecemerlangan();
		 }
private: System::Void scrollGradien_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 operasiKontras();
		 }
private: System::Void scrollB_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 operasiKecemerlangan();
		 }
private: System::Void scrollSeragam_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 operasiKecemerlangan();
		 }
private: System::Void checkBoxSeragam_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBoxSeragam->Checked == true){
				 labelSeragam->Visible = true;
				 textBoxSeragam->Visible = true;
				 scrollSeragam->Visible = true;
			 }
			 else if(checkBoxSeragam->Checked == false){
				 labelSeragam->Visible = false;
				 textBoxSeragam->Visible = false;
				 scrollSeragam->Visible = false;
			 }
		 }
private: System::Void checkBoxKombinasi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBoxKombinasi->Checked == true){
				 CitraHasil.copyTo(CitraTerolah);
			 }
			 else if(checkBoxKombinasi->Checked == false){
				 reset();
			 }
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
