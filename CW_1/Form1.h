#pragma once


namespace CppCLRWinformsProjekt {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;



	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьФайлToolStripMenuItem;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox1->Location = System::Drawing::Point(136, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(56, 23);
			this->comboBox1->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox2->Location = System::Drawing::Point(137, 96);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(55, 23);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox3->Location = System::Drawing::Point(137, 126);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(55, 23);
			this->comboBox3->TabIndex = 3;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox4->Location = System::Drawing::Point(137, 156);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(55, 23);
			this->comboBox4->TabIndex = 4;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox5->Location = System::Drawing::Point(137, 186);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(55, 23);
			this->comboBox5->TabIndex = 5;
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox6->Location = System::Drawing::Point(137, 217);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(55, 23);
			this->comboBox6->TabIndex = 6;
			// 
			// comboBox7
			// 
			this->comboBox7->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox7->Location = System::Drawing::Point(137, 246);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(55, 23);
			this->comboBox7->TabIndex = 7;
			// 
			// comboBox8
			// 
			this->comboBox8->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8", L"9", L"10", L"11", L"12"
			});
			this->comboBox8->Location = System::Drawing::Point(137, 276);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(55, 23);
			this->comboBox8->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 44);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(8, 456);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 44);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Закрасить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(112, 456);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 44);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(17, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Сторона";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(139, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 19);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Дни";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(18, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Север";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(18, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Северо-Восток";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(18, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Восток";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(18, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Юго-Восток";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(18, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Юг";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(18, 223);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Юго-Запад";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(18, 253);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 16);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Запад";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(18, 283);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Северо-Запад";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBox7);
			this->groupBox1->Controls->Add(this->comboBox8);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(560, 80);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(198, 424);
			this->groupBox1->TabIndex = 23;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Направление ветра";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(120, 360);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 17);
			this->label18->TabIndex = 32;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(120, 328);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 17);
			this->label17->TabIndex = 31;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 360);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(56, 17);
			this->label16->TabIndex = 30;
			this->label16->Text = L" Сумма";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 328);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 17);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Осталось";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Location = System::Drawing::Point(216, 400);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(127, 108);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->pictureBox1->Location = System::Drawing::Point(8, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(539, 354);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(520, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(16, 200);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(256, 48);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 28;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(248, 360);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 29;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(762, 28);
			this->menuStrip1->TabIndex = 30;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->открытьФайлToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(217, 26);
			this->toolStripMenuItem1->Text = L"Сохранить в файл";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// открытьФайлToolStripMenuItem
			// 
			this->открытьФайлToolStripMenuItem->Name = L"открытьФайлToolStripMenuItem";
			this->открытьФайлToolStripMenuItem->Size = System::Drawing::Size(217, 26);
			this->открытьФайлToolStripMenuItem->Text = L"Открыть файл";
			this->открытьФайлToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::открытьФайлToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(118, 24);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::оПрограммеToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(762, 514);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"WindRose by JK";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: int unit = 25; //шаг в пискелах
		  int check = 31;
		  int sum = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox1->SelectedIndex > -1 || comboBox2->SelectedIndex > -1 || comboBox3->SelectedIndex > -1 || comboBox4->SelectedIndex > -1
			|| comboBox5->SelectedIndex > -1 || comboBox6->SelectedIndex > -1 || comboBox7->SelectedIndex > -1 || comboBox8->SelectedIndex > -1)
		{

			int pW = pictureBox1->Width, pH = pictureBox1->Height;
			Bitmap^ img = gcnew Bitmap(pW, pH);
			//создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
			Graphics^ g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности
			//рисуем сетку:
			for (int i = 0; i < pW; i += unit) g->DrawLine(Pens::MediumSlateBlue, i, 0, i, pH);
			for (int i = 0; i < pH; i += unit)  g->DrawLine(Pens::MediumSlateBlue, 0, i, pW, i);
			//находим середину и рисуем линии осей:
			int mX = int(pW / 2 - pW / 2 % unit);
			int mY = int(pH / 2 - pH / 2 % unit);
			g->DrawLine(Pens::Black, mX, 0, mX, pH);
			g->DrawLine(Pens::Black, 0, mY, pW, mY);
			g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
			g->TranslateTransform((float)mX, -(float)mY); //смещаем нулевую координату на пересечение осей
			//рисуем график:

			double x, y;
			Pen^ gPen = gcnew Pen(Color::Red, 1);

			switch (comboBox1->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0 * unit;
				y = 0.5 * unit;
				check = check - 1;
				sum = sum + 1;

				break;
			case 2:
				x = 0 * unit;
				y = 1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 0 * unit;
				y = 1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 0 * unit;
				y = 2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 0 * unit;
				y = 2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 0 * unit;
				y = 3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 0 * unit;
				y = 3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 0 * unit;
				y = 4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 0 * unit;
				y = 4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 0 * unit;
				y = 5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 0 * unit;
				y = 5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 0 * unit;
				y = 6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;

			}
			Point point1 = Point(x, y);

			switch (comboBox2->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0.5 * unit;
				y = 0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 1 * unit;
				y = 1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 1.5 * unit;
				y = 1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 2 * unit;
				y = 2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 2.5 * unit;
				y = 2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 3 * unit;
				y = 3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 3.5 * unit;
				y = 3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 4 * unit;
				y = 4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 4.5 * unit;
				y = 4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 5 * unit;
				y = 5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 5.5 * unit;
				y = 5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 6 * unit;
				y = 6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point2 = Point(x, y);

			switch (comboBox3->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0.5 * unit;
				y = 0 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 1 * unit;
				y = 0 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 1.5 * unit;
				y = 0 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 2 * unit;
				y = 0 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 2.5 * unit;
				y = 0 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 3 * unit;
				y = 0 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 3.5 * unit;
				y = 0 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 4 * unit;
				y = 0 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 4.5 * unit;
				y = 0 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 5 * unit;
				y = 0 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 5.5 * unit;
				y = 0 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 6 * unit;
				y = 0 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point3 = Point(x, y);

			switch (comboBox4->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0.5 * unit;
				y = -0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 1 * unit;
				y = -1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 1.5 * unit;
				y = -1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 2 * unit;
				y = -2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 2.5 * unit;
				y = -2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 3 * unit;
				y = -3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 3.5 * unit;
				y = -3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 4 * unit;
				y = -4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 4.5 * unit;
				y = -4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 5 * unit;
				y = -5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 5.5 * unit;
				y = -5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 6 * unit;
				y = -6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point4 = Point(x, y);

			switch (comboBox5->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0 * unit;
				y = -0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 0 * unit;
				y = -1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 0 * unit;
				y = -1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 0 * unit;
				y = -2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 0 * unit;
				y = -2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 0 * unit;
				y = -3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 0 * unit;
				y = -3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 0 * unit;
				y = -4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 0 * unit;
				y = -4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 0 * unit;
				y = -5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 0 * unit;
				y = -5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 0 * unit;
				y = -6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point5 = Point(x, y);

			switch (comboBox6->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = -0.5 * unit;
				y = -0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = -1 * unit;
				y = -1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = -1.5 * unit;
				y = -1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = -2 * unit;
				y = -2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = -2.5 * unit;
				y = -2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = -3 * unit;
				y = -3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = -3.5 * unit;
				y = -3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = -4 * unit;
				y = -4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = -4.5 * unit;
				y = -4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = -5 * unit;
				y = -5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = -5.5 * unit;
				y = -5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = -6 * unit;
				y = -6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point6 = Point(x, y);

			switch (comboBox7->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = -0.5 * unit;
				y = 0 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = -1 * unit;
				y = 0 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = -1.5 * unit;
				y = 0 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = -2 * unit;
				y = 0 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = -2.5 * unit;
				y = 0 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = -3 * unit;
				y = 0 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = -3.5 * unit;
				y = 0 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = -4 * unit;
				y = 0 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = -4.5 * unit;
				y = 0 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = -5 * unit;
				y = 0 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = -5.5 * unit;
				y = 0 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = -6 * unit;
				y = 0 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point7 = Point(x, y);

			switch (comboBox8->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = -0.5 * unit;
				y = 0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = -1 * unit;
				y = 1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = -1.5 * unit;
				y = 1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = -2 * unit;
				y = 2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = -2.5 * unit;
				y = 2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = -3 * unit;
				y = 3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = -3.5 * unit;
				y = 3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = -4 * unit;
				y = 4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = -4.5 * unit;
				y = 4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = -5 * unit;
				y = 5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = -5.5 * unit;
				y = 5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = -6 * unit;
				y = 6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point8 = Point(x, y);

			if (check < 0)
			{
				if ((sum % 10 > 4) || (sum % 10 == 0) || (sum % 100 == 11) || (sum % 100 == 12) || (sum % 100 == 13) || (sum % 100 == 14))
				{
					MessageBox::Show("Ошибка!\nВы ввели " + sum + " дней\nПожалуйста введите не больше 31 дня", "Error 2");

				}
				if ((sum % 10 == 2) || (sum % 10 == 3) || (sum % 10 == 4))
				{
					MessageBox::Show("Ошибка!\nВы ввели " + sum + " дня\nПожалуйста введите не больше 31 дня", "Error 2");

				}
				if (sum % 10 == 1)
				{
					MessageBox::Show("Ошибка!\nВы ввели " + sum + " день\nПожалуйста введите не больше 31 дня", "Error 2");

				}
				check = 31;
				sum = 0;
			}

			else
			{
				label1->Text = "12";
				label12->Text = "-12";
				label13->Text = "12";
				label14->Text = "-12";

				label17->Text = check.ToString();
				label18->Text = sum.ToString();
				check = 31;
				sum = 0;

				array <Point>^ curvePoints = { point1,point2,point3,point4,point5,point6,point7,point8 };
				g->DrawPolygon(gPen, curvePoints);
				this->pictureBox1->Image = img; //присвоение и отображение изображения в PictureBox

			}
		}
		else
		{
			MessageBox::Show("Ошибка!\nВы не выбрали направление ветра", "Error 1");

		}

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox1->SelectedIndex > -1 || comboBox2->SelectedIndex > -1 || comboBox3->SelectedIndex > -1 || comboBox4->SelectedIndex > -1
			|| comboBox5->SelectedIndex > -1 || comboBox6->SelectedIndex > -1 || comboBox7->SelectedIndex > -1 || comboBox8->SelectedIndex > -1)
		{

			int pW = pictureBox1->Width, pH = pictureBox1->Height;
			Bitmap^ img = gcnew Bitmap(pW, pH);
			//создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
			Graphics^ graf = Graphics::FromImage(img); //создаем устройство для рисования на поверхности
			HatchBrush^ HBrush = gcnew HatchBrush(HatchStyle::Sphere, Color::Green, Color::Black);

			//рисуем сетку:
			for (int i = 0; i < pW; i += unit) graf->DrawLine(Pens::MediumSlateBlue, i, 0, i, pH);
			for (int i = 0; i < pH; i += unit)  graf->DrawLine(Pens::MediumSlateBlue, 0, i, pW, i);
			//находим середину и рисуем линии осей:
			int mX = int(pW / 2 - pW / 2 % unit);
			int mY = int(pH / 2 - pH / 2 % unit);
			graf->DrawLine(Pens::Black, mX, 0, mX, pH);
			graf->DrawLine(Pens::Black, 0, mY, pW, mY);
			graf->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
			graf->TranslateTransform((float)mX, -(float)mY); //смещаем нулевую координату на пересечение осей
			//рисуем график:

			double x, y;
			double s = 0.25; //границы рисования
			
			switch (comboBox1->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0 * unit;
				y = 0.5 * unit;
				check = check - 1;
				sum = sum + 1;

				break;
			case 2:
				x = 0 * unit;
				y = 1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 0 * unit;
				y = 1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 0 * unit;
				y = 2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 0 * unit;
				y = 2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 0 * unit;
				y = 3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 0 * unit;
				y = 3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 0 * unit;
				y = 4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 0 * unit;
				y = 4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 0 * unit;
				y = 5 * unit;
				check = check - 10;
				sum = sum + 11;
				break;
			case 11:
				x = 0 * unit;
				y = 5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 0 * unit;
				y = 6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;

			}
			
			Point point1 = Point(x, y);

			switch (comboBox2->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0.5 * unit;
				y = 0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 1 * unit;
				y = 1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 1.5 * unit;
				y = 1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 2 * unit;
				y = 2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 2.5 * unit;
				y = 2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 3 * unit;
				y = 3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 3.5 * unit;
				y = 3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 4 * unit;
				y = 4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 4.5 * unit;
				y = 4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 5 * unit;
				y = 5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 5.5 * unit;
				y = 5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 6 * unit;
				y = 6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
		
			Point point2 = Point(x, y);

			switch (comboBox3->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0.5 * unit;
				y = 0 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 1 * unit;
				y = 0 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 1.5 * unit;
				y = 0 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 2 * unit;
				y = 0 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 2.5 * unit;
				y = 0 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 3 * unit;
				y = 0 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 3.5 * unit;
				y = 0 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 4 * unit;
				y = 0 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 4.5 * unit;
				y = 0 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 5 * unit;
				y = 0 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 5.5 * unit;
				y = 0 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 6 * unit;
				y = 0 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			
			Point point3 = Point(x, y);

			switch (comboBox4->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0.5 * unit;
				y = -0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 1 * unit;
				y = -1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 1.5 * unit;
				y = -1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 2 * unit;
				y = -2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 2.5 * unit;
				y = -2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 3 * unit;
				y = -3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 3.5 * unit;
				y = -3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 4 * unit;
				y = -4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 4.5 * unit;
				y = -4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 5 * unit;
				y = -5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 5.5 * unit;
				y = -5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 6 * unit;
				y = -6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			
			Point point4 = Point(x, y);

			switch (comboBox5->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = 0 * unit;
				y = -0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = 0 * unit;
				y = -1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = 0 * unit;
				y = -1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = 0 * unit;
				y = -2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = 0 * unit;
				y = -2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = 0 * unit;
				y = -3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = 0 * unit;
				y = -3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = 0 * unit;
				y = -4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = 0 * unit;
				y = -4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = 0 * unit;
				y = -5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = 0 * unit;
				y = -5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = 0 * unit;
				y = -6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
		
			Point point5 = Point(x, y);

			switch (comboBox6->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = -0.5 * unit;
				y = -0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = -1 * unit;
				y = -1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = -1.5 * unit;
				y = -1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = -2 * unit;
				y = -2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = -2.5 * unit;
				y = -2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = -3 * unit;
				y = -3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = -3.5 * unit;
				y = -3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = -4 * unit;
				y = -4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = -4.5 * unit;
				y = -4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = -5 * unit;
				y = -5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = -5.5 * unit;
				y = -5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = -6 * unit;
				y = -6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
		

			Point point6 = Point(x, y);

			switch (comboBox7->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = -0.5 * unit;
				y = 0 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = -1 * unit;
				y = 0 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = -1.5 * unit;
				y = 0 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = -2 * unit;
				y = 0 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = -2.5 * unit;
				y = 0 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = -3 * unit;
				y = 0 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = -3.5 * unit;
				y = 0 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = -4 * unit;
				y = 0 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = -4.5 * unit;
				y = 0 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = -5 * unit;
				y = 0 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = -5.5 * unit;
				y = 0 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = -6 * unit;
				y = 0 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			
			Point point7 = Point(x, y);

			switch (comboBox8->SelectedIndex)
			{
			case 0:
				x = 0 * unit;
				y = 0 * unit;
				break;

			case 1:
				x = -0.5 * unit;
				y = 0.5 * unit;
				check = check - 1;
				sum = sum + 1;
				break;
			case 2:
				x = -1 * unit;
				y = 1 * unit;
				check = check - 2;
				sum = sum + 2;
				break;
			case 3:
				x = -1.5 * unit;
				y = 1.5 * unit;
				check = check - 3;
				sum = sum + 3;
				break;
			case 4:
				x = -2 * unit;
				y = 2 * unit;
				check = check - 4;
				sum = sum + 4;
				break;
			case 5:
				x = -2.5 * unit;
				y = 2.5 * unit;
				check = check - 5;
				sum = sum + 5;
				break;
			case 6:
				x = -3 * unit;
				y = 3 * unit;
				check = check - 6;
				sum = sum + 6;
				break;
			case 7:
				x = -3.5 * unit;
				y = 3.5 * unit;
				check = check - 7;
				sum = sum + 7;
				break;
			case 8:
				x = -4 * unit;
				y = 4 * unit;
				check = check - 8;
				sum = sum + 8;
				break;
			case 9:
				x = -4.5 * unit;
				y = 4.5 * unit;
				check = check - 9;
				sum = sum + 9;
				break;
			case 10:
				x = -5 * unit;
				y = 5 * unit;
				check = check - 10;
				sum = sum + 10;
				break;
			case 11:
				x = -5.5 * unit;
				y = 5.5 * unit;
				check = check - 11;
				sum = sum + 11;
				break;
			case 12:
				x = -6 * unit;
				y = 6 * unit;
				check = check - 12;
				sum = sum + 12;
				break;
			}
			Point point8 = Point(x, y);
			if (check < 0)
			{
				if ((sum % 10 > 4) || (sum % 10 == 0) || (sum % 100 == 11) || (sum % 100 == 12) || (sum % 100 == 13) || (sum % 100 == 14))
				{
					MessageBox::Show("Ошибка!\nВы ввели " + sum + " дней\nПожалуйста введите не больше 31 дня", "Error 2");

				}
				if ((sum % 10 == 2) || (sum % 10 == 3) || (sum % 10 == 4))
				{
					MessageBox::Show("Ошибка!\nВы ввели " + sum + " дня\nПожалуйста введите не больше 31 дня", "Error 2");

				}
				if (sum % 10 == 1)
				{
					MessageBox::Show("Ошибка!\nВы ввели " + sum + " день\nПожалуйста введите не больше 31 дня", "Error 2");

				}
				check = 31;
				sum = 0;
			}

			else
			{

				label17->Text = check.ToString();
				label18->Text = sum.ToString();
				check = 31;
				sum = 0;

				array <Point>^ curvePoints = { point1,point2,point3,point4,point5,point6,point7,point8 };
				graf->FillClosedCurve(HBrush, curvePoints);
				this->pictureBox1->Image = img; //присвоение и отображение изображения в PictureBox
			}

		}
		else
		{
			MessageBox::Show("Ошибка!\nВы не выбрали направление ветра", "Error 1");
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "";
		label12->Text = "";
		label13->Text = "";
		label14->Text = "";

		check = 31;
		sum = 0;
		label17->Text = check.ToString();
		label18->Text = sum.ToString();

		Graphics^ graf = pictureBox1->CreateGraphics();
		graf->Clear(Color::LightGoldenrodYellow);

		comboBox1->SelectedIndex = -1;
		comboBox2->SelectedIndex = -1;
		comboBox3->SelectedIndex = -1;
		comboBox4->SelectedIndex = -1;
		comboBox5->SelectedIndex = -1;
		comboBox6->SelectedIndex = -1;
		comboBox7->SelectedIndex = -1;
		comboBox8->SelectedIndex = -1;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		pictureBox2->Image = Image::FromFile("D:\\LB_JK\\LB_JK\\CW_1\\WindRose.PNG");
		label17->Text = check.ToString();
		label18->Text = sum.ToString();
	}

	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("WindRose -  это программа по построения розы ветров по метеорологическим данным за месяц.\n\nПрограмма разработана студентом 'ХПИ' - Харьковский Политехнический Институт\nКулдошин Е.И.\nГруппа: КН-320В  ", "О программе");

	}
	private: System::Void открытьФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("D:\\LB_JK\\LB_JK\\CW_1\\Направление ветра.txt");
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamWriter^ fp = System::IO::File::CreateText("D:\\LB_JK\\LB_JK\\CW_1\\Направление ветра.txt");

		fp->WriteLine("Направления ветров:\n");
		fp->WriteLine("Cевер -> " + comboBox1->Text);
		fp->WriteLine("Cеверо-Восток -> " + comboBox2->Text);
		fp->WriteLine("Восток -> " + comboBox3->Text);
		fp->WriteLine("Юго-Восток -> " + comboBox4->Text);
		fp->WriteLine("Юг -> " + comboBox5->Text);
		fp->WriteLine("Юго-Запад -> " + comboBox6->Text);
		fp->WriteLine("Запад -> " + comboBox7->Text);
		fp->WriteLine("Cеверо-Запад -> " + comboBox8->Text);
		fp->Close();


	}
	};
}
