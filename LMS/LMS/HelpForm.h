#pragma once

namespace LMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HelpForm ժҪ
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"ϵͳ���"));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"��"));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"�ر�"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"��ӡ"));
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"��ӡԤ��"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"�ļ�", gcnew cli::array< System::Windows::Forms::TreeNode^  >(4) {
				treeNode2,
					treeNode3, treeNode4, treeNode5
			}));
			System::Windows::Forms::TreeNode^  treeNode7 = (gcnew System::Windows::Forms::TreeNode(L"��������"));
			System::Windows::Forms::TreeNode^  treeNode8 = (gcnew System::Windows::Forms::TreeNode(L"�򿪴���"));
			System::Windows::Forms::TreeNode^  treeNode9 = (gcnew System::Windows::Forms::TreeNode(L"�رմ���"));
			System::Windows::Forms::TreeNode^  treeNode10 = (gcnew System::Windows::Forms::TreeNode(L"����", gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) {
				treeNode7,
					treeNode8, treeNode9
			}));
			System::Windows::Forms::TreeNode^  treeNode11 = (gcnew System::Windows::Forms::TreeNode(L"��¼"));
			System::Windows::Forms::TreeNode^  treeNode12 = (gcnew System::Windows::Forms::TreeNode(L"ע��"));
			System::Windows::Forms::TreeNode^  treeNode13 = (gcnew System::Windows::Forms::TreeNode(L"�˳���¼"));
			System::Windows::Forms::TreeNode^  treeNode14 = (gcnew System::Windows::Forms::TreeNode(L"�û���Ϣ"));
			System::Windows::Forms::TreeNode^  treeNode15 = (gcnew System::Windows::Forms::TreeNode(L"��ӹ���Ա"));
			System::Windows::Forms::TreeNode^  treeNode16 = (gcnew System::Windows::Forms::TreeNode(L"�û�", gcnew cli::array< System::Windows::Forms::TreeNode^  >(5) {
				treeNode11,
					treeNode12, treeNode13, treeNode14, treeNode15
			}));
			System::Windows::Forms::TreeNode^  treeNode17 = (gcnew System::Windows::Forms::TreeNode(L"����"));
			System::Windows::Forms::TreeNode^  treeNode18 = (gcnew System::Windows::Forms::TreeNode(L"����", 6, 6));
			System::Windows::Forms::TreeNode^  treeNode19 = (gcnew System::Windows::Forms::TreeNode(L"�˳�", 11, 11));
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
			this->button1->Font = (gcnew System::Drawing::Font(L"������κ", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(619, 487);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����";
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
			treeNode1->Name = L"�ڵ�20";
			treeNode1->Text = L"ϵͳ���";
			treeNode2->ImageIndex = 8;
			treeNode2->Name = L"�ڵ�1";
			treeNode2->Text = L"��";
			treeNode3->ImageIndex = 5;
			treeNode3->Name = L"�ڵ�3";
			treeNode3->Text = L"�ر�";
			treeNode4->ImageIndex = 3;
			treeNode4->Name = L"�ڵ�5";
			treeNode4->Text = L"��ӡ";
			treeNode5->ImageIndex = 3;
			treeNode5->Name = L"�ڵ�6";
			treeNode5->Text = L"��ӡԤ��";
			treeNode6->ImageIndex = 3;
			treeNode6->Name = L"�ڵ�0";
			treeNode6->Text = L"�ļ�";
			treeNode7->ImageIndex = 2;
			treeNode7->Name = L"�ڵ�8";
			treeNode7->Text = L"��������";
			treeNode8->ImageIndex = 2;
			treeNode8->Name = L"�ڵ�9";
			treeNode8->Text = L"�򿪴���";
			treeNode9->ImageIndex = 2;
			treeNode9->Name = L"�ڵ�10";
			treeNode9->Text = L"�رմ���";
			treeNode10->ImageIndex = 2;
			treeNode10->Name = L"�ڵ�7";
			treeNode10->Text = L"����";
			treeNode11->ImageIndex = 9;
			treeNode11->Name = L"�ڵ�12";
			treeNode11->Text = L"��¼";
			treeNode12->ImageIndex = 10;
			treeNode12->Name = L"�ڵ�13";
			treeNode12->Text = L"ע��";
			treeNode13->ImageIndex = 7;
			treeNode13->Name = L"�ڵ�14";
			treeNode13->Text = L"�˳���¼";
			treeNode14->ImageIndex = 4;
			treeNode14->Name = L"�ڵ�15";
			treeNode14->Text = L"�û���Ϣ";
			treeNode15->ImageIndex = 10;
			treeNode15->Name = L"�ڵ�16";
			treeNode15->Text = L"��ӹ���Ա";
			treeNode16->ImageIndex = 4;
			treeNode16->Name = L"�ڵ�11";
			treeNode16->Text = L"�û�";
			treeNode17->ImageIndex = 0;
			treeNode17->Name = L"�ڵ�17";
			treeNode17->SelectedImageKey = L"(Ĭ��ֵ)";
			treeNode17->Text = L"����";
			treeNode18->ImageIndex = 6;
			treeNode18->Name = L"�ڵ�18";
			treeNode18->SelectedImageIndex = 6;
			treeNode18->Text = L"����";
			treeNode19->ImageIndex = 11;
			treeNode19->Name = L"�ڵ�19";
			treeNode19->SelectedImageIndex = 11;
			treeNode19->Text = L"�˳�";
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
			this->imageList1->Images->SetKeyName(0, L"����.png");
			this->imageList1->Images->SetKeyName(1, L"����.png");
			this->imageList1->Images->SetKeyName(2, L"����.png");
			this->imageList1->Images->SetKeyName(3, L"��ӡ.png");
			this->imageList1->Images->SetKeyName(4, L"��¼.png");
			this->imageList1->Images->SetKeyName(5, L"��  ��.png");
			this->imageList1->Images->SetKeyName(6, L"����.png");
			this->imageList1->Images->SetKeyName(7, L"�˳� (5).png");
			this->imageList1->Images->SetKeyName(8, L"�ļ�.png");
			this->imageList1->Images->SetKeyName(9, L"�û�.png");
			this->imageList1->Images->SetKeyName(10, L"ע��.png");
			this->imageList1->Images->SetKeyName(11, L"ע��.png");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->Text = L"����";
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

		MessageBox::Show("��������Ҫѡ��ڵ��¼��", "��ʾ");

		return nullptr;

	}

	// �ҵ�ѡ�е���߼����ڵ�

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
		 String^abstract = "��ϵͳ���û����ļ������ڡ�ͼ����ҡ�\r\nͼ�����ͼ����ġ�������������Щģ�����\r\n"
			 "�û�ģ��ʵ�ֶ�ͼ��ݹ���ϵͳ�е��û�����\r\n"
			 "�ļ�ģ��ʵ�ֶ�ͼ��ݹݲ�ͼ�����ݿ�ĵ��롣\r\n"
			 " ����ģ������ʵ�ֺ�RFID��д��֮���ͨ��\r\n"
			 "ͼ�����ģ���Ϊͼ����ҡ����ļ��黹�Լ�\r\nͼ����Ӻ�ɾ�����û��ɸ����Լ�\r\n�����ͼ����Ϣ���в��ң�\r\n�������ض�λ�Լ�����Ҫ����Դ��ͼ����ļ�\r\n�黹ģ��ʵ���û���ͼ����ĺ͹黹�Ĳ�����\r\nͼ����Ӻ�ɾ��ģ��ʵ�ֹ���Ա���ڹݲ�ͼ��Ĳ�����";
			 
		 String^about="����İ汾�������Ȩ\r\n���������߸�����Ϣ��";
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
		TreeNode ^Node = treeView1->SelectedNode;

		if (Node == nullptr) return;
		if (Node->Text == "ϵͳ���")this->label1->Text = abstract;
		if (Node->Text == "����")this->label1->Text = about;

	}
};
}
