#pragma once

namespace full_calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_show_opr;
	protected: 
	private: System::Windows::Forms::Button^  btn_divide;
	private: System::Windows::Forms::Button^  btn_c;
	private: System::Windows::Forms::Button^  btn_back_space;
	private: System::Windows::Forms::Button^  btn_ce;
	private: System::Windows::Forms::Button^  btn_show_res;
	private: System::Windows::Forms::Button^  btn_dec_pnt;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn_neg_pos;
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn_minus;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn_multiply;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::TextBox^  txt_display;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scientificToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;


	private: System::Windows::Forms::Button^  btn_log;
	private: System::Windows::Forms::Button^  btn_ln;


	private: System::Windows::Forms::Button^  btn_by;
	private: System::Windows::Forms::Button^  btn_exp;


	private: System::Windows::Forms::Button^  btn_percent;
	private: System::Windows::Forms::Button^  btn_hyperbolic_tan;



	private: System::Windows::Forms::Button^  btn_tan;
	private: System::Windows::Forms::Button^  btn_square_root;



	private: System::Windows::Forms::Button^  btn_inverse;
	private: System::Windows::Forms::Button^  btn_hyperbolic_cos;



	private: System::Windows::Forms::Button^  btn_cos;

	private: System::Windows::Forms::Button^  btn_square;
	private: System::Windows::Forms::Button^  btn_fact;
	private: System::Windows::Forms::Button^  btn_hyperbolic_sin;




	private: System::Windows::Forms::Button^  btn_sin;
	private: System::Windows::Forms::Button^  btn_cube_root;


	private: System::Windows::Forms::Button^  btn_x_cube;
	private: System::Windows::Forms::Button^  btn_inverse_tan;


	private: System::Windows::Forms::Button^  btn_inverse_sin;
	private: System::Windows::Forms::Button^  btn_inverse_cos;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lbl_show_opr = (gcnew System::Windows::Forms::Label());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_c = (gcnew System::Windows::Forms::Button());
			this->btn_back_space = (gcnew System::Windows::Forms::Button());
			this->btn_ce = (gcnew System::Windows::Forms::Button());
			this->btn_show_res = (gcnew System::Windows::Forms::Button());
			this->btn_dec_pnt = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn_neg_pos = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn_multiply = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->txt_display = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->btn_ln = (gcnew System::Windows::Forms::Button());
			this->btn_by = (gcnew System::Windows::Forms::Button());
			this->btn_exp = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_hyperbolic_tan = (gcnew System::Windows::Forms::Button());
			this->btn_tan = (gcnew System::Windows::Forms::Button());
			this->btn_square_root = (gcnew System::Windows::Forms::Button());
			this->btn_inverse = (gcnew System::Windows::Forms::Button());
			this->btn_hyperbolic_cos = (gcnew System::Windows::Forms::Button());
			this->btn_cos = (gcnew System::Windows::Forms::Button());
			this->btn_square = (gcnew System::Windows::Forms::Button());
			this->btn_fact = (gcnew System::Windows::Forms::Button());
			this->btn_hyperbolic_sin = (gcnew System::Windows::Forms::Button());
			this->btn_sin = (gcnew System::Windows::Forms::Button());
			this->btn_cube_root = (gcnew System::Windows::Forms::Button());
			this->btn_x_cube = (gcnew System::Windows::Forms::Button());
			this->btn_inverse_tan = (gcnew System::Windows::Forms::Button());
			this->btn_inverse_sin = (gcnew System::Windows::Forms::Button());
			this->btn_inverse_cos = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_show_opr
			// 
			this->lbl_show_opr->AutoSize = true;
			this->lbl_show_opr->BackColor = System::Drawing::Color::White;
			this->lbl_show_opr->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_show_opr->Location = System::Drawing::Point(12, 41);
			this->lbl_show_opr->Name = L"lbl_show_opr";
			this->lbl_show_opr->Size = System::Drawing::Size(0, 28);
			this->lbl_show_opr->TabIndex = 47;
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_divide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_divide->Location = System::Drawing::Point(200, 95);
			this->btn_divide->Margin = System::Windows::Forms::Padding(0);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(57, 58);
			this->btn_divide->TabIndex = 46;
			this->btn_divide->Text = L"÷";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &Form1::arithmetic_opr);
			// 
			// btn_c
			// 
			this->btn_c->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_c->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_c->Location = System::Drawing::Point(71, 95);
			this->btn_c->Name = L"btn_c";
			this->btn_c->Size = System::Drawing::Size(57, 58);
			this->btn_c->TabIndex = 45;
			this->btn_c->Text = L"C";
			this->btn_c->UseVisualStyleBackColor = false;
			this->btn_c->Click += gcnew System::EventHandler(this, &Form1::btn_c_Click);
			// 
			// btn_back_space
			// 
			this->btn_back_space->BackColor = System::Drawing::Color::Olive;
			this->btn_back_space->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_back_space.BackgroundImage")));
			this->btn_back_space->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_back_space->Font = (gcnew System::Drawing::Font(L"Wingdings", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(2)));
			this->btn_back_space->Location = System::Drawing::Point(134, 95);
			this->btn_back_space->Name = L"btn_back_space";
			this->btn_back_space->Size = System::Drawing::Size(57, 58);
			this->btn_back_space->TabIndex = 44;
			this->btn_back_space->UseVisualStyleBackColor = false;
			this->btn_back_space->Click += gcnew System::EventHandler(this, &Form1::btn_back_space_Click);
			// 
			// btn_ce
			// 
			this->btn_ce->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_ce->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_ce->Location = System::Drawing::Point(8, 95);
			this->btn_ce->Name = L"btn_ce";
			this->btn_ce->Size = System::Drawing::Size(57, 58);
			this->btn_ce->TabIndex = 43;
			this->btn_ce->Text = L"CE";
			this->btn_ce->UseVisualStyleBackColor = false;
			this->btn_ce->Click += gcnew System::EventHandler(this, &Form1::btn_ce_Click);
			// 
			// btn_show_res
			// 
			this->btn_show_res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_show_res->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_show_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_show_res->Location = System::Drawing::Point(200, 349);
			this->btn_show_res->Margin = System::Windows::Forms::Padding(0);
			this->btn_show_res->Name = L"btn_show_res";
			this->btn_show_res->Size = System::Drawing::Size(57, 58);
			this->btn_show_res->TabIndex = 42;
			this->btn_show_res->Text = L"=";
			this->btn_show_res->UseVisualStyleBackColor = false;
			this->btn_show_res->Click += gcnew System::EventHandler(this, &Form1::btn_show_res_Click);
			// 
			// btn_dec_pnt
			// 
			this->btn_dec_pnt->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->btn_dec_pnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_dec_pnt->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_dec_pnt->Location = System::Drawing::Point(134, 349);
			this->btn_dec_pnt->Name = L"btn_dec_pnt";
			this->btn_dec_pnt->Size = System::Drawing::Size(57, 58);
			this->btn_dec_pnt->TabIndex = 41;
			this->btn_dec_pnt->Text = L".";
			this->btn_dec_pnt->UseVisualStyleBackColor = false;
			this->btn_dec_pnt->Click += gcnew System::EventHandler(this, &Form1::btn_dec_pnt_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::Lime;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(71, 349);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(57, 58);
			this->btn0->TabIndex = 40;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn_neg_pos
			// 
			this->btn_neg_pos->BackColor = System::Drawing::Color::DodgerBlue;
			this->btn_neg_pos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_neg_pos->Location = System::Drawing::Point(8, 349);
			this->btn_neg_pos->Name = L"btn_neg_pos";
			this->btn_neg_pos->Size = System::Drawing::Size(57, 58);
			this->btn_neg_pos->TabIndex = 39;
			this->btn_neg_pos->Text = L"±";
			this->btn_neg_pos->UseVisualStyleBackColor = false;
			this->btn_neg_pos->Click += gcnew System::EventHandler(this, &Form1::btn_neg_pos_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(200, 284);
			this->btn_add->Margin = System::Windows::Forms::Padding(0);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(57, 58);
			this->btn_add->TabIndex = 38;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Form1::arithmetic_opr);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Lime;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(134, 284);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(57, 58);
			this->btn3->TabIndex = 37;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Lime;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(71, 284);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(57, 58);
			this->btn2->TabIndex = 36;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Lime;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(8, 284);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(57, 58);
			this->btn1->TabIndex = 35;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_minus->Location = System::Drawing::Point(200, 222);
			this->btn_minus->Margin = System::Windows::Forms::Padding(0);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(57, 58);
			this->btn_minus->TabIndex = 34;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &Form1::arithmetic_opr);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Lime;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(134, 222);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(57, 58);
			this->btn6->TabIndex = 33;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Lime;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(71, 222);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(57, 58);
			this->btn5->TabIndex = 32;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Lime;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(8, 222);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(57, 58);
			this->btn4->TabIndex = 31;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn_multiply
			// 
			this->btn_multiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_multiply->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_multiply->Location = System::Drawing::Point(200, 160);
			this->btn_multiply->Margin = System::Windows::Forms::Padding(0);
			this->btn_multiply->Name = L"btn_multiply";
			this->btn_multiply->Size = System::Drawing::Size(57, 58);
			this->btn_multiply->TabIndex = 30;
			this->btn_multiply->Text = L"×";
			this->btn_multiply->UseVisualStyleBackColor = false;
			this->btn_multiply->Click += gcnew System::EventHandler(this, &Form1::arithmetic_opr);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Lime;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(134, 160);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(57, 58);
			this->btn9->TabIndex = 29;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Lime;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(71, 160);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(57, 58);
			this->btn8->TabIndex = 28;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Lime;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(8, 160);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(57, 58);
			this->btn7->TabIndex = 27;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			// 
			// txt_display
			// 
			this->txt_display->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txt_display->Location = System::Drawing::Point(8, 34);
			this->txt_display->Multiline = true;
			this->txt_display->Name = L"txt_display";
			this->txt_display->Size = System::Drawing::Size(250, 53);
			this->txt_display->TabIndex = 26;
			this->txt_display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(536, 25);
			this->menuStrip1->TabIndex = 48;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->standardToolStripMenuItem, 
				this->scientificToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 19);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::standardToolStripMenuItem_Click);
			// 
			// scientificToolStripMenuItem
			// 
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::scientificToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_log->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_log->Location = System::Drawing::Point(279, 160);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(57, 58);
			this->btn_log->TabIndex = 67;
			this->btn_log->Text = L"Log";
			this->btn_log->UseVisualStyleBackColor = false;
			this->btn_log->Click += gcnew System::EventHandler(this, &Form1::btn_log_Click);
			// 
			// btn_ln
			// 
			this->btn_ln->BackColor = System::Drawing::Color::Olive;
			this->btn_ln->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_ln->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_ln->Location = System::Drawing::Point(345, 162);
			this->btn_ln->Name = L"btn_ln";
			this->btn_ln->Size = System::Drawing::Size(57, 58);
			this->btn_ln->TabIndex = 66;
			this->btn_ln->Text = L"Ln";
			this->btn_ln->UseVisualStyleBackColor = false;
			this->btn_ln->Click += gcnew System::EventHandler(this, &Form1::btn_ln_Click);
			// 
			// btn_by
			// 
			this->btn_by->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btn_by->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_by->Location = System::Drawing::Point(279, 98);
			this->btn_by->Name = L"btn_by";
			this->btn_by->Size = System::Drawing::Size(57, 58);
			this->btn_by->TabIndex = 65;
			this->btn_by->Text = L"π";
			this->btn_by->UseVisualStyleBackColor = false;
			this->btn_by->Click += gcnew System::EventHandler(this, &Form1::btn_by_Click);
			// 
			// btn_exp
			// 
			this->btn_exp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_exp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_exp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_exp->Location = System::Drawing::Point(408, 163);
			this->btn_exp->Margin = System::Windows::Forms::Padding(0);
			this->btn_exp->Name = L"btn_exp";
			this->btn_exp->Size = System::Drawing::Size(57, 58);
			this->btn_exp->TabIndex = 64;
			this->btn_exp->Text = L"e^x";
			this->btn_exp->UseVisualStyleBackColor = false;
			this->btn_exp->Click += gcnew System::EventHandler(this, &Form1::btn_exp_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::Lime;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_percent->Location = System::Drawing::Point(345, 98);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(57, 58);
			this->btn_percent->TabIndex = 62;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &Form1::btn_percent_Click);
			// 
			// btn_hyperbolic_tan
			// 
			this->btn_hyperbolic_tan->BackColor = System::Drawing::Color::Lime;
			this->btn_hyperbolic_tan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_hyperbolic_tan->Location = System::Drawing::Point(408, 351);
			this->btn_hyperbolic_tan->Name = L"btn_hyperbolic_tan";
			this->btn_hyperbolic_tan->Size = System::Drawing::Size(57, 58);
			this->btn_hyperbolic_tan->TabIndex = 58;
			this->btn_hyperbolic_tan->Text = L"tanh";
			this->btn_hyperbolic_tan->UseVisualStyleBackColor = false;
			this->btn_hyperbolic_tan->Click += gcnew System::EventHandler(this, &Form1::btn_hyperbolic_tan_Click);
			// 
			// btn_tan
			// 
			this->btn_tan->BackColor = System::Drawing::Color::Lime;
			this->btn_tan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_tan->Location = System::Drawing::Point(408, 227);
			this->btn_tan->Name = L"btn_tan";
			this->btn_tan->Size = System::Drawing::Size(57, 58);
			this->btn_tan->TabIndex = 57;
			this->btn_tan->Text = L"Tan";
			this->btn_tan->UseVisualStyleBackColor = false;
			this->btn_tan->Click += gcnew System::EventHandler(this, &Form1::btn_tan_Click);
			// 
			// btn_square_root
			// 
			this->btn_square_root->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_square_root->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_square_root->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_square_root->Location = System::Drawing::Point(471, 227);
			this->btn_square_root->Margin = System::Windows::Forms::Padding(0);
			this->btn_square_root->Name = L"btn_square_root";
			this->btn_square_root->Size = System::Drawing::Size(57, 58);
			this->btn_square_root->TabIndex = 56;
			this->btn_square_root->Text = L"√x";
			this->btn_square_root->UseVisualStyleBackColor = false;
			this->btn_square_root->Click += gcnew System::EventHandler(this, &Form1::btn_root_Click);
			// 
			// btn_inverse
			// 
			this->btn_inverse->BackColor = System::Drawing::Color::Lime;
			this->btn_inverse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_inverse->Location = System::Drawing::Point(470, 351);
			this->btn_inverse->Name = L"btn_inverse";
			this->btn_inverse->Size = System::Drawing::Size(57, 58);
			this->btn_inverse->TabIndex = 55;
			this->btn_inverse->Text = L"1/x";
			this->btn_inverse->UseVisualStyleBackColor = false;
			this->btn_inverse->Click += gcnew System::EventHandler(this, &Form1::btn_inverse_Click);
			// 
			// btn_hyperbolic_cos
			// 
			this->btn_hyperbolic_cos->BackColor = System::Drawing::Color::Lime;
			this->btn_hyperbolic_cos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_hyperbolic_cos->Location = System::Drawing::Point(345, 351);
			this->btn_hyperbolic_cos->Name = L"btn_hyperbolic_cos";
			this->btn_hyperbolic_cos->Size = System::Drawing::Size(57, 58);
			this->btn_hyperbolic_cos->TabIndex = 54;
			this->btn_hyperbolic_cos->Text = L"Cosh";
			this->btn_hyperbolic_cos->UseVisualStyleBackColor = false;
			this->btn_hyperbolic_cos->Click += gcnew System::EventHandler(this, &Form1::btn_hyperbolic_cos_Click);
			// 
			// btn_cos
			// 
			this->btn_cos->BackColor = System::Drawing::Color::Lime;
			this->btn_cos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_cos->Location = System::Drawing::Point(345, 226);
			this->btn_cos->Name = L"btn_cos";
			this->btn_cos->Size = System::Drawing::Size(57, 58);
			this->btn_cos->TabIndex = 53;
			this->btn_cos->Text = L"Cos";
			this->btn_cos->UseVisualStyleBackColor = false;
			this->btn_cos->Click += gcnew System::EventHandler(this, &Form1::btn_cos_Click);
			// 
			// btn_square
			// 
			this->btn_square->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_square->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_square->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_square->Location = System::Drawing::Point(471, 163);
			this->btn_square->Margin = System::Windows::Forms::Padding(0);
			this->btn_square->Name = L"btn_square";
			this->btn_square->Size = System::Drawing::Size(57, 58);
			this->btn_square->TabIndex = 52;
			this->btn_square->Text = L"x^2";
			this->btn_square->UseVisualStyleBackColor = false;
			this->btn_square->Click += gcnew System::EventHandler(this, &Form1::btn_square_Click);
			// 
			// btn_fact
			// 
			this->btn_fact->BackColor = System::Drawing::Color::Lime;
			this->btn_fact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_fact->Location = System::Drawing::Point(408, 98);
			this->btn_fact->Name = L"btn_fact";
			this->btn_fact->Size = System::Drawing::Size(57, 58);
			this->btn_fact->TabIndex = 51;
			this->btn_fact->Text = L"n!";
			this->btn_fact->UseVisualStyleBackColor = false;
			this->btn_fact->Click += gcnew System::EventHandler(this, &Form1::btn_fact_Click);
			// 
			// btn_hyperbolic_sin
			// 
			this->btn_hyperbolic_sin->BackColor = System::Drawing::Color::Lime;
			this->btn_hyperbolic_sin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_hyperbolic_sin->Location = System::Drawing::Point(279, 352);
			this->btn_hyperbolic_sin->Name = L"btn_hyperbolic_sin";
			this->btn_hyperbolic_sin->Size = System::Drawing::Size(57, 58);
			this->btn_hyperbolic_sin->TabIndex = 50;
			this->btn_hyperbolic_sin->Text = L"Sinh";
			this->btn_hyperbolic_sin->UseVisualStyleBackColor = false;
			this->btn_hyperbolic_sin->Click += gcnew System::EventHandler(this, &Form1::btn_hyperbolic_sin_Click);
			// 
			// btn_sin
			// 
			this->btn_sin->BackColor = System::Drawing::Color::Lime;
			this->btn_sin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_sin->Location = System::Drawing::Point(279, 224);
			this->btn_sin->Name = L"btn_sin";
			this->btn_sin->Size = System::Drawing::Size(57, 58);
			this->btn_sin->TabIndex = 49;
			this->btn_sin->Text = L"Sin";
			this->btn_sin->UseVisualStyleBackColor = false;
			this->btn_sin->Click += gcnew System::EventHandler(this, &Form1::btn_sin_Click);
			// 
			// btn_cube_root
			// 
			this->btn_cube_root->BackColor = System::Drawing::Color::Lime;
			this->btn_cube_root->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_cube_root->Location = System::Drawing::Point(471, 98);
			this->btn_cube_root->Name = L"btn_cube_root";
			this->btn_cube_root->Size = System::Drawing::Size(57, 58);
			this->btn_cube_root->TabIndex = 72;
			this->btn_cube_root->Text = L"abs";
			this->btn_cube_root->UseVisualStyleBackColor = false;
			this->btn_cube_root->Click += gcnew System::EventHandler(this, &Form1::btn_cube_root_Click);
			// 
			// btn_x_cube
			// 
			this->btn_x_cube->BackColor = System::Drawing::Color::Lime;
			this->btn_x_cube->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_x_cube->Location = System::Drawing::Point(471, 288);
			this->btn_x_cube->Name = L"btn_x_cube";
			this->btn_x_cube->Size = System::Drawing::Size(57, 58);
			this->btn_x_cube->TabIndex = 71;
			this->btn_x_cube->Text = L"x^3";
			this->btn_x_cube->UseVisualStyleBackColor = false;
			this->btn_x_cube->Click += gcnew System::EventHandler(this, &Form1::btn_x_cube_Click);
			// 
			// btn_inverse_tan
			// 
			this->btn_inverse_tan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_inverse_tan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_inverse_tan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_inverse_tan->Location = System::Drawing::Point(408, 288);
			this->btn_inverse_tan->Margin = System::Windows::Forms::Padding(0);
			this->btn_inverse_tan->Name = L"btn_inverse_tan";
			this->btn_inverse_tan->Size = System::Drawing::Size(57, 58);
			this->btn_inverse_tan->TabIndex = 70;
			this->btn_inverse_tan->Text = L"tan^-1";
			this->btn_inverse_tan->UseVisualStyleBackColor = false;
			this->btn_inverse_tan->Click += gcnew System::EventHandler(this, &Form1::btn_inverse_tan_Click);
			// 
			// btn_inverse_sin
			// 
			this->btn_inverse_sin->BackColor = System::Drawing::Color::Lime;
			this->btn_inverse_sin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_inverse_sin->Location = System::Drawing::Point(279, 288);
			this->btn_inverse_sin->Name = L"btn_inverse_sin";
			this->btn_inverse_sin->Size = System::Drawing::Size(57, 58);
			this->btn_inverse_sin->TabIndex = 69;
			this->btn_inverse_sin->Text = L"sin^-1";
			this->btn_inverse_sin->UseVisualStyleBackColor = false;
			this->btn_inverse_sin->Click += gcnew System::EventHandler(this, &Form1::btn_inverse_sin_Click);
			// 
			// btn_inverse_cos
			// 
			this->btn_inverse_cos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn_inverse_cos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_inverse_cos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_inverse_cos->Location = System::Drawing::Point(345, 287);
			this->btn_inverse_cos->Margin = System::Windows::Forms::Padding(0);
			this->btn_inverse_cos->Name = L"btn_inverse_cos";
			this->btn_inverse_cos->Size = System::Drawing::Size(57, 58);
			this->btn_inverse_cos->TabIndex = 68;
			this->btn_inverse_cos->Text = L"cos^-1";
			this->btn_inverse_cos->UseVisualStyleBackColor = false;
			this->btn_inverse_cos->Click += gcnew System::EventHandler(this, &Form1::btn_inverse_cos_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 414);
			this->Controls->Add(this->btn_cube_root);
			this->Controls->Add(this->btn_x_cube);
			this->Controls->Add(this->btn_inverse_tan);
			this->Controls->Add(this->btn_inverse_sin);
			this->Controls->Add(this->btn_inverse_cos);
			this->Controls->Add(this->btn_log);
			this->Controls->Add(this->btn_ln);
			this->Controls->Add(this->btn_by);
			this->Controls->Add(this->btn_exp);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_hyperbolic_tan);
			this->Controls->Add(this->btn_tan);
			this->Controls->Add(this->btn_square_root);
			this->Controls->Add(this->btn_inverse);
			this->Controls->Add(this->btn_hyperbolic_cos);
			this->Controls->Add(this->btn_cos);
			this->Controls->Add(this->btn_square);
			this->Controls->Add(this->btn_fact);
			this->Controls->Add(this->btn_hyperbolic_sin);
			this->Controls->Add(this->btn_sin);
			this->Controls->Add(this->lbl_show_opr);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_c);
			this->Controls->Add(this->btn_back_space);
			this->Controls->Add(this->btn_ce);
			this->Controls->Add(this->btn_show_res);
			this->Controls->Add(this->btn_dec_pnt);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn_neg_pos);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn_multiply);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txt_display);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::input_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Variables we will need
		double fnum;
		double snum;
		double result;
		double a,b;
		String^ opr;
		char oprtion;
		static double pi=3.14159,e=2.7;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
//Default Resolution
				 Form1::Width = 283;
				 Form1::Height = 453;
				 txt_display->Width= 250;
			 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//Exit from MenuStrip
			 Application::Exit();
		 }
private: System::Void scientificToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//Scientific Calculator Resolution
			 Form1::Width = 552;
			 txt_display->Width= 520;
		 }
private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
//Standard Calculator Resolution
		
			 Form1::Width = 283;
			 txt_display->Width= 250;

		 }
//Standard buttons
private: System::Void input_Click(System::Object^  sender, System::EventArgs^  e) {
//Input Numbers
			 Button ^ numbers = safe_cast<Button^>(sender);
			 if(txt_display->Text=="0")
			 {
				 txt_display->Text = numbers->Text;
			 }
			 else
			 {
				 txt_display->Text = txt_display->Text + numbers->Text;
			 }
		 }
private: System::Void btn_c_Click(System::Object^  sender, System::EventArgs^  e) {
//Button C
			 txt_display->Text="0";
			 lbl_show_opr->Text="";
		 }
private: System::Void btn_ce_Click(System::Object^  sender, System::EventArgs^  e) {
//Button CE		     
			 txt_display->Text="0";
		 }
private: System::Void btn_dec_pnt_Click(System::Object^  sender, System::EventArgs^  e) {
//Decimal Point
			 if(!txt_display->Text->Contains("."))
			 {
			     txt_display->Text = txt_display->Text + ".";
			 }
		 }
private: System::Void arithmetic_opr(System::Object^  sender, System::EventArgs^  e) {
//Operator buttons
			 Button ^ oprs = safe_cast<Button^>(sender);
		     fnum = Double::Parse(txt_display->Text);
			 txt_display->Text = "";
			 opr = oprs->Text;
			 lbl_show_opr->Text = System::Convert::ToString(fnum) + " " + opr;
		 }
private: System::Void btn_neg_pos_Click(System::Object^  sender, System::EventArgs^  e) {
//plus / minus button
			 if(txt_display->Text->Contains("-"))
			 {
			     txt_display->Text = txt_display->Text->Remove( 0 , 1 );
			 }
			 else
			 {
				 txt_display->Text = "-" + txt_display->Text;
			 }
		 }
private: System::Void btn_show_res_Click(System::Object^  sender, System::EventArgs^  e) {
//equal button
			 lbl_show_opr->Text = "";
			 snum = Double::Parse(txt_display->Text);

			 if(opr == "+")
			 {
				 result = fnum + snum;
			 }
			 else if(opr == "-")
			 {
				 result = fnum - snum;
			 }
			 else if(opr == "×")
			 {
				 result = fnum * snum;
			 }
			 else if(opr == "÷")
			 {
				 result = fnum / snum;
			 }
			 txt_display->Text=Convert::ToString(result);

		 }
private: System::Void btn_back_space_Click(System::Object^  sender, System::EventArgs^  e) {
//Backspace		
			 if(txt_display->Text->Length > 0)
			 {
				 txt_display->Text = txt_display->Text->Remove(txt_display->Text->Length -1 , 1 );
			 }

		 }
//Scientific buttons
private: System::Void btn_by_Click(System::Object^  sender, System::EventArgs^  e) {
//pi button
			 txt_display->Text=Convert::ToString(pi);
		 }
private: System::Void btn_log_Click(System::Object^  sender, System::EventArgs^  e) {
//Log button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("log" + "(" + (txt_display->Text) + ")");
			 b = Math::Log10(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_square_Click(System::Object^  sender, System::EventArgs^  e) {
//X square button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("(" + (a) + ")" + "^2");
			 b = Math::Pow(a,2);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_root_Click(System::Object^  sender, System::EventArgs^  e) {
//Root button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("sqrt(" + (a) + ")");
			 b = Math::Sqrt(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_exp_Click(System::Object^  sender, System::EventArgs^  e) {
// e^x button
	         a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("e^" + (a));
			 b = Math::Exp(a);
			 txt_display->Text = System::Convert::ToString(b);
			
		 }
private: System::Void btn_inverse_Click(System::Object^  sender, System::EventArgs^  e) {
// 1/x button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("1/" + (a));
			 b = 1/a;
			 txt_display->Text = System::Convert::ToString(b);
		 
		 }
private: System::Void btn_ln_Click(System::Object^  sender, System::EventArgs^  e) {
// Ln button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("ln(" + (a) + ")");
			 b = Math::Log(a);
			 txt_display->Text = System::Convert::ToString(b);
		 
		 }
private: System::Void btn_percent_Click(System::Object^  sender, System::EventArgs^  e) {
// Precentage button
			 a = Double::Parse(txt_display->Text);
			 b = a / 100;
			 txt_display->Text = System::Convert::ToString(b);
		 
		 }
private: System::Void btn_fact_Click(System::Object^  sender, System::EventArgs^  e) {
// Factorial button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString((a) + "!");
			 static double b=1;
			 while(a>0)
			 {
				 b*=a;
				 a--;
			 }
			 txt_display->Text = System::Convert::ToString(b); 
		 

		 }


private: System::Void btn_x_cube_Click(System::Object^  sender, System::EventArgs^  e) {
// x cube button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString((a) + "^3");
			 b = Math::Pow(a,3);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_cube_root_Click(System::Object^  sender, System::EventArgs^  e) {
// absolute value button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("abs(" + (a) + ")");
			 b =Math::Abs(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
//Trigonometric 
private: System::Void btn_sin_Click(System::Object^  sender, System::EventArgs^  e) {
//Sin button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("sin(" + (a) + ")");
			 b = Math::Sin(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_cos_Click(System::Object^  sender, System::EventArgs^  e) {
//Cos button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("cos(" + (a) + ")");
			 b = Math::Cos(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_tan_Click(System::Object^  sender, System::EventArgs^  e) {
//Tan button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("tan(" + (a) + ")");
			 b = Math::Tan(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }

// Inverse Trigonometric
private: System::Void btn_inverse_sin_Click(System::Object^  sender, System::EventArgs^  e) {
// Inverse Sin button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("sin^-1(" + (a) + ")");
			 b =Math::Asin(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_inverse_cos_Click(System::Object^  sender, System::EventArgs^  e) {
//Inverse Cos button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("cos^-1(" + (a) + ")");
			 b =Math::Acos(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_inverse_tan_Click(System::Object^  sender, System::EventArgs^  e) {
//Inverse Tan button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("tan^-1(" + (a) + ")");
			 b =Math::Atan(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
// hyperbolic Trigonometric
private: System::Void btn_hyperbolic_sin_Click(System::Object^  sender, System::EventArgs^  e) {
// hyperbolic Sin button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("sinh(" + (a) + ")");
			 b =Math::Sinh(a);
			 txt_display->Text = System::Convert::ToString(b);
			 
		 }
private: System::Void btn_hyperbolic_cos_Click(System::Object^  sender, System::EventArgs^  e) {
// hyperbolic Cos button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("cosh(" + (a) + ")");
			 b =Math::Cosh(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
private: System::Void btn_hyperbolic_tan_Click(System::Object^  sender, System::EventArgs^  e) {
// hyperbolic Tan button
			 a = Double::Parse(txt_display->Text);
			 lbl_show_opr->Text = System::Convert::ToString("tanh(" + (a) + ")");
			 b =Math::Tanh(a);
			 txt_display->Text = System::Convert::ToString(b);
		 }
};
}

