#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include "../Postfixlib/Postfix.h"
#include "../TStacklib/TStack.h"
namespace VisualPostfix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для VPostfix
	/// </summary>
	public ref class VPostfix : public System::Windows::Forms::Form
	{
	public:
		VPostfix(void)
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
		~VPostfix()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ HintLabel;
	private: System::Windows::Forms::TextBox^ Input;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ AnswerLabel;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	protected:

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
			System::Windows::Forms::ListViewItem^ listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"Sin(R) = sR" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)))));
			System::Windows::Forms::ListViewItem^ listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"Cos(R) = cR" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)))));
			System::Windows::Forms::ListViewItem^ listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"lg(x) = LR" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"Miriam CLM", 12, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(177)))));
			this->HintLabel = (gcnew System::Windows::Forms::Label());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AnswerLabel = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// HintLabel
			// 
			this->HintLabel->AutoSize = true;
			this->HintLabel->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->HintLabel->Location = System::Drawing::Point(37, 24);
			this->HintLabel->Name = L"HintLabel";
			this->HintLabel->Size = System::Drawing::Size(179, 25);
			this->HintLabel->TabIndex = 0;
			this->HintLabel->Text = L"Введите пример";
			// 
			// Input
			// 
			this->Input->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->Input->Location = System::Drawing::Point(42, 52);
			this->Input->MaximumSize = System::Drawing::Size(400, 400);
			this->Input->Multiline = true;
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(289, 30);
			this->Input->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(337, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"=";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VPostfix::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label1->Location = System::Drawing::Point(37, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ответ:";
			// 
			// AnswerLabel
			// 
			this->AnswerLabel->AutoSize = true;
			this->AnswerLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AnswerLabel->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->AnswerLabel->Location = System::Drawing::Point(115, 151);
			this->AnswerLabel->Name = L"AnswerLabel";
			this->AnswerLabel->Size = System::Drawing::Size(2, 27);
			this->AnswerLabel->TabIndex = 4;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader1 });
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {
				listViewItem7, listViewItem8,
					listViewItem9
			});
			this->listView1->Location = System::Drawing::Point(39, 184);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(341, 64);
			this->listView1->TabIndex = 5;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::List;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Width = 100;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label2->Location = System::Drawing::Point(42, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(2, 27);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label3->Location = System::Drawing::Point(37, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Постфиксная форма:";
			// 
			// VPostfix
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 308);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->AnswerLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->HintLabel);
			this->Name = L"VPostfix";
			this->Text = L"VPostfix";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string s = msclr::interop::marshal_as<std::string>(Input->Text);
		
		TPostfixCalc c(s);
		c.Build();
		String^ postf = gcnew String(c.GetPolish().c_str());
		AnswerLabel->Text = Convert::ToString(c.GetSol());
		label2->Text = postf;
	}
};
}
