#pragma once

#include "Redistributables.h"

namespace cdromlauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Diagnostics;
	using namespace System::Windows;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartupForm
	/// </summary>
	public ref class StartupForm : public System::Windows::Forms::Form
	{
	public:
		StartupForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ exitBtn;
	private: System::Windows::Forms::Button^ minBtn;
	protected:



	private: System::Windows::Forms::Button^ launchInstaller;
	private: System::Windows::Forms::Button^ launchGossamer;
	private: System::Windows::Forms::Button^ redistributablesBtn;



	private: System::Windows::Forms::Button^ visitBtn;
	private: System::Windows::Forms::Button^ exitAltBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartupForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->minBtn = (gcnew System::Windows::Forms::Button());
			this->launchInstaller = (gcnew System::Windows::Forms::Button());
			this->launchGossamer = (gcnew System::Windows::Forms::Button());
			this->redistributablesBtn = (gcnew System::Windows::Forms::Button());
			this->visitBtn = (gcnew System::Windows::Forms::Button());
			this->exitAltBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::Transparent;
			this->exitBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitBtn->FlatAppearance->BorderSize = 0;
			this->exitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->exitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			resources->ApplyResources(this->exitBtn, L"exitBtn");
			this->exitBtn->ForeColor = System::Drawing::Color::Red;
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->TabStop = false;
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &StartupForm::exitBtn_Click);
			// 
			// minBtn
			// 
			this->minBtn->BackColor = System::Drawing::Color::Transparent;
			this->minBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minBtn->FlatAppearance->BorderSize = 0;
			this->minBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->minBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->minBtn, L"minBtn");
			this->minBtn->Name = L"minBtn";
			this->minBtn->TabStop = false;
			this->minBtn->UseVisualStyleBackColor = false;
			this->minBtn->Click += gcnew System::EventHandler(this, &StartupForm::minBtn_Click);
			// 
			// launchInstaller
			// 
			this->launchInstaller->BackColor = System::Drawing::Color::Transparent;
			this->launchInstaller->Cursor = System::Windows::Forms::Cursors::Hand;
			this->launchInstaller->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->launchInstaller->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->launchInstaller, L"launchInstaller");
			this->launchInstaller->Name = L"launchInstaller";
			this->launchInstaller->TabStop = false;
			this->launchInstaller->UseVisualStyleBackColor = false;
			this->launchInstaller->Click += gcnew System::EventHandler(this, &StartupForm::launchInstaller_Click);
			// 
			// launchGossamer
			// 
			this->launchGossamer->BackColor = System::Drawing::Color::Transparent;
			this->launchGossamer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->launchGossamer->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->launchGossamer->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->launchGossamer, L"launchGossamer");
			this->launchGossamer->Name = L"launchGossamer";
			this->launchGossamer->TabStop = false;
			this->launchGossamer->UseVisualStyleBackColor = false;
			this->launchGossamer->Click += gcnew System::EventHandler(this, &StartupForm::launchGossamer_Click);
			// 
			// redistributablesBtn
			// 
			this->redistributablesBtn->BackColor = System::Drawing::Color::Transparent;
			this->redistributablesBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->redistributablesBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->redistributablesBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->redistributablesBtn, L"redistributablesBtn");
			this->redistributablesBtn->Name = L"redistributablesBtn";
			this->redistributablesBtn->TabStop = false;
			this->redistributablesBtn->UseVisualStyleBackColor = false;
			this->redistributablesBtn->Click += gcnew System::EventHandler(this, &StartupForm::redistributablesBtn_Click);
			// 
			// visitBtn
			// 
			this->visitBtn->BackColor = System::Drawing::Color::Transparent;
			this->visitBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->visitBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->visitBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->visitBtn, L"visitBtn");
			this->visitBtn->Name = L"visitBtn";
			this->visitBtn->TabStop = false;
			this->visitBtn->UseVisualStyleBackColor = false;
			this->visitBtn->Click += gcnew System::EventHandler(this, &StartupForm::visitBtn_Click);
			// 
			// exitAltBtn
			// 
			this->exitAltBtn->BackColor = System::Drawing::Color::Transparent;
			this->exitAltBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitAltBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->exitAltBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			resources->ApplyResources(this->exitAltBtn, L"exitAltBtn");
			this->exitAltBtn->Name = L"exitAltBtn";
			this->exitAltBtn->TabStop = false;
			this->exitAltBtn->UseVisualStyleBackColor = false;
			this->exitAltBtn->Click += gcnew System::EventHandler(this, &StartupForm::exitAltBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// StartupForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->exitAltBtn);
			this->Controls->Add(this->visitBtn);
			this->Controls->Add(this->redistributablesBtn);
			this->Controls->Add(this->launchGossamer);
			this->Controls->Add(this->launchInstaller);
			this->Controls->Add(this->minBtn);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StartupForm";
			this->ShowIcon = false;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void minBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::WindowState = FormWindowState::Minimized;
	}
	private: System::Void launchInstaller_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start(Path::GetDirectoryName(Application::ExecutablePath) + "\\setup\\gossamer-0.0.0.6-prealpha-setup.exe");
	}
	private: System::Void exitAltBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void visitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("https://pjgossamer.github.io/");
	}
	private: System::Void redistributablesBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Redistributables^ redist = gcnew Redistributables();
		redist->Show();
	}
	private: System::Void launchGossamer_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start(Path::GetDirectoryName(Application::ExecutablePath) + "\\game\\pjgossamer.exe");
	}
};
}
