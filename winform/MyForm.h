#pragma once
#include "../../Kursach/Kursach/functions.h"


namespace winform {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrix_A;
	protected:

	private: System::Windows::Forms::NumericUpDown^ numericUpDownM_A;







	private: System::Windows::Forms::NumericUpDown^ numericUpDownN_A;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemExit;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItemInfo;


	private: System::Windows::Forms::GroupBox^ groupBoxMatrix_A;
	private: System::Windows::Forms::Button^ buttonCreate_A;











	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrix_B;
	private: System::Windows::Forms::Button^ buttonCreate_B;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrix_B;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownN_B;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownM_B;
	private: System::Windows::Forms::GroupBox^ groupBoxMatrix_C;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrix_C;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonAdd;


	private: System::Windows::Forms::Button^ buttonDeduct;

	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonDivide;




	private: System::Windows::Forms::Button^ buttonMultiplyBy_A;
	private: System::Windows::Forms::TextBox^ textBoxMultiplyBy_A;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPower_A;



	private: System::Windows::Forms::Button^ buttonPower_A;
	private: System::Windows::Forms::Button^ buttonInverse_A;


	private: System::Windows::Forms::Button^ buttonTranspose_A;
	private: System::Windows::Forms::TextBox^ textBoxResult;



	private: System::Windows::Forms::Button^ buttonDeterm_A;

	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownPower_B;


	private: System::Windows::Forms::Button^ buttonPower_B;
	private: System::Windows::Forms::Button^ buttonInverse_B;


	private: System::Windows::Forms::Button^ buttonTranspose_B;


	private: System::Windows::Forms::Button^ buttonDeterm_B;
private: System::Windows::Forms::TextBox^ textBoxMultiplyBy_B;



	private: System::Windows::Forms::Button^ buttonMultiplyBy_B;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ buttonRank_A;
private: System::Windows::Forms::Button^ buttonRank_B;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrix_A = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDownM_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownN_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItemInfo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxMatrix_A = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreate_A = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRank_A = (gcnew System::Windows::Forms::Button());
			this->numericUpDownPower_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonPower_A = (gcnew System::Windows::Forms::Button());
			this->buttonInverse_A = (gcnew System::Windows::Forms::Button());
			this->buttonTranspose_A = (gcnew System::Windows::Forms::Button());
			this->buttonDeterm_A = (gcnew System::Windows::Forms::Button());
			this->textBoxMultiplyBy_A = (gcnew System::Windows::Forms::TextBox());
			this->buttonMultiplyBy_A = (gcnew System::Windows::Forms::Button());
			this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxMatrix_B = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCreate_B = (gcnew System::Windows::Forms::Button());
			this->dataGridViewMatrix_B = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownN_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownM_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBoxMatrix_C = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrix_C = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDeduct = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRank_B = (gcnew System::Windows::Forms::Button());
			this->numericUpDownPower_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonPower_B = (gcnew System::Windows::Forms::Button());
			this->buttonInverse_B = (gcnew System::Windows::Forms::Button());
			this->buttonTranspose_B = (gcnew System::Windows::Forms::Button());
			this->buttonDeterm_B = (gcnew System::Windows::Forms::Button());
			this->textBoxMultiplyBy_B = (gcnew System::Windows::Forms::TextBox());
			this->buttonMultiplyBy_B = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_A))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBoxMatrix_A->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPower_A))->BeginInit();
			this->groupBoxMatrix_B->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_B))->BeginInit();
			this->groupBoxMatrix_C->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix_C))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPower_B))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ìàòðèöÿ À";
			// 
			// dataGridViewMatrix_A
			// 
			this->dataGridViewMatrix_A->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrix_A->Location = System::Drawing::Point(6, 34);
			this->dataGridViewMatrix_A->Name = L"dataGridViewMatrix_A";
			this->dataGridViewMatrix_A->RowHeadersWidth = 51;
			this->dataGridViewMatrix_A->RowTemplate->Height = 24;
			this->dataGridViewMatrix_A->Size = System::Drawing::Size(257, 176);
			this->dataGridViewMatrix_A->TabIndex = 1;
			// 
			// numericUpDownM_A
			// 
			this->numericUpDownM_A->Location = System::Drawing::Point(62, 216);
			this->numericUpDownM_A->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDownM_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM_A->Name = L"numericUpDownM_A";
			this->numericUpDownM_A->Size = System::Drawing::Size(50, 22);
			this->numericUpDownM_A->TabIndex = 9;
			this->numericUpDownM_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDownN_A
			// 
			this->numericUpDownN_A->Location = System::Drawing::Point(6, 216);
			this->numericUpDownN_A->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDownN_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN_A->Name = L"numericUpDownN_A";
			this->numericUpDownN_A->Size = System::Drawing::Size(50, 22);
			this->numericUpDownN_A->TabIndex = 10;
			this->numericUpDownN_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItemExit,
					this->âèõ³äToolStripMenuItemInfo
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1113, 28);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItemExit
			// 
			this->toolStripMenuItemExit->Name = L"toolStripMenuItemExit";
			this->toolStripMenuItemExit->Size = System::Drawing::Size(60, 24);
			this->toolStripMenuItemExit->Text = L"Âèõ³ä";
			this->toolStripMenuItemExit->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItemExit_Click);
			// 
			// âèõ³äToolStripMenuItemInfo
			// 
			this->âèõ³äToolStripMenuItemInfo->Name = L"âèõ³äToolStripMenuItemInfo";
			this->âèõ³äToolStripMenuItemInfo->Size = System::Drawing::Size(124, 24);
			this->âèõ³äToolStripMenuItemInfo->Text = L"Ïðî ïðîãðàìó";
			this->âèõ³äToolStripMenuItemInfo->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItemInfo_Click);
			// 
			// groupBoxMatrix_A
			// 
			this->groupBoxMatrix_A->Controls->Add(this->buttonCreate_A);
			this->groupBoxMatrix_A->Controls->Add(this->dataGridViewMatrix_A);
			this->groupBoxMatrix_A->Controls->Add(this->label1);
			this->groupBoxMatrix_A->Controls->Add(this->numericUpDownN_A);
			this->groupBoxMatrix_A->Controls->Add(this->numericUpDownM_A);
			this->groupBoxMatrix_A->Location = System::Drawing::Point(12, 44);
			this->groupBoxMatrix_A->Name = L"groupBoxMatrix_A";
			this->groupBoxMatrix_A->Size = System::Drawing::Size(273, 249);
			this->groupBoxMatrix_A->TabIndex = 13;
			this->groupBoxMatrix_A->TabStop = false;
			// 
			// buttonCreate_A
			// 
			this->buttonCreate_A->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonCreate_A->Location = System::Drawing::Point(151, 211);
			this->buttonCreate_A->MinimumSize = System::Drawing::Size(81, 30);
			this->buttonCreate_A->Name = L"buttonCreate_A";
			this->buttonCreate_A->Size = System::Drawing::Size(112, 30);
			this->buttonCreate_A->TabIndex = 15;
			this->buttonCreate_A->Text = L"Ñòâîðèòè";
			this->buttonCreate_A->UseVisualStyleBackColor = false;
			this->buttonCreate_A->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_A_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(666, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"=";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->buttonRank_A);
			this->groupBox4->Controls->Add(this->numericUpDownPower_A);
			this->groupBox4->Controls->Add(this->buttonPower_A);
			this->groupBox4->Controls->Add(this->buttonInverse_A);
			this->groupBox4->Controls->Add(this->buttonTranspose_A);
			this->groupBox4->Controls->Add(this->buttonDeterm_A);
			this->groupBox4->Controls->Add(this->textBoxMultiplyBy_A);
			this->groupBox4->Controls->Add(this->buttonMultiplyBy_A);
			this->groupBox4->Location = System::Drawing::Point(18, 311);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(267, 245);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ä³¿ íàä À";
			// 
			// buttonRank_A
			// 
			this->buttonRank_A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonRank_A->Location = System::Drawing::Point(6, 208);
			this->buttonRank_A->Name = L"buttonRank_A";
			this->buttonRank_A->Size = System::Drawing::Size(185, 31);
			this->buttonRank_A->TabIndex = 29;
			this->buttonRank_A->Text = L"Ðàíã";
			this->buttonRank_A->UseVisualStyleBackColor = false;
			this->buttonRank_A->Click += gcnew System::EventHandler(this, &MyForm::buttonRank_A_Click);
			// 
			// numericUpDownPower_A
			// 
			this->numericUpDownPower_A->Location = System::Drawing::Point(197, 100);
			this->numericUpDownPower_A->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownPower_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownPower_A->Name = L"numericUpDownPower_A";
			this->numericUpDownPower_A->Size = System::Drawing::Size(60, 22);
			this->numericUpDownPower_A->TabIndex = 16;
			this->numericUpDownPower_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// buttonPower_A
			// 
			this->buttonPower_A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonPower_A->Location = System::Drawing::Point(6, 95);
			this->buttonPower_A->Name = L"buttonPower_A";
			this->buttonPower_A->Size = System::Drawing::Size(185, 31);
			this->buttonPower_A->TabIndex = 28;
			this->buttonPower_A->Text = L"Ï³äíåñåííÿ äî ñòåïåíÿ";
			this->buttonPower_A->UseVisualStyleBackColor = false;
			this->buttonPower_A->Click += gcnew System::EventHandler(this, &MyForm::buttonPower_A_Click);
			// 
			// buttonInverse_A
			// 
			this->buttonInverse_A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonInverse_A->Location = System::Drawing::Point(6, 169);
			this->buttonInverse_A->Name = L"buttonInverse_A";
			this->buttonInverse_A->Size = System::Drawing::Size(185, 31);
			this->buttonInverse_A->TabIndex = 27;
			this->buttonInverse_A->Text = L"Îáåðíåíà";
			this->buttonInverse_A->UseVisualStyleBackColor = false;
			this->buttonInverse_A->Click += gcnew System::EventHandler(this, &MyForm::buttonInverse_A_Click);
			// 
			// buttonTranspose_A
			// 
			this->buttonTranspose_A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonTranspose_A->Location = System::Drawing::Point(6, 132);
			this->buttonTranspose_A->Name = L"buttonTranspose_A";
			this->buttonTranspose_A->Size = System::Drawing::Size(185, 31);
			this->buttonTranspose_A->TabIndex = 26;
			this->buttonTranspose_A->Text = L"Òðàíñïîíóâàííÿ";
			this->buttonTranspose_A->UseVisualStyleBackColor = false;
			this->buttonTranspose_A->Click += gcnew System::EventHandler(this, &MyForm::buttonTranspose_A_Click);
			// 
			// buttonDeterm_A
			// 
			this->buttonDeterm_A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonDeterm_A->Location = System::Drawing::Point(6, 58);
			this->buttonDeterm_A->Name = L"buttonDeterm_A";
			this->buttonDeterm_A->Size = System::Drawing::Size(185, 31);
			this->buttonDeterm_A->TabIndex = 24;
			this->buttonDeterm_A->Text = L"Âèçíà÷íèê";
			this->buttonDeterm_A->UseVisualStyleBackColor = false;
			this->buttonDeterm_A->Click += gcnew System::EventHandler(this, &MyForm::buttonDeterm_A_Click);
			// 
			// textBoxMultiplyBy_A
			// 
			this->textBoxMultiplyBy_A->Location = System::Drawing::Point(197, 25);
			this->textBoxMultiplyBy_A->Name = L"textBoxMultiplyBy_A";
			this->textBoxMultiplyBy_A->Size = System::Drawing::Size(60, 22);
			this->textBoxMultiplyBy_A->TabIndex = 23;
			// 
			// buttonMultiplyBy_A
			// 
			this->buttonMultiplyBy_A->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonMultiplyBy_A->Location = System::Drawing::Point(6, 21);
			this->buttonMultiplyBy_A->Name = L"buttonMultiplyBy_A";
			this->buttonMultiplyBy_A->Size = System::Drawing::Size(185, 31);
			this->buttonMultiplyBy_A->TabIndex = 22;
			this->buttonMultiplyBy_A->Text = L"Ïîìíîæèòè íà ÷èñëî";
			this->buttonMultiplyBy_A->UseVisualStyleBackColor = false;
			this->buttonMultiplyBy_A->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiplyBy_A_Click);
			// 
			// textBoxResult
			// 
			this->textBoxResult->Location = System::Drawing::Point(120, 221);
			this->textBoxResult->Name = L"textBoxResult";
			this->textBoxResult->Size = System::Drawing::Size(104, 22);
			this->textBoxResult->TabIndex = 25;
			// 
			// groupBoxMatrix_B
			// 
			this->groupBoxMatrix_B->Controls->Add(this->buttonCreate_B);
			this->groupBoxMatrix_B->Controls->Add(this->dataGridViewMatrix_B);
			this->groupBoxMatrix_B->Controls->Add(this->label3);
			this->groupBoxMatrix_B->Controls->Add(this->numericUpDownN_B);
			this->groupBoxMatrix_B->Controls->Add(this->numericUpDownM_B);
			this->groupBoxMatrix_B->Location = System::Drawing::Point(355, 44);
			this->groupBoxMatrix_B->Name = L"groupBoxMatrix_B";
			this->groupBoxMatrix_B->Size = System::Drawing::Size(273, 249);
			this->groupBoxMatrix_B->TabIndex = 16;
			this->groupBoxMatrix_B->TabStop = false;
			// 
			// buttonCreate_B
			// 
			this->buttonCreate_B->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->buttonCreate_B->Location = System::Drawing::Point(151, 211);
			this->buttonCreate_B->Name = L"buttonCreate_B";
			this->buttonCreate_B->Size = System::Drawing::Size(112, 30);
			this->buttonCreate_B->TabIndex = 15;
			this->buttonCreate_B->Text = L"Ñòâîðèòè";
			this->buttonCreate_B->UseVisualStyleBackColor = false;
			this->buttonCreate_B->Click += gcnew System::EventHandler(this, &MyForm::buttonCreate_B_Click);
			// 
			// dataGridViewMatrix_B
			// 
			this->dataGridViewMatrix_B->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrix_B->Location = System::Drawing::Point(6, 34);
			this->dataGridViewMatrix_B->Name = L"dataGridViewMatrix_B";
			this->dataGridViewMatrix_B->RowHeadersWidth = 51;
			this->dataGridViewMatrix_B->RowTemplate->Height = 24;
			this->dataGridViewMatrix_B->Size = System::Drawing::Size(257, 176);
			this->dataGridViewMatrix_B->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ìàòðèöÿ B";
			// 
			// numericUpDownN_B
			// 
			this->numericUpDownN_B->Location = System::Drawing::Point(6, 216);
			this->numericUpDownN_B->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDownN_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownN_B->Name = L"numericUpDownN_B";
			this->numericUpDownN_B->Size = System::Drawing::Size(50, 22);
			this->numericUpDownN_B->TabIndex = 10;
			this->numericUpDownN_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDownM_B
			// 
			this->numericUpDownM_B->Location = System::Drawing::Point(62, 216);
			this->numericUpDownM_B->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDownM_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownM_B->Name = L"numericUpDownM_B";
			this->numericUpDownM_B->Size = System::Drawing::Size(50, 22);
			this->numericUpDownM_B->TabIndex = 9;
			this->numericUpDownM_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// groupBoxMatrix_C
			// 
			this->groupBoxMatrix_C->Controls->Add(this->label5);
			this->groupBoxMatrix_C->Controls->Add(this->dataGridViewMatrix_C);
			this->groupBoxMatrix_C->Controls->Add(this->label2);
			this->groupBoxMatrix_C->Controls->Add(this->textBoxResult);
			this->groupBoxMatrix_C->Location = System::Drawing::Point(721, 44);
			this->groupBoxMatrix_C->Name = L"groupBoxMatrix_C";
			this->groupBoxMatrix_C->Size = System::Drawing::Size(273, 266);
			this->groupBoxMatrix_C->TabIndex = 17;
			this->groupBoxMatrix_C->TabStop = false;
			this->groupBoxMatrix_C->Text = L"Ðåçóëüòàòè";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->Location = System::Drawing::Point(38, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 17);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Ðåçóëüòàò";
			// 
			// dataGridViewMatrix_C
			// 
			this->dataGridViewMatrix_C->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrix_C->Location = System::Drawing::Point(6, 34);
			this->dataGridViewMatrix_C->Name = L"dataGridViewMatrix_C";
			this->dataGridViewMatrix_C->RowHeadersWidth = 51;
			this->dataGridViewMatrix_C->RowTemplate->Height = 24;
			this->dataGridViewMatrix_C->Size = System::Drawing::Size(257, 176);
			this->dataGridViewMatrix_C->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ìàòðèöÿ C";
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(291, 96);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(42, 30);
			this->buttonAdd->TabIndex = 16;
			this->buttonAdd->Text = L"+";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDeduct
			// 
			this->buttonDeduct->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonDeduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDeduct->Location = System::Drawing::Point(291, 132);
			this->buttonDeduct->Name = L"buttonDeduct";
			this->buttonDeduct->Size = System::Drawing::Size(42, 30);
			this->buttonDeduct->TabIndex = 19;
			this->buttonDeduct->Text = L"-";
			this->buttonDeduct->UseVisualStyleBackColor = false;
			this->buttonDeduct->Click += gcnew System::EventHandler(this, &MyForm::buttonDeduct_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiply->Location = System::Drawing::Point(291, 168);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(42, 30);
			this->buttonMultiply->TabIndex = 20;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivide->Location = System::Drawing::Point(291, 204);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(42, 30);
			this->buttonDivide->TabIndex = 21;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->buttonRank_B);
			this->groupBox6->Controls->Add(this->numericUpDownPower_B);
			this->groupBox6->Controls->Add(this->buttonPower_B);
			this->groupBox6->Controls->Add(this->buttonInverse_B);
			this->groupBox6->Controls->Add(this->buttonTranspose_B);
			this->groupBox6->Controls->Add(this->buttonDeterm_B);
			this->groupBox6->Controls->Add(this->textBoxMultiplyBy_B);
			this->groupBox6->Controls->Add(this->buttonMultiplyBy_B);
			this->groupBox6->Location = System::Drawing::Point(355, 311);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(273, 245);
			this->groupBox6->TabIndex = 29;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ä³¿ íàä Â";
			// 
			// buttonRank_B
			// 
			this->buttonRank_B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonRank_B->Location = System::Drawing::Point(6, 206);
			this->buttonRank_B->Name = L"buttonRank_B";
			this->buttonRank_B->Size = System::Drawing::Size(189, 31);
			this->buttonRank_B->TabIndex = 30;
			this->buttonRank_B->Text = L"Ðàíã";
			this->buttonRank_B->UseVisualStyleBackColor = false;
			this->buttonRank_B->Click += gcnew System::EventHandler(this, &MyForm::buttonRank_B_Click);
			// 
			// numericUpDownPower_B
			// 
			this->numericUpDownPower_B->Location = System::Drawing::Point(201, 100);
			this->numericUpDownPower_B->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownPower_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownPower_B->Name = L"numericUpDownPower_B";
			this->numericUpDownPower_B->Size = System::Drawing::Size(56, 22);
			this->numericUpDownPower_B->TabIndex = 16;
			this->numericUpDownPower_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// buttonPower_B
			// 
			this->buttonPower_B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonPower_B->Location = System::Drawing::Point(6, 95);
			this->buttonPower_B->Name = L"buttonPower_B";
			this->buttonPower_B->Size = System::Drawing::Size(189, 31);
			this->buttonPower_B->TabIndex = 28;
			this->buttonPower_B->Text = L"Ï³äíåñåííÿ äî ñòåïåíÿ";
			this->buttonPower_B->UseVisualStyleBackColor = false;
			this->buttonPower_B->Click += gcnew System::EventHandler(this, &MyForm::buttonPower_B_Click);
			// 
			// buttonInverse_B
			// 
			this->buttonInverse_B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonInverse_B->Location = System::Drawing::Point(6, 169);
			this->buttonInverse_B->Name = L"buttonInverse_B";
			this->buttonInverse_B->Size = System::Drawing::Size(189, 31);
			this->buttonInverse_B->TabIndex = 27;
			this->buttonInverse_B->Text = L"Îáåðíåíà";
			this->buttonInverse_B->UseVisualStyleBackColor = false;
			this->buttonInverse_B->Click += gcnew System::EventHandler(this, &MyForm::buttonInverse_B_Click);
			// 
			// buttonTranspose_B
			// 
			this->buttonTranspose_B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonTranspose_B->Location = System::Drawing::Point(6, 132);
			this->buttonTranspose_B->Name = L"buttonTranspose_B";
			this->buttonTranspose_B->Size = System::Drawing::Size(189, 31);
			this->buttonTranspose_B->TabIndex = 26;
			this->buttonTranspose_B->Text = L"Òðàíñïîíóâàííÿ";
			this->buttonTranspose_B->UseVisualStyleBackColor = false;
			this->buttonTranspose_B->Click += gcnew System::EventHandler(this, &MyForm::buttonTranspose_B_Click);
			// 
			// buttonDeterm_B
			// 
			this->buttonDeterm_B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonDeterm_B->Location = System::Drawing::Point(6, 58);
			this->buttonDeterm_B->Name = L"buttonDeterm_B";
			this->buttonDeterm_B->Size = System::Drawing::Size(189, 31);
			this->buttonDeterm_B->TabIndex = 24;
			this->buttonDeterm_B->Text = L"Âèçíà÷íèê";
			this->buttonDeterm_B->UseVisualStyleBackColor = false;
			this->buttonDeterm_B->Click += gcnew System::EventHandler(this, &MyForm::buttonDeterm_B_Click);
			// 
			// textBoxMultiplyBy_B
			// 
			this->textBoxMultiplyBy_B->Location = System::Drawing::Point(201, 25);
			this->textBoxMultiplyBy_B->Name = L"textBoxMultiplyBy_B";
			this->textBoxMultiplyBy_B->Size = System::Drawing::Size(56, 22);
			this->textBoxMultiplyBy_B->TabIndex = 23;
			// 
			// buttonMultiplyBy_B
			// 
			this->buttonMultiplyBy_B->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->buttonMultiplyBy_B->Location = System::Drawing::Point(6, 21);
			this->buttonMultiplyBy_B->Name = L"buttonMultiplyBy_B";
			this->buttonMultiplyBy_B->Size = System::Drawing::Size(189, 31);
			this->buttonMultiplyBy_B->TabIndex = 22;
			this->buttonMultiplyBy_B->Text = L"Ïîìíîæèòè íà ÷èñëî";
			this->buttonMultiplyBy_B->UseVisualStyleBackColor = false;
			this->buttonMultiplyBy_B->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiplyBy_B_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1113, 591);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonDeduct);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->groupBoxMatrix_C);
			this->Controls->Add(this->groupBoxMatrix_B);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBoxMatrix_A);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ìàòðè÷íèé êàëüêóëÿòîð";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_A))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxMatrix_A->ResumeLayout(false);
			this->groupBoxMatrix_A->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPower_A))->EndInit();
			this->groupBoxMatrix_B->ResumeLayout(false);
			this->groupBoxMatrix_B->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownN_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownM_B))->EndInit();
			this->groupBoxMatrix_C->ResumeLayout(false);
			this->groupBoxMatrix_C->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix_C))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPower_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void toolStripMenuItemExit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèõ³äToolStripMenuItemInfo_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDeduct_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreate_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCreate_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMultiplyBy_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMultiplyBy_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDeterm_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDeterm_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonPower_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonPower_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTranspose_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTranspose_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonInverse_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonInverse_B_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRank_A_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonRank_B_Click(System::Object^ sender, System::EventArgs^ e);
	   private: void ShowA();
	   private: void ShowB();
	   private:	void ShowC_A(matrix T);
	   private:	void ShowC_B(matrix T);
			  size_t CheckingTextBoxA();
			  size_t CheckingTextBoxB();
			  size_t CheckingDataGridViewMatrix_A();
			  size_t CheckingDataGridViewMatrix_B();
};
}
