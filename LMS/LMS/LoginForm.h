#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			//TODO:  �ڴ˴���ӹ��캯������
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(89, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�ʺ�";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(89, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"����";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 21);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 21);
			this->textBox2->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkBox1->Location = System::Drawing::Point(377, 130);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(91, 20);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"��ʾ����";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &LoginForm::checkBox1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(93, 183);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(351, 62);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��¼���";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(250, 30);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 16);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"����Ա";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(132, 30);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(71, 16);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�߼��û�";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(19, 30);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(71, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"��ͨ�û�";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"��¼";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ȡ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(377, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"�˳�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(176, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"ע��";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 457);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginForm";
			this->Text = L"�û���¼";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Clear();                  //����û�����Ϣ

				 textBox2->Clear();                  //��յ�¼����

				 checkBox1->Checked = false;         //����ʾ����

				 radioButton1->Checked = true;       // Ĭ��Ϊ��ͨ�û����
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 textBox2->PasswordChar = checkBox1->Checked ? 0 : '*';   // ȡ�������������ַ�
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
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

			 else if (radioButton3->Checked) strLogon += L"����Ա\r\n";

			 else strLogon += L"δ֪���\r\n";

			 MessageBox::Show(strLogon);         //��ʾ�û��������Ϣ
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
