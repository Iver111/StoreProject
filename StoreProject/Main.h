#pragma once
#include <iostream> 
#include <string>
#include "Store.h"
#include <msclr/marshal_cppstd.h>
#include "AdminForm.h"
namespace StoreManagementApp {

    using namespace System::Collections::Generic;
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Runtime::InteropServices;

    public ref class MainForm : public Form
    {
    public:
        MainForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MainForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ passwordAdmin;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Button^ userbutton;
           Store* store; // Вказівник на об'єкт класу Store

        // UI елементи
 

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->passwordAdmin = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->userbutton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(161, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(298, 50);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Головна Магазину";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(484, 324);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(139, 47);
            this->button1->TabIndex = 1;
            this->button1->Text = L"Адміністратор";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
            // 
            // passwordAdmin
            // 
            this->passwordAdmin->Location = System::Drawing::Point(484, 300);
            this->passwordAdmin->Name = L"passwordAdmin";
            this->passwordAdmin->Size = System::Drawing::Size(139, 20);
            this->passwordAdmin->TabIndex = 2;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(532, 284);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(45, 13);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Пароль";
            // 
            // userbutton
            // 
            this->userbutton->Location = System::Drawing::Point(30, 324);
            this->userbutton->Name = L"userbutton";
            this->userbutton->Size = System::Drawing::Size(139, 47);
            this->userbutton->TabIndex = 4;
            this->userbutton->Text = L"Користувач";
            this->userbutton->UseVisualStyleBackColor = true;
            // 
            // MainForm
            // 
            this->ClientSize = System::Drawing::Size(653, 395);
            this->Controls->Add(this->userbutton);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->passwordAdmin);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label1);
            this->Name = L"MainForm";
            this->Text = L"Store Management";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        System::String^ password = passwordAdmin->Text;
        if (password == "admin") {
            AdminForm^ admin = gcnew AdminForm();
            this->Hide();
            admin->Show();
        }
    }
    };
}
