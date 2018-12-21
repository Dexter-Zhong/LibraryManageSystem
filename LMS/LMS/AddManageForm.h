#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// AddManageForm 摘要
	/// </summary>
	public ref class AddManageForm : public System::Windows::Forms::Form
	{
	public:
		AddManageForm(void)
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
		~AddManageForm()
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





	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(119, 104);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"帐号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(119, 164);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			this->label2->Click += gcnew System::EventHandler(this, &AddManageForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 104);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 25);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 164);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 25);
			this->textBox2->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(503, 162);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 24);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"显示密码";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AddManageForm::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(288, 357);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 75);
			this->button2->TabIndex = 7;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddManageForm::button2_Click);
			// 
			// button3
			// 
			this->button3->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(481, 357);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 75);
			this->button3->TabIndex = 8;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddManageForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(97, 357);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 75);
			this->button4->TabIndex = 9;
			this->button4->Text = L"确定";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AddManageForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(108, 41);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"用户名";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 41);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 25);
			this->textBox3->TabIndex = 11;
			// 
			// RegisterForm
			// 
			this->AcceptButton = this->button4;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->CancelButton = this->button3;
			this->ClientSize = System::Drawing::Size(689, 571);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RegisterForm";
			this->Text = L"管理员添加";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddManageForm::RegisterForm_FormClosing);
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

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strLogon = L"输入的登录信息:\r\n";

		if (textBox1->Text == String::Empty) strLogon += L"未输入用户名\r\n";

		else strLogon += textBox1->Text + L"\r\n";

		if (textBox2->Text == String::Empty) strLogon += L"未输入登录密码\r\n";

		else strLogon += textBox2->Text + L"\r\n";

		strLogon += L"登录身份: ";

		//lse if (radioButton3->Checked) strLogon += L"管理员\r\n";

		MessageBox::Show(strLogon);         //显示用户输入的信息
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}


	private:String^strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=Database1.mdb");
			OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
			Boolean complete = true;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strCmd1; String^ strCmd2; String^ identity;
		System::Data::DataSet^  dataSet = gcnew DataSet();
		String^ strLogon = L"注册的用户信息:\r\n";
		complete = true;
		if (textBox3->Text == String::Empty) {
			strLogon += L"未输入用户名\r\n"; complete = false;
		}
		else strLogon += "用户名：" + textBox3->Text + L"\r\n";

		if (textBox1->Text == String::Empty) {
			strLogon += L"未输入帐号\r\n"; complete = false;
		}
		else strLogon += "帐号：" + textBox1->Text + L"\r\n";

		if (textBox2->Text == String::Empty) {
			strLogon += L"未输入登录密码\r\n"; complete = false;
		}
		else strLogon += "密码：" + textBox2->Text + L"\r\n";

		strLogon += L"注册用户身份: ";
			strLogon += L"管理员\r\n";
			identity = "管理员";

		if (complete){
			con1->Open();    // 打开连接
			String^ strTableName = "用户";
			strCmd1 = String::Format("SELECT * FROM {0} WHERE 帐号='{1}'", (String^)strTableName, textBox1->Text);
			//strCmd1 = String::Format("SELECT * FROM {0} WHERE 帐号='ab'",(String^)strTableName);
			System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd1, con1);
			this->oleDbDataAdapter1->SelectCommand = cmd;
			oleDbDataAdapter1->Fill(dataSet, strTableName);
			DataTable^ table1 = dataSet->Tables[strTableName];
			if (table1->Rows->Count > 0)

			{
				strLogon += L"注册失败，该用户已存在\r\n"; con1->Close();
				/*for each (DataRow^ row in table1->Rows)

				{
				if (row["NUM"] != 0)strLogon += L"注册失败，该用户已存在\r\n"; con1->Close();
				}*/
			}

			else{
				strCmd2 = "INSERT INTO 用户([用户名],[帐号],[密码],[用户身份]) VALUES( '" + textBox3->Text + "','" + textBox1->Text + "','" + textBox2->Text + "','" + identity + "' )";
				OleDbCommand^ comm2 = gcnew OleDbCommand(strCmd2, con1); comm2->ExecuteNonQuery();
				con1->Close();
			}


		}

		//else if (radioButton3->Checked) strLogon += L"管理员\r\n";

		//else strLogon += L"未知身份\r\n";

		MessageBox::Show(strLogon);         //显示用户输入的信息
	}



	private: System::Void RegisterForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		if (System::Windows::Forms::DialogResult::Yes !=

			MessageBox::Show(L"你确定要退出吗？",

			L"退出确认", 				/*标题*/

			buttons,				/*按钮*/

			MessageBoxIcon::Question, 		/*图标*/

			MessageBoxDefaultButton::Button1	/*默认按钮*/))

			e->Cancel = true;
	}
	};
}
