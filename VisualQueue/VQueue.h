#pragma once
#include "..\TQueuelib\TQueue.h"

namespace VisualQueue {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	TQueue<int> queue;
	int maxSize = 0;
	int size = 0;
	int initialSize = 0;
	double addChance = 0;
	double remChance = 0;
	int pushed = 0;
	int poped = 0;
	int tickSpeed = 0;

	/// <summary>
	/// —водка дл€ VQueue
	/// </summary>
	public ref class VQueue : public System::Windows::Forms::Form
	{
	private:
		
	public:
		VQueue(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~VQueue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Random^ rand;
	public: Graphics^ gr;
	public: Rectangle rect;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ QAddChanceTrackBar;


	private: System::Windows::Forms::TextBox^ QSizeBox;
	private: System::Windows::Forms::TextBox^ QAmountBox;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TrackBar^ QRemChanceTrackBar;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ QFreqBox;
	private: System::Windows::Forms::Button^ StartButton;

	private: System::Windows::Forms::Button^ StopButton;

	private: System::Windows::Forms::Label^ ErrorLabelSize;
	private: System::Windows::Forms::Label^ ErrorLabelAmount;


	private: System::Windows::Forms::Label^ ErrorLabelFreq;	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ RemDoubleLabel;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Label^ AddDoubleLabel;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ CurSizeLabel;
	private: System::Windows::Forms::Label^ PushedLabel;
	private: System::Windows::Forms::Label^ PopedLabel;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->QAddChanceTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->QSizeBox = (gcnew System::Windows::Forms::TextBox());
			this->QAmountBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->QRemChanceTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->QFreqBox = (gcnew System::Windows::Forms::TextBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			this->ErrorLabelSize = (gcnew System::Windows::Forms::Label());
			this->ErrorLabelAmount = (gcnew System::Windows::Forms::Label());
			this->ErrorLabelFreq = (gcnew System::Windows::Forms::Label());
			this->RemDoubleLabel = (gcnew System::Windows::Forms::Label());
			this->AddDoubleLabel = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CurSizeLabel = (gcnew System::Windows::Forms::Label());
			this->PushedLabel = (gcnew System::Windows::Forms::Label());
			this->PopedLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QAddChanceTrackBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QRemChanceTrackBar))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &VQueue::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Queue size: ";
			// 
			// QAddChanceTrackBar
			// 
			this->QAddChanceTrackBar->Location = System::Drawing::Point(151, 69);
			this->QAddChanceTrackBar->Maximum = 100;
			this->QAddChanceTrackBar->Name = L"QAddChanceTrackBar";
			this->QAddChanceTrackBar->Size = System::Drawing::Size(111, 45);
			this->QAddChanceTrackBar->TabIndex = 1;
			this->QAddChanceTrackBar->Scroll += gcnew System::EventHandler(this, &VQueue::QAddChanceTrackBar_Scroll);
			// 
			// QSizeBox
			// 
			this->QSizeBox->Location = System::Drawing::Point(155, 17);
			this->QSizeBox->Name = L"QSizeBox";
			this->QSizeBox->Size = System::Drawing::Size(100, 20);
			this->QSizeBox->TabIndex = 2;
			// 
			// QAmountBox
			// 
			this->QAmountBox->Location = System::Drawing::Point(155, 43);
			this->QAmountBox->Name = L"QAmountBox";
			this->QAmountBox->Size = System::Drawing::Size(100, 20);
			this->QAmountBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Initial amount of elements:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Add chance: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Remove chance: ";
			// 
			// QRemChanceTrackBar
			// 
			this->QRemChanceTrackBar->Location = System::Drawing::Point(151, 107);
			this->QRemChanceTrackBar->Maximum = 100;
			this->QRemChanceTrackBar->Name = L"QRemChanceTrackBar";
			this->QRemChanceTrackBar->Size = System::Drawing::Size(111, 45);
			this->QRemChanceTrackBar->TabIndex = 8;
			this->QRemChanceTrackBar->Scroll += gcnew System::EventHandler(this, &VQueue::QRemChanceTrackBar_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(111, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Speed:";
			// 
			// QFreqBox
			// 
			this->QFreqBox->Location = System::Drawing::Point(155, 148);
			this->QFreqBox->Name = L"QFreqBox";
			this->QFreqBox->Size = System::Drawing::Size(100, 20);
			this->QFreqBox->TabIndex = 10;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(86, 191);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 11;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &VQueue::StartButton_Click);
			// 
			// StopButton
			// 
			this->StopButton->Enabled = false;
			this->StopButton->Location = System::Drawing::Point(200, 191);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(75, 23);
			this->StopButton->TabIndex = 12;
			this->StopButton->Text = L"Stop";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &VQueue::StopButton_Click);
			// 
			// ErrorLabelSize
			// 
			this->ErrorLabelSize->AutoSize = true;
			this->ErrorLabelSize->ForeColor = System::Drawing::Color::Brown;
			this->ErrorLabelSize->Location = System::Drawing::Point(271, 20);
			this->ErrorLabelSize->Name = L"ErrorLabelSize";
			this->ErrorLabelSize->Size = System::Drawing::Size(53, 13);
			this->ErrorLabelSize->TabIndex = 13;
			this->ErrorLabelSize->Text = L"InputError";
			this->ErrorLabelSize->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ErrorLabelSize->Visible = false;
			// 
			// ErrorLabelAmount
			// 
			this->ErrorLabelAmount->AutoSize = true;
			this->ErrorLabelAmount->ForeColor = System::Drawing::Color::Brown;
			this->ErrorLabelAmount->Location = System::Drawing::Point(271, 46);
			this->ErrorLabelAmount->Name = L"ErrorLabelAmount";
			this->ErrorLabelAmount->Size = System::Drawing::Size(53, 13);
			this->ErrorLabelAmount->TabIndex = 14;
			this->ErrorLabelAmount->Text = L"InputError";
			this->ErrorLabelAmount->Visible = false;
			// 
			// ErrorLabelFreq
			// 
			this->ErrorLabelFreq->AutoSize = true;
			this->ErrorLabelFreq->ForeColor = System::Drawing::Color::Brown;
			this->ErrorLabelFreq->Location = System::Drawing::Point(271, 151);
			this->ErrorLabelFreq->Name = L"ErrorLabelFreq";
			this->ErrorLabelFreq->Size = System::Drawing::Size(53, 13);
			this->ErrorLabelFreq->TabIndex = 17;
			this->ErrorLabelFreq->Text = L"InputError";
			this->ErrorLabelFreq->Visible = false;
			// 
			// RemDoubleLabel
			// 
			this->RemDoubleLabel->AutoSize = true;
			this->RemDoubleLabel->Location = System::Drawing::Point(278, 114);
			this->RemDoubleLabel->Name = L"RemDoubleLabel";
			this->RemDoubleLabel->Size = System::Drawing::Size(28, 13);
			this->RemDoubleLabel->TabIndex = 1;
			this->RemDoubleLabel->Text = L"0.00";
			// 
			// AddDoubleLabel
			// 
			this->AddDoubleLabel->AutoSize = true;
			this->AddDoubleLabel->Location = System::Drawing::Point(278, 83);
			this->AddDoubleLabel->Name = L"AddDoubleLabel";
			this->AddDoubleLabel->Size = System::Drawing::Size(28, 13);
			this->AddDoubleLabel->TabIndex = 0;
			this->AddDoubleLabel->Text = L"0.00";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(30, 250);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(330, 250);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(330, 550);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Visible = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(30, 550);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(130, 383);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Poped:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(130, 410);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Pushed: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(130, 355);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Current size:";
			// 
			// CurSizeLabel
			// 
			this->CurSizeLabel->AutoSize = true;
			this->CurSizeLabel->Location = System::Drawing::Point(211, 355);
			this->CurSizeLabel->Name = L"CurSizeLabel";
			this->CurSizeLabel->Size = System::Drawing::Size(13, 13);
			this->CurSizeLabel->TabIndex = 27;
			this->CurSizeLabel->Text = L"0";
			// 
			// PushedLabel
			// 
			this->PushedLabel->AutoSize = true;
			this->PushedLabel->Location = System::Drawing::Point(211, 410);
			this->PushedLabel->Name = L"PushedLabel";
			this->PushedLabel->Size = System::Drawing::Size(13, 13);
			this->PushedLabel->TabIndex = 26;
			this->PushedLabel->Text = L"0";
			// 
			// PopedLabel
			// 
			this->PopedLabel->AutoSize = true;
			this->PopedLabel->Location = System::Drawing::Point(211, 383);
			this->PopedLabel->Name = L"PopedLabel";
			this->PopedLabel->Size = System::Drawing::Size(13, 13);
			this->PopedLabel->TabIndex = 25;
			this->PopedLabel->Text = L"0";
			// 
			// VQueue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 578);
			this->Controls->Add(this->CurSizeLabel);
			this->Controls->Add(this->PushedLabel);
			this->Controls->Add(this->PopedLabel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->RemDoubleLabel);
			this->Controls->Add(this->AddDoubleLabel);
			this->Controls->Add(this->ErrorLabelFreq);
			this->Controls->Add(this->ErrorLabelAmount);
			this->Controls->Add(this->ErrorLabelSize);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->QFreqBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->QRemChanceTrackBar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->QAmountBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->QSizeBox);
			this->Controls->Add(this->QAddChanceTrackBar);
			this->Controls->Add(this->label1);
			this->Name = L"VQueue";
			this->Text = L"VQueue";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &VQueue::VQueue_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QAddChanceTrackBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->QRemChanceTrackBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (addChance > rand->NextDouble() && !queue.IsFull()) {
			queue.Push(1);
			PopedLabel->Text = Convert::ToString(Convert::ToInt32(PopedLabel->Text) + 1);
			CurSizeLabel->Text = Convert::ToString(Convert::ToInt32(CurSizeLabel->Text) + 1);
			
		}
		if (remChance > rand->NextDouble() && !queue.IsEmpty()) {
			queue.Pop();
			PushedLabel->Text = Convert::ToString(Convert::ToInt32(PushedLabel->Text) + 1);
			CurSizeLabel->Text = Convert::ToString(Convert::ToInt32(CurSizeLabel->Text) - 1);
		}
		DrawQ();
	}
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ErrorLabelAmount->Visible = false;
		ErrorLabelSize->Visible = false;
		ErrorLabelFreq->Visible = false;
		try {
			rand = gcnew Random();
			tickSpeed = Convert::ToInt32(QFreqBox->Text);
			
			maxSize = Convert::ToInt32(QSizeBox->Text);
			initialSize = Convert::ToInt32(QAmountBox->Text);
			
			addChance = QAddChanceTrackBar->Value / 100.0;
			remChance = QRemChanceTrackBar->Value / 100.0;
			queue = TQueue<int>(maxSize);
			for (size_t i = 0; i < initialSize; i++)
			{
				queue.Push(0);
			}
			StartButton->Text = "Start";
			StartButton->Enabled = false;
			CurSizeLabel->Text = Convert::ToString(initialSize);
			DrawQ();
			timer1->Interval = tickSpeed;
			timer1->Enabled = true;
			StopButton->Enabled = true;
		}
		catch (...){
			Int32 i;
			if (maxSize.GetTypeCode() != i.GetTypeCode()) ErrorLabelSize->Visible = true;
			if (initialSize.GetTypeCode() != i.GetTypeCode()) ErrorLabelAmount->Visible = true;   
			if (tickSpeed.GetTypeCode() != i.GetTypeCode()) ErrorLabelFreq->Visible = true;
			if (maxSize <= 0) ErrorLabelSize->Visible = true;
			if (initialSize < 0) ErrorLabelAmount->Visible = true;
			if (initialSize > maxSize) ErrorLabelAmount->Visible = true;
			if (tickSpeed <= 0) ErrorLabelFreq->Visible = true;
		}

	}
		   void DrawQ() {
			   ErrorLabelAmount->Visible = false;
			   ErrorLabelSize->Visible = false;
			   ErrorLabelFreq->Visible = false;

			   float startAngle = 360 * ((float)queue.TopIndex() / (float)maxSize);
			   float finishAngle = 360 * ((float)queue.GetSize() / (float)maxSize);

			   Pen^ whitePen = gcnew Pen(Color::Silver);
			   whitePen->Width = 17.0f;
			   gr->DrawEllipse(whitePen, rect);

			   Pen^ blackPen = gcnew Pen(Color::Black);
			   blackPen->Width = 15.0f;
			   rect = Rectangle(30.0, 250.0, 300.0, 300.0);
			   gr->DrawArc(blackPen, rect, startAngle, finishAngle);
		   }
private: System::Void StopButton_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	StartButton->Enabled = true;
	StartButton->Text = "Restart";
	StopButton->Enabled = false;
}
private: System::Void VQueue_Load(System::Object^ sender, System::EventArgs^ e) {
	gr = this->CreateGraphics();
	tickSpeed = 0;
	maxSize = 0;
	size = 0;
	initialSize = 0;
	addChance = 0;
	remChance = 0;
	Pen^ whitePen = gcnew Pen(Color::Silver);
	whitePen->Width = 17.0f;
	gr->DrawEllipse(whitePen, rect);
}
private: System::Void QAddChanceTrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
	AddDoubleLabel->Text = Convert::ToString(QAddChanceTrackBar->Value / 100.0);
}
private: System::Void QRemChanceTrackBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
	RemDoubleLabel->Text = Convert::ToString(QRemChanceTrackBar->Value / 100.0);
}
};
}
