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
	/// LoginForm ժҪ
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴����ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(119, 57);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�ʺ�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(119, 125);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 56);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 25);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(235, 130);
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
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(482, 131);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 24);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"��ʾ����";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(35, 324);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 75);
			this->button1->TabIndex = 6;
			this->button1->Text = L"��¼";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(388, 324);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 75);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ȡ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// button3
			// 
			this->button3->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(545, 324);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 75);
			this->button3->TabIndex = 8;
			this->button3->Text = L"�˳�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(210, 324);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(115, 75);
			this->button4->TabIndex = 9;
			this->button4->Text = L"ע��";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &LoginForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(119, 193);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"��֤��";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(235, 240);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(159, 50);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(235, 198);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 25);
			this->textBox3->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(424, 251);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(76, 30);
			this->button5->TabIndex = 13;
			this->button5->Text = L"ˢ��";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &LoginForm::button5_Click);
			// 
			// LoginForm
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->CancelButton = this->button3;
			this->ClientSize = System::Drawing::Size(689, 571);
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
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->Text = L"�û���¼";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LoginForm::LoginForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		checkstr = CkeckCode()->Trim();

		CreatCodeImage(checkstr);
		//radioButton1->Checked = true;       // Ĭ��Ϊ��ͨ�û�����
	}

			 Boolean login=true;
			 private:String^strConn = String::Format("Provider=Microsoft.Jet.OLEDB.4.0; Data Source=Database1.mdb");
			OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
		private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
		

		public:static String^LoginState = "δ��¼";
		public:static String^UserName= "";
		public:static String^account = "";
		public:static String^ID = "";

		public:static void LogOut()
		{
			LoginState = "δ��¼";
			UserName = "";
			account = "";
			ID = "";
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ strCmd1; String^ strCmd2; String^ identity;
		System::Data::DataSet^  dataSet = gcnew DataSet();
		Boolean login = true;
		String^ strLogon = L"����ĵ�¼��Ϣ:\r\n";

		if (!checkstr->Equals(this->textBox3->Text->Trim())){
			strLogon += L"��֤���������,����������\r\n"; login = false;
		}

		if (textBox1->Text == String::Empty) {
			strLogon += L"δ�����ʺ�\r\n"; login = false;
		}

		else strLogon += "�ʺţ�"+textBox1->Text + L"\r\n";

		if (textBox2->Text == String::Empty) {
			strLogon += L"δ�����¼����\r\n"; login = false;
		}

		else strLogon += "���룺" + textBox2->Text + L"\r\n";

		if (login){
			con1->Open();    // ������
			String^ strTableName = "�û�";
			strCmd1 = String::Format("SELECT * FROM {0} WHERE �ʺ�='{1}'", (String^)strTableName, textBox1->Text);
			//strCmd1 = String::Format("SELECT * FROM {0} WHERE �ʺ�='ab'",(String^)strTableName);
			System::Data::OleDb::OleDbCommand ^ cmd = gcnew System::Data::OleDb::OleDbCommand(strCmd1, con1);
			this->oleDbDataAdapter1->SelectCommand = cmd;
			oleDbDataAdapter1->Fill(dataSet, strTableName);
			DataTable^ table1 = dataSet->Tables[strTableName];
			if (table1->Rows->Count == 0)
			{
				strLogon += L"��¼ʧ�ܣ����û�������\r\n"; con1->Close();
			}
			else{
				for each (DataRow^ row in table1->Rows)

				{
					//MessageBox::Show((String^)row["����"]);
					if ((String^)row["����"] != textBox2->Text){
						strLogon += L"��¼ʧ�ܣ��������\r\n";
						checkstr = CkeckCode()->Trim();

						CreatCodeImage(checkstr);
						MessageBox::Show(strLogon);//��ʾ�û��������Ϣ
					}
					else{
						strLogon += L"��¼�ɹ�\r\n";
						LoginState = "�ѵ�¼";
						UserName = (String^)row["�û���"];
						account = (String^)row["�ʺ�"];
						ID = (String^)row["�û�����"];
						con1->Close();
						MessageBox::Show(strLogon);
						this->Close();

					}
						
				}
				con1->Close();
			}
		}

		//strLogon += L"��¼����: ";

		//if (radioButton1->Checked) strLogon += L"��ͨ�û�\r\n";

		//else if (radioButton2->Checked) strLogon += L"�߼��û�\r\n";

		//else if (radioButton3->Checked) strLogon += L"����Ա\r\n";

		//else strLogon += L"δ֪����\r\n";
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		if (System::Windows::Forms::DialogResult::Yes ==

			MessageBox::Show(L"��ȷ��Ҫ�˳���¼��",

			L"�˳�ȷ��", 				/*����*/

			buttons,				/*��ť*/

			MessageBoxIcon::Question, 		/*ͼ��*/

			MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))this->Close();
			


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
			//code = ((char)(Convert::ToInt32('0') + (number % 10))).ToString();//?����
			code = ((wchar_t)(Convert::ToInt32('0' + (number % 10)))).ToString();//?����
		else
			code = ((wchar_t)(Convert::ToInt32('A') + (number % 26))).ToString();//��ĸ

			checkcode += code->ToString();//�ӵ� checkcode �ַ�����
		

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