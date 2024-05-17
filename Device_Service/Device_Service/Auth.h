#pragma once
#include "masterAuth.h"
#include "clientAuth.h"
namespace DeviceService {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Auth
	/// </summary>
	public ref class Auth : public System::Windows::Forms::Form
	{
	public:
		Auth(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button_mst;
	private: System::Windows::Forms::Button^ button_clt;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_mst = (gcnew System::Windows::Forms::Button());
			this->button_clt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(100, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�������� ���� ����";
			// 
			// button_mst
			// 
			this->button_mst->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mst->Location = System::Drawing::Point(27, 79);
			this->button_mst->Name = L"button_mst";
			this->button_mst->Size = System::Drawing::Size(150, 46);
			this->button_mst->TabIndex = 2;
			this->button_mst->Text = L"������";
			this->button_mst->UseVisualStyleBackColor = true;
			this->button_mst->Click += gcnew System::EventHandler(this, &Auth::button_mst_Click);
			// 
			// button_clt
			// 
			this->button_clt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_clt->Location = System::Drawing::Point(256, 78);
			this->button_clt->Name = L"button_clt";
			this->button_clt->Size = System::Drawing::Size(160, 47);
			this->button_clt->TabIndex = 3;
			this->button_clt->Text = L"������";
			this->button_clt->UseVisualStyleBackColor = true;
			this->button_clt->Click += gcnew System::EventHandler(this, &Auth::button_clt_Click);
			// 
			// Auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 180);
			this->Controls->Add(this->button_clt);
			this->Controls->Add(this->button_mst);
			this->Controls->Add(this->label1);
			this->Name = L"Auth";
			this->Text = L"������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void Auth_Load(System::Object^ sender, System::EventArgs^ e) {
	}*/
	private: System::Void button_mst_Click(System::Object^ sender, System::EventArgs^ e) {
		masterAuth^ reg = gcnew masterAuth();// ������� ����� ���������
		reg->Show(); // ��������� ������ �����
		//Auth::Hide();

	}
	private: System::Void button_clt_Click(System::Object^ sender, System::EventArgs^ e) {
		
		clientAuth^ reg = gcnew clientAuth();// ������� ����� ���������
		reg->Show(); // ��������� ������ �����
		//Auth::Hide();
	}
};
}
