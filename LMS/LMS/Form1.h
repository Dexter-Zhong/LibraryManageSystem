#pragma once
#include"RegisterForm.h"
#include"LoginForm.h"
#include "Windows.h"
#include "SerialForm.h"
#include "tchar.h"
#include "MessageForm.h"
#include"AddManageForm.h"
#include"HelpForm.h"
#include"AboutForm.h"
namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::Drawing::Printing;
	using namespace System::Drawing::Drawing2D;


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
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  �ҵ�ToolStripMenuItem;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ӹ���ԱToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ر�ToolStripMenuItem;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
private: System::Windows::Forms::ToolStripButton^  toolStripButton8;

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
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�ر�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�򿪴���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�رմ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�û�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��¼ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ע��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳���¼ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ҵ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ӹ���ԱToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::SaddleBrown;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�û�ToolStripMenuItem, this->����ToolStripMenuItem, this->����ToolStripMenuItem, this->�˳�ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1696, 35);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��ToolStripMenuItem
			// 
			this->��ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ToolStripMenuItem.BackgroundImage")));
			this->��ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->�ļ�ToolStripMenuItem,
					this->����ToolStripMenuItem, this->��ӡToolStripMenuItem, this->��ӡԤ��ToolStripMenuItem, this->toolStripSeparator1, this->�ر�ToolStripMenuItem
			});
			this->��ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->��ToolStripMenuItem->Name = L"��ToolStripMenuItem";
			this->��ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F));
			this->��ToolStripMenuItem->Size = System::Drawing::Size(117, 31);
			this->��ToolStripMenuItem->Text = L"�ļ�(F)";
			// 
			// �ļ�ToolStripMenuItem
			// 
			this->�ļ�ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�ļ�ToolStripMenuItem.BackgroundImage")));
			this->�ļ�ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�ļ�ToolStripMenuItem->Name = L"�ļ�ToolStripMenuItem";
			this->�ļ�ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->�ļ�ToolStripMenuItem->Text = L"��";
			this->�ļ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ļ�ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����ToolStripMenuItem.BackgroundImage")));
			this->����ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ��ӡToolStripMenuItem
			// 
			this->��ӡToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡToolStripMenuItem.BackgroundImage")));
			this->��ӡToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->��ӡToolStripMenuItem->Name = L"��ӡToolStripMenuItem";
			this->��ӡToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->��ӡToolStripMenuItem->Text = L"��ӡ";
			this->��ӡToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��ӡToolStripMenuItem_Click);
			// 
			// ��ӡԤ��ToolStripMenuItem
			// 
			this->��ӡԤ��ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӡԤ��ToolStripMenuItem.BackgroundImage")));
			this->��ӡԤ��ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->��ӡԤ��ToolStripMenuItem->Name = L"��ӡԤ��ToolStripMenuItem";
			this->��ӡԤ��ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->��ӡԤ��ToolStripMenuItem->Text = L"��ӡԤ��";
			this->��ӡԤ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��ӡԤ��ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(199, 6);
			// 
			// �ر�ToolStripMenuItem
			// 
			this->�ر�ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�ر�ToolStripMenuItem.BackgroundImage")));
			this->�ر�ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�ر�ToolStripMenuItem->Name = L"�ر�ToolStripMenuItem";
			this->�ر�ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->�ر�ToolStripMenuItem->Text = L"�ر�";
			this->�ر�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ر�ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����ToolStripMenuItem.BackgroundImage")));
			this->����ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->�򿪴���ToolStripMenuItem, this->�رմ���ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::S));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(115, 31);
			this->����ToolStripMenuItem->Text = L"����(S)";
			this->����ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::����ToolStripMenuItem_DropDownItemClicked);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.BackgroundImage")));
			this->��������ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->DropDownItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::��������ToolStripMenuItem_DropDownItemClicked);
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��������ToolStripMenuItem_Click);
			// 
			// �򿪴���ToolStripMenuItem
			// 
			this->�򿪴���ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�򿪴���ToolStripMenuItem.BackgroundImage")));
			this->�򿪴���ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�򿪴���ToolStripMenuItem->Name = L"�򿪴���ToolStripMenuItem";
			this->�򿪴���ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->�򿪴���ToolStripMenuItem->Text = L"�򿪴���";
			// 
			// �رմ���ToolStripMenuItem
			// 
			this->�رմ���ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�رմ���ToolStripMenuItem.BackgroundImage")));
			this->�رմ���ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�رմ���ToolStripMenuItem->Name = L"�رմ���ToolStripMenuItem";
			this->�رմ���ToolStripMenuItem->Size = System::Drawing::Size(202, 32);
			this->�رմ���ToolStripMenuItem->Text = L"�رմ���";
			// 
			// �û�ToolStripMenuItem
			// 
			this->�û�ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�û�ToolStripMenuItem.BackgroundImage")));
			this->�û�ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�û�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->��¼ToolStripMenuItem,
					this->ע��ToolStripMenuItem, this->�˳���¼ToolStripMenuItem, this->�ҵ�ToolStripMenuItem, this->��ӹ���ԱToolStripMenuItem
			});
			this->�û�ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->�û�ToolStripMenuItem->Name = L"�û�ToolStripMenuItem";
			this->�û�ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::U));
			this->�û�ToolStripMenuItem->Size = System::Drawing::Size(123, 31);
			this->�û�ToolStripMenuItem->Text = L"�û�(U)";
			// 
			// ��¼ToolStripMenuItem
			// 
			this->��¼ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��¼ToolStripMenuItem.BackgroundImage")));
			this->��¼ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->��¼ToolStripMenuItem->Name = L"��¼ToolStripMenuItem";
			this->��¼ToolStripMenuItem->Size = System::Drawing::Size(230, 32);
			this->��¼ToolStripMenuItem->Text = L"��¼";
			this->��¼ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��¼ToolStripMenuItem_Click);
			// 
			// ע��ToolStripMenuItem
			// 
			this->ע��ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ע��ToolStripMenuItem.BackgroundImage")));
			this->ע��ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ע��ToolStripMenuItem->Name = L"ע��ToolStripMenuItem";
			this->ע��ToolStripMenuItem->Size = System::Drawing::Size(230, 32);
			this->ע��ToolStripMenuItem->Text = L"ע��";
			this->ע��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ע��ToolStripMenuItem_Click);
			// 
			// �˳���¼ToolStripMenuItem
			// 
			this->�˳���¼ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�˳���¼ToolStripMenuItem.BackgroundImage")));
			this->�˳���¼ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�˳���¼ToolStripMenuItem->Name = L"�˳���¼ToolStripMenuItem";
			this->�˳���¼ToolStripMenuItem->Size = System::Drawing::Size(230, 32);
			this->�˳���¼ToolStripMenuItem->Text = L"�˳���¼";
			this->�˳���¼ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳���¼ToolStripMenuItem_Click);
			// 
			// �ҵ�ToolStripMenuItem
			// 
			this->�ҵ�ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�ҵ�ToolStripMenuItem.BackgroundImage")));
			this->�ҵ�ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�ҵ�ToolStripMenuItem->Name = L"�ҵ�ToolStripMenuItem";
			this->�ҵ�ToolStripMenuItem->Size = System::Drawing::Size(230, 32);
			this->�ҵ�ToolStripMenuItem->Text = L"�û���Ϣ";
			this->�ҵ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�ҵ�ToolStripMenuItem_Click);
			// 
			// ��ӹ���ԱToolStripMenuItem
			// 
			this->��ӹ���ԱToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��ӹ���ԱToolStripMenuItem.BackgroundImage")));
			this->��ӹ���ԱToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->��ӹ���ԱToolStripMenuItem->Name = L"��ӹ���ԱToolStripMenuItem";
			this->��ӹ���ԱToolStripMenuItem->Size = System::Drawing::Size(230, 32);
			this->��ӹ���ԱToolStripMenuItem->Text = L"��ӹ���Ա";
			this->��ӹ���ԱToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��ӹ���ԱToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����ToolStripMenuItem.BackgroundImage")));
			this->����ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::H));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(124, 31);
			this->����ToolStripMenuItem->Text = L"����(H)";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����ToolStripMenuItem.BackgroundImage")));
			this->����ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::A));
			this->����ToolStripMenuItem->Size = System::Drawing::Size(121, 31);
			this->����ToolStripMenuItem->Text = L"����(A)";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�˳�ToolStripMenuItem.BackgroundImage")));
			this->�˳�ToolStripMenuItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->�˳�ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::E));
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(117, 31);
			this->�˳�ToolStripMenuItem->Text = L"�˳�(E)";
			this->�˳�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳�ToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::Wheat;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripButton1,
					this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7, this->toolStripButton8
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 35);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1696, 27);
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
			this->toolStripButton1->Text = L"���ļ�";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(24, 24);
			this->toolStripButton3->Text = L"��ӡ";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(24, 24);
			this->toolStripButton4->Text = L"�ر��ļ�";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(24, 24);
			this->toolStripButton5->Text = L"��������";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(24, 24);
			this->toolStripButton6->Text = L"����";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(24, 24);
			this->toolStripButton7->Text = L"����";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &Form1::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(24, 24);
			this->toolStripButton8->Text = L"�˳�";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &Form1::toolStripButton8_Click);
			this->toolStripButton8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::toolStripButton8_MouseMove);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::SaddleBrown;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripProgressBar1, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5,
					this->toolStripStatusLabel6
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 804);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 13, 0);
			this->statusStrip1->Size = System::Drawing::Size(1696, 36);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripStatusLabel1.BackgroundImage")));
			this->toolStripStatusLabel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(170, 31);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripStatusLabel2.BackgroundImage")));
			this->toolStripStatusLabel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripStatusLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(170, 31);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripProgressBar1->Maximum = 60;
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 30);
			this->toolStripProgressBar1->Step = 1;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->AutoSize = false;
			this->toolStripStatusLabel3->BackColor = System::Drawing::Color::White;
			this->toolStripStatusLabel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripStatusLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(350, 31);
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->AutoSize = false;
			this->toolStripStatusLabel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripStatusLabel4.BackgroundImage")));
			this->toolStripStatusLabel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripStatusLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(167, 31);
			this->toolStripStatusLabel4->Text = L"toolStripStatusLabel4";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->AutoSize = false;
			this->toolStripStatusLabel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripStatusLabel5.BackgroundImage")));
			this->toolStripStatusLabel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripStatusLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(167, 31);
			this->toolStripStatusLabel5->Text = L"toolStripStatusLabel5";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->AutoSize = false;
			this->toolStripStatusLabel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripStatusLabel6.BackgroundImage")));
			this->toolStripStatusLabel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toolStripStatusLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(167, 31);
			this->toolStripStatusLabel6->Text = L"toolStripStatusLabel6";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(157, 655);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(668, 124);
			this->listBox1->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(265, 36);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(303, 34);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(85, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 27);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ѡ��ͼ���";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PaleGoldenrod;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(157, 302);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(844, 335);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CurrentCellChanged += gcnew System::EventHandler(this, &Form1::dataGridView1_CurrentCellChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(1040, 115);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(409, 636);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"������κ", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(105, 20);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(168, 30);
			this->label14->TabIndex = 12;
			this->label14->Text = L"���ݿ����";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(68, 134);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 35);
			this->textBox1->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(260, 479);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 44);
			this->button3->TabIndex = 10;
			this->button3->Text = L"�޸�";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
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
			this->button2->Location = System::Drawing::Point(148, 479);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 44);
			this->button2->TabIndex = 9;
			this->button2->Text = L"ɾ��";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(36, 479);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 44);
			this->button1->TabIndex = 8;
			this->button1->Text = L"���";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(68, 400);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 35);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(68, 311);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(264, 35);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(68, 222);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 35);
			this->textBox2->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(63, 371);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 27);
			this->label5->TabIndex = 3;
			this->label5->Text = L"������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(63, 282);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 27);
			this->label4->TabIndex = 2;
			this->label4->Text = L"����";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(63, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 27);
			this->label3->TabIndex = 1;
			this->label3->Text = L"����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(63, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 27);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID";
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
			this->button4->Location = System::Drawing::Point(683, 151);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 44);
			this->button4->TabIndex = 9;
			this->button4->Text = L"����";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(85, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 27);
			this->label6->TabIndex = 10;
			this->label6->Text = L"����";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(163, 98);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(263, 35);
			this->textBox5->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(497, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 27);
			this->label7->TabIndex = 12;
			this->label7->Text = L"����";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(85, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 27);
			this->label8->TabIndex = 13;
			this->label8->Text = L"������";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(575, 98);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(213, 35);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(192, 159);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(376, 35);
			this->textBox7->TabIndex = 15;
			// 
			// groupBox2
			// 
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Location = System::Drawing::Point(1040, 115);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(412, 636);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"������κ", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(125, -4);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 30);
			this->label15->TabIndex = 12;
			this->label15->Text = L"�û�����";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(75, 134);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(264, 35);
			this->textBox8->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button7->Location = System::Drawing::Point(251, 479);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(107, 44);
			this->button7->TabIndex = 8;
			this->button7->Text = L"����";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox9->Location = System::Drawing::Point(75, 400);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(264, 35);
			this->textBox9->TabIndex = 7;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(75, 311);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(264, 35);
			this->textBox10->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox11->Location = System::Drawing::Point(75, 222);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(264, 35);
			this->textBox11->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(69, 371);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 27);
			this->label9->TabIndex = 3;
			this->label9->Text = L"������";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(69, 282);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 27);
			this->label10->TabIndex = 2;
			this->label10->Text = L"����";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(69, 194);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(68, 27);
			this->label11->TabIndex = 1;
			this->label11->Text = L"����";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(69, 105);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 27);
			this->label12->TabIndex = 0;
			this->label12->Text = L"ID";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(812, 74);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(121, 96);
			this->listView1->TabIndex = 16;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"�����п�", 42, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label13->Location = System::Drawing::Point(16, 202);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 511);
			this->label13->TabIndex = 17;
			this->label13->Text = L"ͼ\r\n��\r\n��\r\n��\r\n��\r\nϵ\r\nͳ";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 59);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(376, 519);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(1040, 111);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(428, 634);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox4.BackgroundImage")));
			this->groupBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->listView1);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Location = System::Drawing::Point(135, 74);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(897, 222);
			this->groupBox4->TabIndex = 20;
			this->groupBox4->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1696, 840);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label13);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ͼ��ݹ���ϵͳ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime dateTime = DateTime::Now;            	// ��ȡϵͳ��ǰʱ��

		toolStripStatusLabel1->Text = dateTime.ToLongDateString();	// ��ʾ����

		toolStripStatusLabel2->Text = dateTime.ToLongTimeString(); 	// ��ʾʱ��

		toolStripProgressBar1->Value = dateTime.Second;         	// ������

		data_receivce();
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
	if ((LoginForm::ID == "��ͨ�û�") || (LoginForm::ID == "�߼��û�")){
		this->groupBox2->Enabled = true;
		this->�ҵ�ToolStripMenuItem->Enabled = true;
		this->groupBox1->Visible = false;
		this->groupBox2->Visible = true;
		this->groupBox3->Visible = false;
	}
	if (LoginForm::ID == "����Ա")
	{
		this->groupBox1->Enabled = true;
		this->groupBox2->Enabled = true;
		this->�ҵ�ToolStripMenuItem->Enabled = true;
		this->��ӹ���ԱToolStripMenuItem->Enabled = true;
		this->groupBox1->Visible = true;
		this->groupBox2->Visible = false;
		this->groupBox3->Visible = false;
	}

}

		 void ToolStripFlush()
		 {
			 this->toolStripStatusLabel5->Text = "�û���:" + LoginForm::UserName;
			 this->toolStripStatusLabel6->Text = "�û����:" + LoginForm::ID;
			 this->toolStripStatusLabel4->Text = "״̬:"+LoginForm::LoginState;
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	ToolStripFlush();
	gcnew Connection;
	this->groupBox1->Enabled = false;
	this->groupBox2->Enabled = false;
	this->�ҵ�ToolStripMenuItem->Enabled=false;
	this->��ӹ���ԱToolStripMenuItem->Enabled = false;
	this->�򿪴���ToolStripMenuItem->Enabled = false;
	this->��ӡToolStripMenuItem->Enabled = false;
	this->��ӡԤ��ToolStripMenuItem->Enabled = false;
}
private: System::Void ע��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	RegisterForm^aRegisterForm = gcnew RegisterForm;
	aRegisterForm->ShowDialog();
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
		this->groupBox1->Enabled = false;
		this->groupBox2->Enabled = false;
		this->�ҵ�ToolStripMenuItem->Enabled = false;
		this->��ӹ���ԱToolStripMenuItem->Enabled = false;
		
	}
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void ��������ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}

public:SerialForm^dlg = gcnew SerialForm();
private: System::Void ����ToolStripMenuItem_DropDownItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	ToolStripMenuItem^ item;

	if (e == nullptr)

		item = safe_cast<ToolStripMenuItem^>(sender);

	else

		item = safe_cast<ToolStripMenuItem^>(e->ClickedItem);
	if (item == ��������ToolStripMenuItem)
	{
		dlg->com->Close();
		GetComList_Reg(dlg->comboBox4);
		dlg->ShowDialog();
	}
	if (item == �򿪴���ToolStripMenuItem)
	{
		if (dlg->com->IsOpen || IsFileOpen != 1)return;
		dlg->com->Open();//�򿪴��ڣ���������chart����
	}
	if (item == �رմ���ToolStripMenuItem)
	{
		dlg->com->Close();//�رմ��ڣ���������chart����
	}
}

private:bool GetComList_Reg(ComboBox ^combox)
{
	HKEY hkey;
	int result;
	int i = 0;
	result = RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("Hardware\\DeviceMap\\SerialComm"), NULL, KEY_READ, &hkey);
	//��ע���
	if (ERROR_SUCCESS == result)
	{
		TCHAR portName[0x100], commName[0x100];
		DWORD dwLong, dwSize;
		combox->Items->Clear();
		while (1)
		{
			dwSize = sizeof(portName) / sizeof(TCHAR);
			dwLong = dwSize;
			result = RegEnumValue(hkey, i, portName, &dwLong, NULL, NULL, (LPBYTE)commName, &dwSize);
			if (ERROR_NO_MORE_ITEMS == result)
			{
				//ö�ٴ���
				break;   //commName���Ǵ�������"COM2"
			}
			String ^strComName = gcnew String(commName);
			combox->Items->Add(strComName);
			i++;
		}
		RegCloseKey(hkey);
	}
	if (combox->Items->Count > 0)
	{
		combox->SelectedIndex = 0;//Ĭ��ѡ�е�һ��
		return true;
	}
	else
	{
		return false;
	}
}
		OleDbConnection^ con1 ;
		Boolean complete = true;
		private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
				 char count = 0;
				 int bufroom = 0;
				 int readed = 0;
				 int site = 0;
				public: static array<String^> ^split = gcnew array<String^>(5){ };
				private :String^ none = "��";
	
public: void data_receivce()//���մ�������
	{	
		static char buffer[200] = {0};
		if (dlg->com->IsOpen)
		{
			bufroom = dlg->com->BytesToRead;
			if (bufroom != 0)
			{
					//MessageBox::Show("daozhi");
				for (int i = site; i < bufroom + readed; i++, site++)
					{	
						buffer[i] = dlg->com->ReadChar();
						if (buffer[i] == 59)count++;
						if (count == 4)return;
				}readed = site;
					

				if (count == 4)
				{
					count = 0;			
					site=readed = 0;
					String^buff = gcnew String(buffer);
					buffer[200] = {0};
					listBox1->Items->Add(buff);
					split = buff->Split(59);
					DateTime dateTime = DateTime::Now;
					String^ strCmd2;
					con1->Open();    // ������
					//String^ strTableName = split[0];
					//strCmd2 = String::Format("INSERT INTO{0} ([����],[����],[������],[������],[�ϼ�ʱ��]) VALUES( '" + split[1] + "','" + split[2] + "','" + split[3] + "','" + none + "',Now() )", strTableName);
					if (split[0] == (String^)"0")
						strCmd2 = "INSERT INTO У����([����],[����],[������],[������],[�ϼ�ʱ��]) VALUES( '" + split[1] + "','" + split[2] + "','" + split[3] + "','" + none + "',Now() )";
					else if (split[0] == (String^)"1")
						strCmd2 = "INSERT INTO ��У([����],[����],[������],[������],[�ϼ�ʱ��]) VALUES( '" + split[1] + "','" + split[2] + "','" + split[3] + "','" + none + "',Now() )";
					else if (split[0] == (String^)"2")
						strCmd2 = "INSERT INTO �麣У��([����],[����],[������],[������],[�ϼ�ʱ��]) VALUES( '" + split[1] + "','" + split[2] + "','" + split[3] + "','" + none + "',Now() )";
					OleDbCommand^ comm2 = gcnew OleDbCommand(strCmd2, con1); 
					comm2->ExecuteNonQuery();
					con1->Close();
				}

			}
		}
	}


		Boolean IsFileOpen = 0;
private: System::Void �ļ�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^  pOFD = gcnew OpenFileDialog();

	pOFD->Filter = "Access�ļ�(*.mdb)|*.mdb";

	pOFD->DefaultExt = "mdb";

	if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

	Connection::strConn = String::Format(

		"Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
	IsFileOpen = 1;

	//this->�ҵ�ToolStripMenuItem->Enabled = true;

	this->�򿪴���ToolStripMenuItem->Enabled = true;
	this->��ӡToolStripMenuItem->Enabled = true;
	this->��ӡԤ��ToolStripMenuItem->Enabled = true;

	con1 = gcnew OleDbConnection(Connection::strConn);

	OleDbConnection^ con1 = gcnew OleDbConnection(Connection::strConn);

	con1->Open();		// ������

	// �����Ͽ���б���

	this->comboBox1->Items->Clear();

	// ��ȡ���ݱ����ƣ�����䵽toolStripComboBox1��

	// ָ�������У�����GetOleDbSchemaTable��,���ص�����Ϊtable��

	array<String^>^ strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE" };

	DataTable^ table = con1->GetOleDbSchemaTable(

		OleDbSchemaGuid::Tables, strs);		// ��ȡ���ݱ���

	if (table->Rows->Count > 0)

	{

		for each (DataRow^ row in table->Rows)

		{
			if ((String^)row["TABLE_NAME"] != "�û�")
			this->comboBox1->Items->Add(row["TABLE_NAME"]);

		}

		this->comboBox1->SelectedIndex = 0;

	}

	con1->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (IsFileOpen != 1)return;

	int nIndex = this->comboBox1->SelectedIndex;

	if (nIndex < 0) return;

	// ��ȡѡ������ݱ���

	String^ strTableName = this->comboBox1->Items[nIndex]->ToString();

	// ʹ��DataAdapter��DataSet

	String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

	OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, Connection::strConn);

	DataSet^ theSet1 = gcnew DataSet();

	da1->Fill(theSet1, "Test");			// ����ָ��������

	this->dataGridView1->DataSource = theSet1;

	this->dataGridView1->DataMember = "Test";	// ָ��Ҫ�򿪵ı�

	this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);

	UpdateListview(theSet1->Tables["Test"]);

	/* ֱ��ʹ�ñ�

	DataTable^ table = gcnew DataTable;

	da1->Fill( table );

	this->dataGridView1->DataSource = table;*/
}


		
private: System::Void On_SelCell(System::Object^  sender, System::EventArgs^  e) {

	// ʹdataGridView1�ؼ��е�ǰѡ�еļ�¼��������ʾ���ұߵĿؼ���

	// ��ȡ��ǰ��
	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	if (curRow == nullptr) return;

	this->textBox1->Text = curRow->Cells[0]->Value->ToString();

	this->textBox2->Text = curRow->Cells[1]->Value->ToString();

	this->textBox3->Text = curRow->Cells[2]->Value->ToString();

	this->textBox4->Text = curRow->Cells[3]->Value->ToString();

}


private: System::Boolean CheckValid(System::Void){

	if (String::IsNullOrEmpty((String^)this->textBox2->Text))return false;
	if (String::IsNullOrEmpty((String^)this->textBox3->Text))return false;
	if (String::IsNullOrEmpty((String^)this->textBox4->Text))return false;

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CheckValid()){
		MessageBox::Show("������Ϣ�����������ʧ�ܣ�");
		return;
	}
	if (IsFileOpen != 1)return;
	// �ж��Ƿ���ѧ���źͿγ̺Ŷ���ͬ�ļ�¼�����У������
	String^ strCmd1;
	String^ strTableName = this->comboBox1->Items[this->comboBox1->SelectedIndex]->ToString();
	//strCmd1 = String::Format("SELECT * FROM {0} WHERE �ʺ�='{1}'", (String^)strTableName, textBox1->Text);
		//Data::OleDb::OleDbCommand^ selectCmd = gcnew Data::OleDb::OleDbCommand(strCmd, con1);

	try {

		strCmd1 = String::Format("INSERT INTO {0}([����],[����],[������],[������],[�ϼ�ʱ��]) VALUES( '" + this->textBox2->Text + "','" + this->textBox3->Text + "','" + this->textBox4->Text + "','" + none + "',Now() )", strTableName);

			// ������ִ������
			Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd1, con1);

		// ִ�в���

		this->con1->Open();

		cmd->ExecuteNonQuery();

		this->con1->Close();

		// ��ʾ���

		String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, Connection::strConn);

		DataSet^ theSet1 = gcnew DataSet();

		da1->Fill(theSet1, "Test");			// ����ָ��������

		this->dataGridView1->DataSource = theSet1;

		this->dataGridView1->DataMember = "Test";	// ָ��Ҫ�򿪵ı�

		this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);

		UpdateListview(theSet1->Tables["Test"]);
	}

	catch (Data::OleDb::OleDbException^ e)

	{
		MessageBox::Show(e->Message, "����");
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (CheckValid()){
		MessageBox::Show("δѡ��Ҫɾ������Ϣ��");
		return;
	}

	if (IsFileOpen != 1)return;



	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	String^ strTableName = this->comboBox1->Items[this->comboBox1->SelectedIndex]->ToString();
	// ɾ����¼
	if (((String^)curRow->Cells[4]->Value->ToString() != (String^)"��")){
		MessageBox::Show("��ͼ���ѱ����ģ��޷�ɾ����");
		return;
	}


	try {

		String^ strCmd = String::Format("DELETE FROM {0} WHERE ID= {1}", strTableName, this->textBox1->Text);

			// ������ִ������

			Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, con1);

		// ִ�в���

			this->con1->Open();

		cmd->ExecuteNonQuery();

		this->con1->Close();

		// ��ʾ���

		String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText,Connection::strConn);

		DataSet^ theSet1 = gcnew DataSet();

		da1->Fill(theSet1, "Test");			// ����ָ��������

		this->dataGridView1->DataSource = theSet1;

		this->dataGridView1->DataMember = "Test";	// ָ��Ҫ�򿪵ı�

		this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);

		UpdateListview(theSet1->Tables["Test"]);

	}

	catch (Data::OleDb::OleDbException^ e)

	{

		MessageBox::Show(e->Message, "����");

	}
}

private: System::Void dataGridView1_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e) {
	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	if (curRow == nullptr) return;

	this->textBox1->Text = curRow->Cells[0]->Value->ToString();

	this->textBox2->Text = curRow->Cells[1]->Value->ToString();

	this->textBox3->Text = curRow->Cells[2]->Value->ToString();

	this->textBox4->Text = curRow->Cells[3]->Value->ToString();

	this->textBox8->Text = curRow->Cells[0]->Value->ToString();

	this->textBox11->Text = curRow->Cells[1]->Value->ToString();

	this->textBox10->Text = curRow->Cells[2]->Value->ToString();

	this->textBox9->Text = curRow->Cells[3]->Value->ToString();
}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsFileOpen != 1)return;
	// �ж��Ƿ���ѧ���źͿγ̺Ŷ���ͬ�ļ�¼�����У������
	String^ strCmd1;
	String^ strTableName = this->comboBox1->Items[this->comboBox1->SelectedIndex]->ToString();
	//strCmd1 = String::Format("SELECT * FROM {0} WHERE �ʺ�='{1}'", (String^)strTableName, textBox1->Text);
	//Data::OleDb::OleDbCommand^ selectCmd = gcnew Data::OleDb::OleDbCommand(strCmd, con1);

	try {

		strCmd1 = String::Format("SELECT * FROM {0} WHERE ����= '{1}' OR ����= '{2}' OR ������= '{3}'", strTableName, textBox5->Text, textBox6->Text, textBox7->Text);

		// ������ִ������
		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd1, con1);

		// ִ�в���

		this->con1->Open();

		cmd->ExecuteNonQuery();

		this->con1->Close();

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(strCmd1,Connection::strConn);

		DataSet^ theSet1 = gcnew DataSet();

		da1->Fill(theSet1, "Test");			// ����ָ��������

		this->dataGridView1->DataSource = theSet1;

		this->dataGridView1->DataMember = "Test";	// ָ��Ҫ�򿪵ı�

		this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);

		UpdateListview(theSet1->Tables["Test"]);
	}

	catch (Data::OleDb::OleDbException^ e)

	{
		MessageBox::Show(e->Message, "����");
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (IsFileOpen != 1)return;
			 if (CheckValid()){
				 MessageBox::Show("δѡ��Ҫ���ĵ�ͼ�飡");
				 return;
			 }

			 DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
			 if ((curRow == nullptr))return;
			 if (((String^)curRow->Cells[4]->Value->ToString() != (String^)"��")){
				 MessageBox::Show("��ͼ���ѱ����ģ�");
				 return;
			 }

			 if ((LoginForm::borrowed == 5) && (LoginForm::ID == "��ͨ�û�")){
				 MessageBox::Show("���Ľ������Ѵ����ޣ�");
				 return;
			 }

			 if ((LoginForm::borrowed == 10) && (LoginForm::ID == "�߼��û�")){
				 MessageBox::Show("���Ľ������Ѵ����ޣ�");
				 return;
			 }
			 String^ strTableName = this->comboBox1->Items[this->comboBox1->SelectedIndex]->ToString();

			 try {

				

				 String^ strCmd = String::Format("UPDATE {0} SET ������ = '{1}' WHERE  ID= {2}", strTableName, LoginForm::UserName,this->textBox8->Text);

				 Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, con1);

				 // ִ�в���

				 this->con1->Open();

				 cmd->ExecuteNonQuery();

				 this->con1->Close();

				 String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);

				 OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, Connection::strConn);

				 DataSet^ theSet1 = gcnew DataSet();

				 da1->Fill(theSet1, "Test");			// ����ָ��������

				 this->dataGridView1->DataSource = theSet1;

				 this->dataGridView1->DataMember = "Test";	// ָ��Ҫ�򿪵ı�

				 this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);

				 UpdateListview(theSet1->Tables["Test"]);

				 LoginForm::borrowed++;

				 String^ strCmd1 = String::Format("UPDATE �û� SET �ѽ��� = {1} WHERE  �û���= '{2}'", strTableName, LoginForm::borrowed, LoginForm::UserName);

				 Data::OleDb::OleDbCommand^ cmd1 = gcnew Data::OleDb::OleDbCommand(strCmd1, con1);

				 // ִ�в���

				 this->con1->Open();

				 cmd1->ExecuteNonQuery();

				 this->con1->Close();

				 String^ message = L"IsBorrow:yes";

				 if (dlg->com->IsOpen)
					 dlg->com->Write(message);
				 else
					 MessageBox::Show(L"����δ��");

			 }

			 catch (Data::OleDb::OleDbException^ e)

			 {

				 MessageBox::Show(e->Message, "����");

			 }
}


private: System::Void �ҵ�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageForm ^aMessageForm = gcnew MessageForm;
	aMessageForm->ShowDialog();
}
private: System::Void �ر�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->dataGridView1->DataSource = nullptr;
	this->�ҵ�ToolStripMenuItem->Enabled = false;
	this->�򿪴���ToolStripMenuItem->Enabled = false;
	this->comboBox1->Items->Clear();
	this->comboBox1->Text = "";
	this->��ӡToolStripMenuItem->Enabled = false;
	this->��ӡԤ��ToolStripMenuItem->Enabled = false;
}
private: System::Void ��ӹ���ԱToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AddManageForm^ aAddManageForm = gcnew AddManageForm();
	aAddManageForm->ShowDialog();
}
private: System::Void ��ӡToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintDialog^ printDlg = gcnew PrintDialog();   		// ��ӡ�Ի���

	printDlg->Document = this->printDocument1;      	// ���ô�ӡ�ĵ�

	if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)

		this->printDocument1->Print();             	 // ��ʼ��ӡ
}
private: System::Void ��ӡԤ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	try{
		PrintPreviewDialog^ previewDlg = gcnew PrintPreviewDialog(); //��ӡԤ���Ի���

		previewDlg->Document = this->printDocument1;

		previewDlg->ShowDialog();
	}
	catch (...){};
}

private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
	Graphics^ g = e->Graphics;

	int left = e->MarginBounds.Left;                   // ���Ͻ�Xλ��

	int top = e->MarginBounds.Top;                   // ���Ͻ�Yλ��

	int width = e->MarginBounds.Width;                 //��Ч������

	int height = e->MarginBounds.Height;             // ��Ч����߶�

	// ��ӡҳͷ(����,26��)

	Drawing::Font^ headerFont =

		gcnew Drawing::Font(L"����", 26, FontStyle::Regular);

	g->DrawString(this->comboBox1->Items[this->comboBox1->SelectedIndex]->ToString(), headerFont, Brushes::Black, left + 230, top);

	// ��ӡ����(������ɫ,����,12��)

	top += 60;

	Drawing::Pen^  tablesPen = gcnew Drawing::Pen(Color::Black);

	g->DrawImage(gcnew Bitmap("..\\Debug\\1.png"), 650, -15, 160, top + 10);
	g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

	Drawing::Font^titlesFont = gcnew Drawing::Font(L"����", 12, FontStyle::Bold);

	g->DrawString(L"ID", titlesFont, Brushes::Black, left+20, top + 5);

	g->DrawLine(tablesPen, left + 60, top, left + 60, top + 30);          //�зָ���

	g->DrawString(L"����", titlesFont, Brushes::Black, left + 70, top + 5);

	g->DrawLine(tablesPen, left + 190, top, left + 190, top + 30);

	g->DrawString(L"����", titlesFont, Brushes::Black, left + 200, top + 5);

	g->DrawLine(tablesPen, left + 350, top, left + 350, top + 30);

	g->DrawString(L"������", titlesFont, Brushes::Black, left + 360, top + 5);
	
	g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

	g->DrawString(L"������", titlesFont, Brushes::Black, left + 560, top + 5);


	//g->DrawLine(tablesPen, left + 430, top, left + 430, top + 30);

	//g->DrawString(L"�ɼ�3", titlesFont, Brushes::Black, left + 450, top + 5);

	// ��ӡҳ��

	top += 30, height -= 30;

	Drawing::Font^ tablesFont =

		gcnew Drawing::Font(L"����", 12, FontStyle::Regular);

	for each(ListViewItem^ item in this->listView1->Items) {

		g->DrawString(item->SubItems[0]->Text, tablesFont,Brushes::Black, left + 20, top + 5);      // ѧ��

		g->DrawLine(tablesPen, left + 60, top, left +60, top + 30);             //�зָ���

		g->DrawString(item->SubItems[1]->Text, tablesFont, Brushes::Black, left + 70, top + 5);    // ����

		g->DrawLine(tablesPen, left + 190, top, left + 190, top + 30);

		g->DrawString(item->SubItems[2]->Text, tablesFont, Brushes::Black, left + 200, top + 5);    // �ɼ�1

		g->DrawLine(tablesPen, left + 350, top, left + 350, top + 30);

		g->DrawString(item->SubItems[3]->Text, tablesFont, Brushes::Black, left + 360, top + 5);    // �ɼ�2
		
		g->DrawLine(tablesPen, left + 550, top, left + 550, top + 30);

		g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 560, top + 5);      // ѧ��



		// g->DrawLine(tablesPen, left + 620, top, left + 650, top + 30);

		//g->DrawString(item->SubItems[4]->Text, tablesFont, Brushes::Black, left + 460, top + 5);    // �ɼ�3

		//g->DrawLine(tablesPen, left, top + 30, left + width, top + 30);

		top += 30, height -= 30;

	}

	e->HasMorePages = false;
}

public:void UpdateListview(DataTable^table)
{
	ListViewItem^ item;
	listView1->Items->Clear();
	for each (DataRow^ row in table->Rows)

	{

		if (row->RowState != DataRowState::Deleted)// ��������ɾ������

		{

			item = gcnew ListViewItem(row[0]->ToString());

			for (int i = 1; i<table->Columns->Count; i++)

				item->SubItems->Add(row[i]->ToString());

		}

		listView1->Items->Add(item);

	}
}

private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	HelpForm^pDlg = gcnew HelpForm();
	pDlg->ShowDialog();
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutForm^pDlg = gcnew AboutForm();
	pDlg->ShowDialog();
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutForm^pDlg = gcnew AboutForm();
	pDlg->ShowDialog();
}
private: System::Void toolStripButton7_Click(System::Object^  sender, System::EventArgs^  e) {
	HelpForm^pDlg = gcnew HelpForm();
	pDlg->ShowDialog();
}
private: System::Void toolStripButton8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void toolStripButton8_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	String ^str = "X=" + e->X.ToString() + ",Y=" + e->Y.ToString();
	this->toolStripStatusLabel3->Text = str;
}
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {
	dlg->com->Close();
	GetComList_Reg(dlg->comboBox4);
	dlg->ShowDialog();
}
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->dataGridView1->DataSource = nullptr;
	this->�ҵ�ToolStripMenuItem->Enabled = false;
	this->�򿪴���ToolStripMenuItem->Enabled = false;
	this->comboBox1->Items->Clear();
	this->comboBox1->Text = "";
	this->��ӡToolStripMenuItem->Enabled = false;
	this->��ӡԤ��ToolStripMenuItem->Enabled = false;
}
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
	PrintDialog^ printDlg = gcnew PrintDialog();   		// ��ӡ�Ի���

	printDlg->Document = this->printDocument1;      	// ���ô�ӡ�ĵ�

	if (printDlg->ShowDialog() == System::Windows::Forms::DialogResult::OK)

		this->printDocument1->Print();             	 // ��ʼ��ӡ
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^  pOFD = gcnew OpenFileDialog();

	pOFD->Filter = "Access�ļ�(*.mdb)|*.mdb";

	pOFD->DefaultExt = "mdb";

	if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;

	Connection::strConn = String::Format(

		"Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
	IsFileOpen = 1;

	//this->�ҵ�ToolStripMenuItem->Enabled = true;

	this->�򿪴���ToolStripMenuItem->Enabled = true;
	this->��ӡToolStripMenuItem->Enabled = true;
	this->��ӡԤ��ToolStripMenuItem->Enabled = true;

	con1 = gcnew OleDbConnection(Connection::strConn);

	OleDbConnection^ con1 = gcnew OleDbConnection(Connection::strConn);

	con1->Open();		// ������

	// �����Ͽ���б���

	this->comboBox1->Items->Clear();

	// ��ȡ���ݱ����ƣ�����䵽toolStripComboBox1��

	// ָ�������У�����GetOleDbSchemaTable��,���ص�����Ϊtable��

	array<String^>^ strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE" };

	DataTable^ table = con1->GetOleDbSchemaTable(

		OleDbSchemaGuid::Tables, strs);		// ��ȡ���ݱ���

	if (table->Rows->Count > 0)

	{

		for each (DataRow^ row in table->Rows)

		{
			if ((String^)row["TABLE_NAME"] != "�û�")
				this->comboBox1->Items->Add(row["TABLE_NAME"]);

		}

		this->comboBox1->SelectedIndex = 0;

	}

	con1->Close();
}
};
}

