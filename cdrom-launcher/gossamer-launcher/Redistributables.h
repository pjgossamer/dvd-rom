#pragma once

namespace cdromlauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Windows;
	using namespace System::Windows::Forms;
	using namespace System::IO;

	/// <summary>
	/// Summary for Redistributables
	/// </summary>
	public ref class Redistributables : public System::Windows::Forms::Form
	{
	public:
		Redistributables(void)
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
		~Redistributables()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ dotnetBtn;
	protected:
	private: System::Windows::Forms::Button^ vcredistBtn;
	private: System::Windows::Forms::Button^ ueprereqBtn;
	private: System::Windows::Forms::Button^ closeBtn;

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
			this->dotnetBtn = (gcnew System::Windows::Forms::Button());
			this->vcredistBtn = (gcnew System::Windows::Forms::Button());
			this->ueprereqBtn = (gcnew System::Windows::Forms::Button());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dotnetBtn
			// 
			this->dotnetBtn->Location = System::Drawing::Point(13, 13);
			this->dotnetBtn->Name = L"dotnetBtn";
			this->dotnetBtn->Size = System::Drawing::Size(287, 23);
			this->dotnetBtn->TabIndex = 0;
			this->dotnetBtn->Text = L"Install .&Net 4.7.2 Framework Redistributable";
			this->dotnetBtn->UseVisualStyleBackColor = true;
			this->dotnetBtn->Click += gcnew System::EventHandler(this, &Redistributables::dotnetBtn_Click);
			// 
			// vcredistBtn
			// 
			this->vcredistBtn->Location = System::Drawing::Point(13, 43);
			this->vcredistBtn->Name = L"vcredistBtn";
			this->vcredistBtn->Size = System::Drawing::Size(287, 23);
			this->vcredistBtn->TabIndex = 1;
			this->vcredistBtn->Text = L"Install &Visual C++ 2015-2019 Runtime Redistribtuable";
			this->vcredistBtn->UseVisualStyleBackColor = true;
			this->vcredistBtn->Click += gcnew System::EventHandler(this, &Redistributables::vcredistBtn_Click);
			// 
			// ueprereqBtn
			// 
			this->ueprereqBtn->Location = System::Drawing::Point(13, 73);
			this->ueprereqBtn->Name = L"ueprereqBtn";
			this->ueprereqBtn->Size = System::Drawing::Size(287, 23);
			this->ueprereqBtn->TabIndex = 2;
			this->ueprereqBtn->Text = L"Install &Unreal Engine 4.19 Prerequisites";
			this->ueprereqBtn->UseVisualStyleBackColor = true;
			this->ueprereqBtn->Click += gcnew System::EventHandler(this, &Redistributables::ueprereqBtn_Click);
			// 
			// closeBtn
			// 
			this->closeBtn->Location = System::Drawing::Point(225, 102);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(75, 23);
			this->closeBtn->TabIndex = 3;
			this->closeBtn->Text = L"&Close";
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &Redistributables::closeBtn_Click);
			// 
			// Redistributables
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 131);
			this->Controls->Add(this->closeBtn);
			this->Controls->Add(this->ueprereqBtn);
			this->Controls->Add(this->vcredistBtn);
			this->Controls->Add(this->dotnetBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Redistributables";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Redistributables - Gossamer";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dotnetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start(Path::GetDirectoryName(Application::ExecutablePath) + "\\redist\\NDP472-KB4054530-x86-x64-AllOS-ENU.EXE");
	}
	private: System::Void vcredistBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start(Path::GetDirectoryName(Application::ExecutablePath) + "\\redist\\VC_redist.x64.exe");
	}
	private: System::Void ueprereqBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start(Path::GetDirectoryName(Application::ExecutablePath) + "\\redist\\UE4PrereqSetup_x64.exe");
	}
	private: System::Void closeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
