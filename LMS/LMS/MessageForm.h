#pragma once
#include "LoginForm.h"
#include"Connection.h"
namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// MessageForm 摘要
	/// </summary>
	public ref class MessageForm : public System::Windows::Forms::Form
	{
	public:
		MessageForm(void)
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
		~MessageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(267, 165);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(844, 374);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CurrentCellChanged += gcnew System::EventHandler(this, &MessageForm::dataGridView1_CurrentCellChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Location = System::Drawing::Point(15, 188);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(267, 333);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"图书信息";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 244);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 25);
			this->textBox1->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 15);
			this->label1->TabIndex = 12;
			this->label1->Text = L"已借阅（/本）";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(120, 39);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 25);
			this->textBox8->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(72, 293);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 25);
			this->button7->TabIndex = 8;
			this->button7->Text = L"归还";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MessageForm::button7_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(120, 187);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 25);
			this->textBox9->TabIndex = 7;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(120, 138);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 25);
			this->textBox10->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(120, 92);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 25);
			this->textBox11->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 197);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 15);
			this->label9->TabIndex = 3;
			this->label9->Text = L"出版社";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(27, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 15);
			this->label10->TabIndex = 2;
			this->label10->Text = L"作者";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 92);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 15);
			this->label11->TabIndex = 1;
			this->label11->Text = L"书名";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(27, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(23, 15);
			this->label12->TabIndex = 0;
			this->label12->Text = L"ID";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(513, 99);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MessageForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(412, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 15);
			this->label2->TabIndex = 15;
			this->label2->Text = L"图书馆";
			// 
			// MessageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 652);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MessageForm";
			this->Text = L"用户信息";
			this->Load += gcnew System::EventHandler(this, &MessageForm::MessageForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				OleDbConnection^ con1;
		private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
	private: System::Void MessageForm_Load(System::Object^  sender, System::EventArgs^  e) {
		gcnew Connection;
		try{
			con1 = gcnew OleDbConnection(Connection::strConn);

			OleDbConnection^ con1 = gcnew OleDbConnection(Connection::strConn);

			con1->Open();		// 打开连接

			// 清空组合框的列表项

			this->comboBox1->Items->Clear();

			// 获取数据表名称，并填充到toolStripComboBox1中

			// 指定限制列，用于GetOleDbSchemaTable中,返回第四列为table表

			array<String^>^ strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE" };

			DataTable^ table = con1->GetOleDbSchemaTable(

				OleDbSchemaGuid::Tables, strs);		// 获取数据表名

			if (table->Rows->Count > 0)

			{

				for each (DataRow^ row in table->Rows)

				{
					if ((String^)row["TABLE_NAME"] != "用户")
						this->comboBox1->Items->Add(row["TABLE_NAME"]);

				}

				this->comboBox1->SelectedIndex = 0;

			}

			con1->Close();
		}
		catch (Data::OleDb::OleDbException^ e)
		{};
	}



private: System::Void dataGridView1_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e) {
	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	if (curRow == nullptr) return;

	this->textBox8->Text = curRow->Cells[0]->Value->ToString();

	this->textBox11->Text = curRow->Cells[1]->Value->ToString();

	this->textBox10->Text = curRow->Cells[2]->Value->ToString();

	this->textBox9->Text = curRow->Cells[3]->Value->ToString();

	this->textBox1->Text = LoginForm::borrowed.ToString();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	
	try {
		int nIndex = this->comboBox1->SelectedIndex;

		if (nIndex < 0) return;

		// 获取选择的数据表名

		String^ strTableName = this->comboBox1->Items[nIndex]->ToString();

		// 使用DataAdapter和DataSet

		String^ cmdText = String::Format("SELECT * FROM {0} WHERE 借阅者='{1}'", strTableName, LoginForm::UserName);

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, Connection::strConn);

		DataSet^ theSet1 = gcnew DataSet();

		da1->Fill(theSet1, "Test");			// 重新指定表名称

		this->dataGridView1->DataSource = theSet1;

		this->dataGridView1->DataMember = "Test";	// 指定要打开的表

		this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);
	}
	catch (Data::OleDb::OleDbException^ e)
	{
	};
}


private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	DataGridViewRow^ curRow = this->dataGridView1->CurrentRow;
	if ((curRow == nullptr))return;

	String^ strTableName = this->comboBox1->Items[this->comboBox1->SelectedIndex]->ToString();

	try {



		String^ strCmd = String::Format("UPDATE {0} SET 借阅者 = '{1}' WHERE  ID= {2}", strTableName, "无", this->textBox8->Text);

		Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, con1);

		// 执行操作

		this->con1->Open();

		cmd->ExecuteNonQuery();

		this->con1->Close();

		String^ cmdText = String::Format("SELECT * FROM {0} WHERE 借阅者='{1}'", strTableName, LoginForm::UserName);

		OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, Connection::strConn);

		DataSet^ theSet1 = gcnew DataSet();

		da1->Fill(theSet1, "Test");			// 重新指定表名称

		this->dataGridView1->DataSource = theSet1;

		this->dataGridView1->DataMember = "Test";	// 指定要打开的表

		this->dataGridView1->AutoResizeColumn(5, DataGridViewAutoSizeColumnMode::AllCellsExceptHeader);

		LoginForm::borrowed--;
		
		this->textBox1->Text = LoginForm::borrowed.ToString();

		String^ strCmd1 = String::Format("UPDATE 用户 SET 已借阅 = {1} WHERE  用户名= '{2}'", strTableName, LoginForm::borrowed, LoginForm::UserName);

		Data::OleDb::OleDbCommand^ cmd1 = gcnew Data::OleDb::OleDbCommand(strCmd1, con1);

		// 执行操作

		this->con1->Open();

		cmd1->ExecuteNonQuery();

		this->con1->Close();

	}

	catch (Data::OleDb::OleDbException^ e)

	{

		MessageBox::Show(e->Message, "错误");

	}
}
};
}
