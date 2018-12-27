#pragma once
#include"RegisterForm.h"
namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// LoginForm 摘要
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"华文新魏", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(61, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"帐号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文新魏", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(61, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(150, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 29);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(150, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 29);
			this->textBox2->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(372, 143);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(113, 25);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(27, 318);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"登录";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(292, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(410, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 35);
			this->button3->TabIndex = 8;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(159, 318);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 35);
			this->button4->TabIndex = 9;
			this->button4->Text = L"注册";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &LoginForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"华文新魏", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(61, 191);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"验证码";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(150, 245);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(119, 40);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(150, 191);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(195, 29);
			this->textBox3->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"华文新魏", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(291, 250);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 35);
			this->button5->TabIndex = 13;
			this->button5->Text = L"刷新";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &LoginForm::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"华文行楷", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(141, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 51);
			this->label4->TabIndex = 0;
			this->label4->Text = L"用户登录";
			// 
			// LoginForm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(517, 400);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"用户登录";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox2->PasswordChar = checkBox1->Checked ? 0 : '*';   // 取消或设置密码字符
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();                  //清空用户名信息

		textBox2->Clear();                  //清空登录密码

		checkBox1->Checked = true;         //显示密码
		checkstr = CkeckCode()->Trim();

		CreatCodeImage(checkstr);
		//radioButton1->Checked = true;       // 默认为普通用户身份
	}

			 Boolean login=true;
			 private:String^strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=Database1.mdb");
			OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
		private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
		

		public:static String^LoginState = "未登录";
		public:static String^UserName= "";
		public:static String^account = "";
		public:static String^ID = "";
		public:static Int32 borrowed = 0;

		public:static void LogOut()
		{
			LoginState = "未登录";
			UserName = "";
			account = "";
			ID = "";
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strCmd1; String^ strCmd2; String^ identity;
		System::Data::DataSet^  dataSet = gcnew DataSet();
		Boolean login = true;
		String^ strLogon = L"输入的登录信息:\r\n";

		if (!checkstr->Equals(this->textBox3->Text->Trim())){
			strLogon += L"验证码输入错误,请重新输入\r\n"; login = false;
		}

		if (textBox1->Text == String::Empty) {
			strLogon += L"未输入帐号\r\n"; login = false;
		}

		else strLogon += "帐号："+textBox1->Text + L"\r\n";

		if (textBox2->Text == String::Empty) {
			strLogon += L"未输入登录密码\r\n"; login = false;
		}

		else strLogon += "密码：" + textBox2->Text + L"\r\n";

		if (login){
			con1->Open();    // 打开连接
			String^ strTableName = "用户";
			strCmd1 = String::Format("SELECT * FROM {0} WHERE 帐号='{1}'", (String^)strTableName, textBox1->Text);
			//strCmd1 = String::Format("SELECT * FROM {0} WHERE 帐号='ab'",(String^)strTableName);
			System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd1, con1);
			this->oleDbDataAdapter1->SelectCommand = cmd;
			oleDbDataAdapter1->Fill(dataSet, strTableName);
			DataTable^ table1 = dataSet->Tables[strTableName];
			if (table1->Rows->Count == 0)
			{
				strLogon += L"登录失败，该用户不存在\r\n"; con1->Close();
			}
			else{
				for each (DataRow^ row in table1->Rows)

				{
					//MessageBox::Show((String^)row["密码"]);
					if ((String^)row["密码"] != textBox2->Text){
						strLogon += L"登录失败，密码错误\r\n";
						checkstr = CkeckCode()->Trim();

						CreatCodeImage(checkstr);
						MessageBox::Show(strLogon);//显示用户输入的信息
					}
					else{
						strLogon += L"登录成功\r\n";
						LoginState = "已登录";
						UserName = (String^)row["用户名"];
						account = (String^)row["帐号"];
						ID = (String^)row["用户身份"];
						borrowed = Convert::ToInt32(row["已借阅"]);
						con1->Close();
						MessageBox::Show(strLogon);
						this->Close();

					}
						
				}
				con1->Close();
			}
		}

		//strLogon += L"登录身份: ";

		//if (radioButton1->Checked) strLogon += L"普通用户\r\n";

		//else if (radioButton2->Checked) strLogon += L"高级用户\r\n";

		//else if (radioButton3->Checked) strLogon += L"管理员\r\n";

		//else strLogon += L"未知身份\r\n";
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		if (System::Windows::Forms::DialogResult::Yes ==

			MessageBox::Show(L"你确定要退出登录吗？",

			L"退出确认", 				/*标题*/

			buttons,				/*按钮*/

			MessageBoxIcon::Question, 		/*图标*/

			MessageBoxDefaultButton::Button1	/*默认按钮*/))this->Close();

	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		RegisterForm^ aRegisterForm = gcnew RegisterForm;
		aRegisterForm->ShowDialog() ;

	}
private: System::Void LoginForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {	
}

private:String ^CkeckCode(void)

{

	int number;

	String ^code;

	String ^checkcode = "";

	Random ^random = gcnew System::Random();

	for (int i = 0; i < 4; i++)

	{

		number = random->Next();

		if (number % 2 == 0)
			//code = ((char)(Convert::ToInt32('0') + (number % 10))).ToString();//?数字
			code = ((wchar_t)(Convert::ToInt32('0' + (number % 10)))).ToString();//?数字
		else
			code = ((wchar_t)(Convert::ToInt32('A') + (number % 26))).ToString();//字母

			checkcode += code->ToString();//加到 checkcode 字符串中
		

	}

	return checkcode;

}

private: void CreatCodeImage(String ^checkcode)

{

	if (checkcode == "" || checkcode->Trim() == "")

		return;

	System::Drawing::Bitmap ^image = gcnew System::Drawing::Bitmap((int)Math::Ceiling((checkcode->Length * 18)), 30);

	Graphics ^g = Graphics::FromImage(image);

		// try

	{

		Random ^random = gcnew Random();

		g->Clear(Color::White);

		for (int i = 0; i < 3; i++)

		{

			int x1 = random->Next(image->Width);

			int x2 = random->Next(image->Width);

			int y1 = random->Next(image->Height);

			int y2 = random->Next(image->Height);

			g->DrawLine(gcnew Pen(Color::Black), x1, y1, x2, y2);

		}

		System::Drawing::Font ^font = gcnew System::Drawing::Font("Arial", 19, (System::Drawing::FontStyle::Bold));

		g->DrawString(checkcode, font, gcnew SolidBrush(Color::Blue), 2, 2);

		for (int i = 0; i < 150; i++)

		{

			int x = random->Next(image->Width);

			int y = random->Next(image->Height);

			image->SetPixel(x, y, Color::FromArgb(random->Next()));

		}

		g->DrawRectangle(gcnew Pen(Color::Silver), 0, 0, image->Width + 3, image->Height + 3);

		this->pictureBox1->Width = image->Width;

		this->pictureBox1->Height = image->Height;

		this->pictureBox1->BackgroundImage = image;

	}

	//catch (System.Exception ex)
	//{ }

	return;

}


//up
		 String ^checkstr;
private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
	checkstr = CkeckCode()->Trim();

	CreatCodeImage(checkstr);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	checkstr = CkeckCode()->Trim();

	CreatCodeImage(checkstr);
}
};
}
