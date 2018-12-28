#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HelpForm 摘要
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"系统简介"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"打开"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"关闭"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"打印"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"打印预览"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"文件", gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode2,
					treeNode3, treeNode4, treeNode5
			}));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"串口设置"));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"打开串口"));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"关闭串口"));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"串口", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode7,
					treeNode8, treeNode9
			}));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"登录"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"注册"));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"退出登录"));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"用户信息"));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"添加管理员"));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"用户", gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode11,
					treeNode12, treeNode13, treeNode14, treeNode15
			}));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"帮助"));
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"关于", 6, 6));
			System::Windows::Forms::TreeNode^  treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"退出", 11, 11));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->button1->Location = System::Drawing::Point(619, 487);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"返回";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &HelpForm::button1_Click);
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::Info;
			this->treeView1->HotTracking = true;
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(21, 59);
			this->treeView1->Name = L"treeView1";
			treeNode1->ImageIndex = 4;
			treeNode1->Name = L"节点20";
			treeNode1->Text = L"系统简介";
			treeNode2->ImageIndex = 8;
			treeNode2->Name = L"节点1";
			treeNode2->Text = L"打开";
			treeNode3->ImageIndex = 5;
			treeNode3->Name = L"节点3";
			treeNode3->Text = L"关闭";
			treeNode4->ImageIndex = 3;
			treeNode4->Name = L"节点5";
			treeNode4->Text = L"打印";
			treeNode5->ImageIndex = 3;
			treeNode5->Name = L"节点6";
			treeNode5->Text = L"打印预览";
			treeNode6->ImageIndex = 3;
			treeNode6->Name = L"节点0";
			treeNode6->Text = L"文件";
			treeNode7->ImageIndex = 2;
			treeNode7->Name = L"节点8";
			treeNode7->Text = L"串口设置";
			treeNode8->ImageIndex = 2;
			treeNode8->Name = L"节点9";
			treeNode8->Text = L"打开串口";
			treeNode9->ImageIndex = 2;
			treeNode9->Name = L"节点10";
			treeNode9->Text = L"关闭串口";
			treeNode10->ImageIndex = 2;
			treeNode10->Name = L"节点7";
			treeNode10->Text = L"串口";
			treeNode11->ImageIndex = 9;
			treeNode11->Name = L"节点12";
			treeNode11->Text = L"登录";
			treeNode12->ImageIndex = 10;
			treeNode12->Name = L"节点13";
			treeNode12->Text = L"注册";
			treeNode13->ImageIndex = 7;
			treeNode13->Name = L"节点14";
			treeNode13->Text = L"退出登录";
			treeNode14->ImageIndex = 4;
			treeNode14->Name = L"节点15";
			treeNode14->Text = L"用户信息";
			treeNode15->ImageIndex = 10;
			treeNode15->Name = L"节点16";
			treeNode15->Text = L"添加管理员";
			treeNode16->ImageIndex = 4;
			treeNode16->Name = L"节点11";
			treeNode16->Text = L"用户";
			treeNode17->ImageIndex = 0;
			treeNode17->Name = L"节点17";
			treeNode17->SelectedImageKey = L"(默认值)";
			treeNode17->Text = L"帮助";
			treeNode18->ImageIndex = 6;
			treeNode18->Name = L"节点18";
			treeNode18->SelectedImageIndex = 6;
			treeNode18->Text = L"关于";
			treeNode19->ImageIndex = 11;
			treeNode19->Name = L"节点19";
			treeNode19->SelectedImageIndex = 11;
			treeNode19->Text = L"退出";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(7) {
				treeNode1, treeNode6, treeNode10,
					treeNode16, treeNode17, treeNode18, treeNode19
			});
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->Size = System::Drawing::Size(216, 366);
			this->treeView1->TabIndex = 1;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &HelpForm::treeView1_AfterSelect);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"帮助.png");
			this->imageList1->Images->SetKeyName(1, L"保存.png");
			this->imageList1->Images->SetKeyName(2, L"串口.png");
			this->imageList1->Images->SetKeyName(3, L"打印.png");
			this->imageList1->Images->SetKeyName(4, L"登录.png");
			this->imageList1->Images->SetKeyName(5, L"关  闭.png");
			this->imageList1->Images->SetKeyName(6, L"关于.png");
			this->imageList1->Images->SetKeyName(7, L"退出 (5).png");
			this->imageList1->Images->SetKeyName(8, L"文件.png");
			this->imageList1->Images->SetKeyName(9, L"用户.png");
			this->imageList1->Images->SetKeyName(10, L"注册.png");
			this->imageList1->Images->SetKeyName(11, L"注销.png");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(286, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 20);
			this->label1->TabIndex = 2;
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(796, 575);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"HelpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"帮助";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

private: TreeNode^ GetSelRootNode(System::Void)

{

	if (treeView1->SelectedNode == nullptr)

	{

		MessageBox::Show("本操作先要选择节点记录！", "提示");

		return nullptr;

	}

	// 找到选中的最高级根节点

	TreeNode^ rootNode = treeView1->SelectedNode->Parent;

	if (rootNode == nullptr)

		rootNode = treeView1->SelectedNode;

	else

	{

		if (rootNode->Parent != nullptr)

			rootNode = rootNode->Parent;

	}

	return rootNode;

}
		 String^abstract = "该系统由用户、文件、串口、图书查找、\r\n图书管理、图书借阅、帮助、关于这些模块组成\r\n"
			 "用户模块实现对图书馆管理系统中的用户管理。\r\n"
			 "文件模块实现对图书馆馆藏图书数据库的调入。\r\n"
			 " 串口模块用于实现和RFID读写器之间的通信\r\n"
			 "图书管理模块分为图书查找、借阅及归还以及\r\n图书添加和删除。用户可根据自己\r\n所需的图书信息就行查找，\r\n方面更快地定位自己所需要的资源，图书借阅及\r\n归还模块实现用户对图书借阅和归还的操作。\r\n图书添加和删除模块实现管理员对于馆藏图书的操作。";
			 
		 String^about="软件的版本、软件版权\r\n和软件设计者个人信息。";
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
		TreeNode ^Node = treeView1->SelectedNode;

		if (Node == nullptr) return;
		if (Node->Text == "系统简介")this->label1->Text = abstract;
		if (Node->Text == "关于")this->label1->Text = about;

	}
};
}
