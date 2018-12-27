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
	/// LoginForm ժҪ
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~RegisterForm()
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
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"������κ", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(59, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�ʺ�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"������κ", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(59, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����";
			this->label2->Click += gcnew System::EventHandler(this, &RegisterForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(152, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 29);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(152, 179);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(193, 29);
			this->textBox2->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(359, 181);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(113, 25);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"��ʾ����";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &RegisterForm::checkBox1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(64, 248);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 59);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ע�����";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(266, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(116, 25);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�߼��û�";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(58, 28);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(116, 25);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"��ͨ�û�";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(211, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ȡ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(356, 332);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 35);
			this->button3->TabIndex = 8;
			this->button3->Text = L"�˳�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RegisterForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(68, 332);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 35);
			this->button4->TabIndex = 9;
			this->button4->Text = L"ȷ��";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &RegisterForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"������κ", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(59, 79);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"�û���";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(152, 79);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(193, 29);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"�����п�", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(156, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 51);
			this->label4->TabIndex = 10;
			this->label4->Text = L"�û�ע��";
			// 
			// RegisterForm
			// 
			this->AcceptButton = this->button4;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->CancelButton = this->button3;
			this->ClientSize = System::Drawing::Size(517, 408);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"�û�ע��";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &RegisterForm::RegisterForm_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox2->PasswordChar = checkBox1->Checked ? 0 : '*';   // ȡ�������������ַ�
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Clear();                  //����û�����Ϣ

		textBox2->Clear();                  //��յ�¼����

		checkBox1->Checked = true;         //��ʾ����

		radioButton1->Checked = true;       // Ĭ��Ϊ��ͨ�û����
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strLogon = L"����ĵ�¼��Ϣ:\r\n";

		if (textBox1->Text == String::Empty) strLogon += L"δ�����û���\r\n";

		else strLogon += textBox1->Text + L"\r\n";

		if (textBox2->Text == String::Empty) strLogon += L"δ�����¼����\r\n";

		else strLogon += textBox2->Text + L"\r\n";

		strLogon += L"��¼���: ";

		if (radioButton1->Checked) strLogon += L"��ͨ�û�\r\n";

		else if (radioButton2->Checked) strLogon += L"�߼��û�\r\n";

		//lse if (radioButton3->Checked) strLogon += L"����Ա\r\n";

		else strLogon += L"δ֪���\r\n";

		MessageBox::Show(strLogon);         //��ʾ�û��������Ϣ
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
		String^ strLogon = L"ע����û���Ϣ:\r\n";
		complete = true;
		if (textBox3->Text == String::Empty) {
			strLogon += L"δ�����û���\r\n"; complete = false;
		}
		else strLogon += "�û�����"+textBox3->Text + L"\r\n";

		if (textBox1->Text == String::Empty) {
			strLogon += L"δ�����ʺ�\r\n"; complete = false;
		}
		else strLogon +="�ʺţ�"+ textBox1->Text + L"\r\n";

		if (textBox2->Text == String::Empty) {
			strLogon += L"δ�����¼����\r\n"; complete = false;
		}
		else strLogon += "���룺" + textBox2->Text + L"\r\n";

		strLogon += L"ע���û����: ";

		if (radioButton1->Checked) {
			strLogon += L"��ͨ�û�\r\n";
			identity = "��ͨ�û�";
		}
		else if (radioButton2->Checked) {
			strLogon += L"�߼��û�\r\n"; 
			identity = "�߼��û�";
		}

		if ((!radioButton1->Checked) && (!radioButton2->Checked)){
			complete = false; 
			strLogon += L"δѡ��ע�����\r\n";
		}

		if (complete){
			con1->Open();    // ������
			String^ strTableName = "�û�";
			strCmd1 = String::Format("SELECT * FROM {0} WHERE �ʺ�='{1}'", (String^)strTableName, textBox1->Text);
			//strCmd1 = String::Format("SELECT * FROM {0} WHERE �ʺ�='ab'",(String^)strTableName);
			System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd1, con1);
			this->oleDbDataAdapter1->SelectCommand = cmd;
			oleDbDataAdapter1->Fill(dataSet, strTableName);
			DataTable^ table1 = dataSet->Tables[strTableName];
			if (table1->Rows->Count > 0)

			{
				strLogon += L"ע��ʧ�ܣ����û��Ѵ���\r\n"; con1->Close();
				/*for each (DataRow^ row in table1->Rows)

				{
					if (row["NUM"] != 0)strLogon += L"ע��ʧ�ܣ����û��Ѵ���\r\n"; con1->Close();
				}*/
			}
			
			else{
				strCmd2 = "INSERT INTO �û�([�û���],[�ʺ�],[����],[�û����]) VALUES( '"+textBox3->Text+"','"+textBox1->Text+"','"+textBox2->Text+"','"+identity+"' )";
				OleDbCommand^ comm2 = gcnew OleDbCommand(strCmd2, con1); comm2->ExecuteNonQuery();
				con1->Close();
			}
					

		}

		//else if (radioButton3->Checked) strLogon += L"����Ա\r\n";

		//else strLogon += L"δ֪���\r\n";

		MessageBox::Show(strLogon);         //��ʾ�û��������Ϣ
	}



	private: System::Void RegisterForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		if (System::Windows::Forms::DialogResult::Yes !=

			MessageBox::Show(L"��ȷ��Ҫ�˳���",

			L"�˳�ȷ��", 				/*����*/

			buttons,				/*��ť*/

			MessageBoxIcon::Question, 		/*ͼ��*/

			MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))

			e->Cancel = true;
	}
};
}
