#pragma once
#include"RegisterForm.h"
#include"LoginForm.h"
namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �򿪴���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �رմ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �û�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��¼ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ע��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳���¼ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӡԤ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ļ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӡԤ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�򿪴���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�رմ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�û�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��¼ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ע��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳���¼ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�û�ToolStripMenuItem, this->����ToolStripMenuItem, this->����ToolStripMenuItem, this->�˳�ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1440, 35);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��ToolStripMenuItem
			// 
			this->��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�ļ�ToolStripMenuItem,
					this->����ToolStripMenuItem, this->��ӡToolStripMenuItem, this->��ӡԤ��ToolStripMenuItem
			});
			this->��ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->��ToolStripMenuItem->Name = L"��ToolStripMenuItem";
			this->��ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F));
			this->��ToolStripMenuItem->Size = System::Drawing::Size(89, 31);
			this->��ToolStripMenuItem->Text = L"�ļ�(F)";
			// 
			// �ļ�ToolStripMenuItem
			// 
			this->�ļ�ToolStripMenuItem->Name = L"�ļ�ToolStripMenuItem";
			this->�ļ�ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->�ļ�ToolStripMenuItem->Text = L"��";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��ӡToolStripMenuItem
			// 
			this->��ӡToolStripMenuItem->Name = L"��ӡToolStripMenuItem";
			this->��ӡToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->��ӡToolStripMenuItem->Text = L"��ӡ";
			// 
			// ��ӡԤ��ToolStripMenuItem
			// 
			this->��ӡԤ��ToolStripMenuItem->Name = L"��ӡԤ��ToolStripMenuItem";
			this->��ӡԤ��ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->��ӡԤ��ToolStripMenuItem->Text = L"��ӡԤ��";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->�򿪴���ToolStripMenuItem, this->�رմ���ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::S));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(90, 31);
			this->����ToolStripMenuItem->Text = L"����(S)";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �򿪴���ToolStripMenuItem
			// 
			this->�򿪴���ToolStripMenuItem->Name = L"�򿪴���ToolStripMenuItem";
			this->�򿪴���ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->�򿪴���ToolStripMenuItem->Text = L"�򿪴���";
			// 
			// �رմ���ToolStripMenuItem
			// 
			this->�رմ���ToolStripMenuItem->Name = L"�رմ���ToolStripMenuItem";
			this->�رմ���ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->�رմ���ToolStripMenuItem->Text = L"�رմ���";
			// 
			// �û�ToolStripMenuItem
			// 
			this->�û�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��¼ToolStripMenuItem,
					this->ע��ToolStripMenuItem, this->�˳���¼ToolStripMenuItem
			});
			this->�û�ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->�û�ToolStripMenuItem->Name = L"�û�ToolStripMenuItem";
			this->�û�ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::U));
			this->�û�ToolStripMenuItem->Size = System::Drawing::Size(93, 31);
			this->�û�ToolStripMenuItem->Text = L"�û�(U)";
			// 
			// ��¼ToolStripMenuItem
			// 
			this->��¼ToolStripMenuItem->Name = L"��¼ToolStripMenuItem";
			this->��¼ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->��¼ToolStripMenuItem->Text = L"��¼";
			this->��¼ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��¼ToolStripMenuItem_Click);
			// 
			// ע��ToolStripMenuItem
			// 
			this->ע��ToolStripMenuItem->Name = L"ע��ToolStripMenuItem";
			this->ע��ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->ע��ToolStripMenuItem->Text = L"ע��";
			this->ע��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ע��ToolStripMenuItem_Click);
			// 
			// �˳���¼ToolStripMenuItem
			// 
			this->�˳���¼ToolStripMenuItem->Name = L"�˳���¼ToolStripMenuItem";
			this->�˳���¼ToolStripMenuItem->Size = System::Drawing::Size(170, 32);
			this->�˳���¼ToolStripMenuItem->Text = L"�˳���¼";
			this->�˳���¼ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳���¼ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::H));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(93, 31);
			this->����ToolStripMenuItem->Text = L"����(H)";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::A));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(92, 31);
			this->����ToolStripMenuItem->Text = L"����(A)";
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::E));
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(89, 31);
			this->�˳�ToolStripMenuItem->Text = L"�˳�(E)";
			this->�˳�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳�ToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 35);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1440, 27);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(24, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(24, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(24, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(24, 24);
			this->toolStripButton4->Text = L"toolStripButton4";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(24, 24);
			this->toolStripButton5->Text = L"toolStripButton5";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5,
					this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 875);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1440, 25);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 19);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->AutoSize = false;
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(450, 20);
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel4->Text = L"toolStripStatusLabel4";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel5->Text = L"toolStripStatusLabel5";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->AutoSize = false;
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel6->Text = L"toolStripStatusLabel6";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 900);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime dateTime = DateTime::Now;            	// ��ȡϵͳ��ǰʱ��

		toolStripStatusLabel1->Text = dateTime.ToLongDateString();	// ��ʾ����

		toolStripStatusLabel2->Text = dateTime.ToLongTimeString(); 	// ��ʾʱ��

		toolStripProgressBar1->Value = dateTime.Second;         	// ������
	}
private: System::Void �˳�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}


private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (System::Windows::Forms::DialogResult::Yes !=

		MessageBox::Show(L"��ȷ��Ҫ�˳���",

		L"�˳�ȷ��", 				/*����*/

		buttons,				/*��ť*/

		MessageBoxIcon::Question, 		/*ͼ��*/

		MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))

		e->Cancel = true;
}
private: System::Void ��¼ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	LoginForm^aLoginForm = gcnew LoginForm;
	aLoginForm->ShowDialog();
	ToolStripFlush();

}

		 void ToolStripFlush()
		 {
			 this->toolStripStatusLabel5->Text = "�û���:" + LoginForm::UserName;
			 this->toolStripStatusLabel6->Text = "�û����:" + LoginForm::ID;
			 this->toolStripStatusLabel4->Text = "״̬:"+LoginForm::LoginState;
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	ToolStripFlush();
}
private: System::Void ע��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	RegisterForm^aRegisterFormForm = gcnew RegisterForm;
	aRegisterFormForm->ShowDialog();
}
private: System::Void �˳���¼ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (System::Windows::Forms::DialogResult::Yes ==

		MessageBox::Show(L"��ȷ��Ҫ�˳���¼��",

		L"�˳�ȷ��", 				/*����*/

		buttons,				/*��ť*/

		MessageBoxIcon::Question, 		/*ͼ��*/

		MessageBoxDefaultButton::Button1	/*Ĭ�ϰ�ť*/))

		//e->Cancel = true;
	{
		LoginForm::LogOut();
		ToolStripFlush();
	}
}
};
}

