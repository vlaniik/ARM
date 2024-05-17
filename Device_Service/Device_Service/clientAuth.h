#pragma once
#include "clientMenu.h"
namespace DeviceService {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для clientAuth
	/// </summary>
	public ref class clientAuth : public System::Windows::Forms::Form
	{
	public:
		clientAuth(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~clientAuth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button_back1;
	private: System::Windows::Forms::Button^ input_client;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button_back1 = (gcnew System::Windows::Forms::Button());
			this->input_client = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(136, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Авторизация";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(25, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Логин:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Пароль:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(133, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 34);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(133, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 34);
			this->textBox2->TabIndex = 9;
			// 
			// button_back1
			// 
			this->button_back1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back1->Location = System::Drawing::Point(12, 199);
			this->button_back1->Name = L"button_back1";
			this->button_back1->Size = System::Drawing::Size(116, 42);
			this->button_back1->TabIndex = 11;
			this->button_back1->Text = L"Назад";
			this->button_back1->UseVisualStyleBackColor = true;
			this->button_back1->Click += gcnew System::EventHandler(this, &clientAuth::button_back1_Click);
			// 
			// input_client
			// 
			this->input_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input_client->Location = System::Drawing::Point(273, 200);
			this->input_client->Name = L"input_client";
			this->input_client->Size = System::Drawing::Size(87, 42);
			this->input_client->TabIndex = 12;
			this->input_client->Text = L"Вход";
			this->input_client->UseVisualStyleBackColor = true;
			this->input_client->Click += gcnew System::EventHandler(this, &clientAuth::input_client_Click);
			// 
			// clientAuth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 253);
			this->Controls->Add(this->input_client);
			this->Controls->Add(this->button_back1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"clientAuth";
			this->Text = L"clientAuth";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool Login_Password(String^ login, String^ password)
		{
			if (login == "client" && password == "client")
			{
				return true;
			}


			else
			{
				MessageBox::Show(this, "Вы ввели неверный пароль", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}
		}

	private: System::Void button_back1_Click(System::Object^ sender, System::EventArgs^ e) {
		clientAuth::Hide();
	}
private: System::Void input_client_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ log = textBox1->Text;
	String^ pas = textBox2->Text;

	if (Login_Password(log, pas))
	{
		clientMenu^ menu = gcnew clientMenu(); //создаем новый экземпляр
		menu->Show(); //открываем вторую форму
		clientAuth::Hide(); // скрываем первую форму;
	}
}

};
}
