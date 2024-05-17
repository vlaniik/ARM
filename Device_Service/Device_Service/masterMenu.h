#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>
#include "clientMenu.h"

namespace DeviceService {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для masterMenu
	/// </summary>
	public ref class masterMenu : public System::Windows::Forms::Form
	{
	public:
		masterMenu(void)
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
		~masterMenu()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBoxStatus;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxNumber;

	private: System::Windows::Forms::Button^ button_update;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnDevice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnService;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnPost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnCell;


	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnDevice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnService = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnCell = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_update = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
					this->ColumnClient, this->ColumnDevice, this->ColumnService, this->ColumnPost, this->ColumnPrice, this->ColumnCell
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
			this->dataGridView1->Location = System::Drawing::Point(12, 224);
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
			this->dataGridView1->Size = System::Drawing::Size(1071, 249);
			this->dataGridView1->TabIndex = 0;
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
			// ColumnCell
			// 
			this->ColumnCell->HeaderText = L"Номер заявки";
			this->ColumnCell->MinimumWidth = 6;
			this->ColumnCell->Name = L"ColumnCell";
			this->ColumnCell->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Список заявок";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxNumber);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBoxStatus);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(527, 171);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Заявки";
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->Location = System::Drawing::Point(124, 32);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(338, 24);
			this->textBoxNumber->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(361, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 29);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &masterMenu::button1_Click);
			// 
			// comboBoxStatus
			// 
			this->comboBoxStatus->FormattingEnabled = true;
			this->comboBoxStatus->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Ремонт невозможен", L"На подтверждении",
					L"Заполните ячейку", L"Можно забирать"
			});
			this->comboBoxStatus->Location = System::Drawing::Point(124, 70);
			this->comboBoxStatus->Name = L"comboBoxStatus";
			this->comboBoxStatus->Size = System::Drawing::Size(338, 26);
			this->comboBoxStatus->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Статус заявки:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Номер заявки";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 0;
			// 
			// button_update
			// 
			this->button_update->Location = System::Drawing::Point(950, 186);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(133, 23);
			this->button_update->TabIndex = 3;
			this->button_update->Text = L"Обновить заявки";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &masterMenu::button_update_Click);
			// 
			// masterMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 539);
			this->Controls->Add(this->button_update);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"masterMenu";
			this->Text = L"masterMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void LoadFileToDataGridView(System::Windows::Forms::DataGridView^ dataGridView, System::String^ filename) {
			std::ifstream file(msclr::interop::marshal_as<std::string>(filename));

			if (file.is_open()) {
				std::string line;
				while (std::getline(file, line)) {
					std::istringstream iss(line);
					std::string cellData;
					int row = dataGridView->RowCount++;
					int col = 0;

					while (std::getline(iss, cellData, '\t')) {
						if (col >= dataGridView->ColumnCount) {
							dataGridView->Columns->Add("Column" + col, "Column" + col);
						}

						dataGridView->Rows[row]->Cells[col]->Value = gcnew System::String(cellData.c_str());
						col++;
					}
				}

				file.close();
			}
			else {
				// Обработка ошибки открытия файла
			}
		}

		void ClearAndWriteDataToFile(DataGridView^ dataGridView)
		{
			// Очистка содержимого файла и запись новых данных
			System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("data.txt");

			for (int row = 0; row < dataGridView->RowCount; row++)
			{
				for (int column = 0; column < dataGridView->ColumnCount; column++)
				{
					if (dataGridView->Rows[row]->Cells[column]->Value != nullptr)
					{
						file->Write(dataGridView->Rows[row]->Cells[column]->Value->ToString() + "\t");
					}
					else
					{
						file->Write("\t"); // Если значение пустое, записываем пустую строку
					}
				}
				file->WriteLine();
			}

			file->Close();
		}


	private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadFileToDataGridView(dataGridView1, "data.txt");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем значение из textBoxNumber
		int targetValue = System::Convert::ToInt32(textBoxNumber->Text);

		// Перебираем все строки и столбцы
		for (int row = 0; row < dataGridView1->Rows->Count; row++)
		{
			for (int column = 0; column < dataGridView1->Columns->Count; column++)
			{
				// Получаем значение ячейки
				Object^ cellValue = dataGridView1->Rows[row]->Cells[column]->Value;

				if (cellValue != nullptr && cellValue->ToString() == targetValue.ToString())
				{

					// Получаем выбранное значение из comboBoxStatus
					String^ selectedStatus = comboBoxStatus->SelectedItem->ToString();

					// Находим индекс столбца по его названию
					int columnIndex = -1;
					for (int i = 0; i < dataGridView1->Columns->Count; i++)
					{
						if (dataGridView1->Columns[i]->HeaderText == "Статус заявки")
						{
							columnIndex = i;
							break;
						}
					}

					if (columnIndex != -1)
					{
						// Меняем значение в найденной ячейке
						dataGridView1->Rows[row]->Cells[columnIndex]->Value = selectedStatus;
					}

				}
			}
		}
		ClearAndWriteDataToFile(dataGridView1);


	}

	};
}
