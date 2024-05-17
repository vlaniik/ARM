#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>


namespace DeviceService {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для clientMenu
	/// </summary>
	public ref class clientMenu : public System::Windows::Forms::Form
	{
	public:

		clientMenu(void)
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
		~clientMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBoxTypeDevice;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxTypeService;
	private: System::Windows::Forms::ComboBox^ comboBoxAddress;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ price;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDevice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnService;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnPost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnСell;
	private: System::Windows::Forms::Button^ button1;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->price = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxAddress = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTypeService = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxTypeDevice = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDevice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnService = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnСell = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonAdd);
			this->groupBox1->Controls->Add(this->price);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBoxAddress);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBoxTypeService);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBoxTypeDevice);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(10, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(609, 188);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Оставить заявку";
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(374, 128);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(158, 43);
			this->buttonAdd->TabIndex = 8;
			this->buttonAdd->Text = L"Добавить заявку";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &clientMenu::buttonAdd_Click);
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->price->Location = System::Drawing::Point(93, 119);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(26, 29);
			this->price->TabIndex = 7;
			this->price->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Цена:";
			// 
			// comboBoxAddress
			// 
			this->comboBoxAddress->FormattingEnabled = true;
			this->comboBoxAddress->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"г.Пермь, ул.Автозаводская, д.30 (круглосуточно)",
					L"г.Пермь, ул.Ласьвинская, д.19 (круглосуточно)", L"г.Пермь, ул.Ленина, д.64 (круглосуточно)", L"г.Пермь, ул.Малкова, д.13б (круглосуточно)",
					L"г.Пермь, ул.Екатерининская, д.44 (круглосуточно)"
			});
			this->comboBoxAddress->Location = System::Drawing::Point(132, 80);
			this->comboBoxAddress->Name = L"comboBoxAddress";
			this->comboBoxAddress->Size = System::Drawing::Size(400, 24);
			this->comboBoxAddress->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Постамат:";
			// 
			// comboBoxTypeService
			// 
			this->comboBoxTypeService->FormattingEnabled = true;
			this->comboBoxTypeService->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Диагностика", L"Замена аккумулятора",
					L"Чистка от пыли", L"Замена экрана", L"Ремонт/восстановление разъема питания"
			});
			this->comboBoxTypeService->Location = System::Drawing::Point(132, 51);
			this->comboBoxTypeService->Name = L"comboBoxTypeService";
			this->comboBoxTypeService->Size = System::Drawing::Size(400, 24);
			this->comboBoxTypeService->TabIndex = 3;
			this->comboBoxTypeService->SelectedIndexChanged += gcnew System::EventHandler(this, &clientMenu::comboBoxTypeService_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Услуга:";
			// 
			// comboBoxTypeDevice
			// 
			this->comboBoxTypeDevice->FormattingEnabled = true;
			this->comboBoxTypeDevice->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Телефон", L"Планшет", L"Ноутбук" });
			this->comboBoxTypeDevice->Location = System::Drawing::Point(132, 21);
			this->comboBoxTypeDevice->Name = L"comboBoxTypeDevice";
			this->comboBoxTypeDevice->Size = System::Drawing::Size(400, 24);
			this->comboBoxTypeDevice->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Тип устроуства:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ColumnStatus,
					this->ColumnClient, this->ColumnDevice, this->ColumnService, this->ColumnPost, this->ColumnPrice, this->ColumnСell
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(6, 43);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1015, 249);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &clientMenu::dataGridView1_CellContentClick);
			// 
			// ColumnStatus
			// 
			this->ColumnStatus->HeaderText = L"Статус заявки";
			this->ColumnStatus->MinimumWidth = 6;
			this->ColumnStatus->Name = L"ColumnStatus";
			this->ColumnStatus->Width = 125;
			// 
			// ColumnClient
			// 
			this->ColumnClient->HeaderText = L"Клиент";
			this->ColumnClient->MinimumWidth = 6;
			this->ColumnClient->Name = L"ColumnClient";
			this->ColumnClient->Width = 125;
			// 
			// ColumnDevice
			// 
			this->ColumnDevice->HeaderText = L"Устройство";
			this->ColumnDevice->MinimumWidth = 6;
			this->ColumnDevice->Name = L"ColumnDevice";
			this->ColumnDevice->Width = 125;
			// 
			// ColumnService
			// 
			this->ColumnService->HeaderText = L"Услуга";
			this->ColumnService->MinimumWidth = 6;
			this->ColumnService->Name = L"ColumnService";
			this->ColumnService->Width = 125;
			// 
			// ColumnPost
			// 
			this->ColumnPost->HeaderText = L"Постамат";
			this->ColumnPost->MinimumWidth = 6;
			this->ColumnPost->Name = L"ColumnPost";
			this->ColumnPost->Width = 125;
			// 
			// ColumnPrice
			// 
			this->ColumnPrice->HeaderText = L"Цена";
			this->ColumnPrice->MinimumWidth = 6;
			this->ColumnPrice->Name = L"ColumnPrice";
			this->ColumnPrice->Width = 125;
			// 
			// ColumnСell
			// 
			this->ColumnСell->HeaderText = L"Номер заявки";
			this->ColumnСell->MinimumWidth = 6;
			this->ColumnСell->Name = L"ColumnСell";
			this->ColumnСell->Width = 125;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(10, 205);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1021, 292);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Список заявок";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(834, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &clientMenu::button1_Click);
			// 
			// clientMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1352, 555);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"clientMenu";
			this->Text = L"clientMenu";
			this->Load += gcnew System::EventHandler(this, &clientMenu::clientMenu_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void comboBoxTypeService_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (comboBoxTypeDevice->Text == "Телефон")
		{
			if (comboBoxTypeService->Text == "Диагностика")
			{
				price->Text = "700 руб";
			}

			if (comboBoxTypeService->Text == "Замена аккумулятора")
			{
				price->Text = "3 000 руб";
			}

			if (comboBoxTypeService->Text == "Чистка от пыли")
			{
				price->Text = "1 200 руб";
			}

			if (comboBoxTypeService->Text == "Замена экрана")
			{
				price->Text = "4 000 руб";
			}

			if (comboBoxTypeService->Text == "Ремонт/восстановление разъема питания")
			{
				price->Text = "2 800 руб";
			}
		}

		if (comboBoxTypeDevice->Text == "Планшет")
		{
			if (comboBoxTypeService->Text == "Диагностика")
			{
				price->Text = "1 100 руб";
			}

			if (comboBoxTypeService->Text == "Замена аккумулятора")
			{
				price->Text = "3 800 руб";
			}

			if (comboBoxTypeService->Text == "Чистка от пыли")
			{
				price->Text = "1 900 руб";
			}

			if (comboBoxTypeService->Text == "Замена экрана")
			{
				price->Text = "4 999 руб";
			}

			if (comboBoxTypeService->Text == "Ремонт/восстановление разъема питания")
			{
				price->Text = "3 800 руб";
			}
		}

		if (comboBoxTypeDevice->Text == "Ноутбук")
		{
			if (comboBoxTypeService->Text == "Диагностика")
			{
				price->Text = "1 700 руб";
			}

			if (comboBoxTypeService->Text == "Замена аккумулятора")
			{
				price->Text = "5 000 руб";
			}

			if (comboBoxTypeService->Text == "Чистка от пыли")
			{
				price->Text = "3 200 руб";
			}

			if (comboBoxTypeService->Text == "Замена экрана")
			{
				price->Text = "8 000 руб";
			}

			if (comboBoxTypeService->Text == "Ремонт/восстановление разъема питания")
			{
				price->Text = "4 800 руб";
			}
		}


	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{


	}
	public: int i = 0;
		  void SaveDataGridViewToFile(System::Windows::Forms::DataGridView^ dataGridView, System::String^ filename) {
			  std::ofstream file(msclr::interop::marshal_as<std::string>(filename));

			  if (file.is_open()) {
				  for (int i = 0; i < dataGridView->RowCount; i++) {
					  for (int j = 0; j < dataGridView->ColumnCount; j++) {
						  file << msclr::interop::marshal_as<std::string>(dataGridView->Rows[i]->Cells[j]->Value->ToString()) << "\t";
					  }
					  file << "\n";
				  }

				  file.close();
			  }
			  else {
				  // Обработка ошибки открытия файла
			  }
		  }


		  void ReadDataFromFileAndLoadToGridView(DataGridView^ dataGridView)
		  {
			  // Чтение данных из файла
			  System::IO::StreamReader^ file = gcnew System::IO::StreamReader("data.txt");

			  String^ line;
			  int row = 0;
			  while ((line = file->ReadLine()) != nullptr)
			  {
				  array<String^>^ columns = line->Split('\t');
				  dataGridView->Rows->Add(); // Добавляем новую строку

				  for (int i = 0; i < columns->Length && i < dataGridView->Columns->Count; i++)
				  {
					  dataGridView->Rows[row]->Cells[i]->Value = columns[i];
				  }

				  row++;
			  }

			  file->Close();
		  }



	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		i = i + 1;
		dataGridView1->Rows->Add("Новая", "Текущий", comboBoxTypeDevice->Text, comboBoxTypeService->Text, comboBoxAddress->Text, price->Text, i);
		SaveDataGridViewToFile(dataGridView1, "data.txt");


	}
	private: System::Void clientMenu_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ReadDataFromFileAndLoadToGridView(dataGridView1);
	}
	};
}
