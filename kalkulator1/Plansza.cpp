#include "Plansza.h"

using namespace System;                      //przestrze� nazw systemu
using namespace System::Windows::Forms;      //przestrze� nazw form systemu Windows

[STAThreadAttribute]                         //komunikacja z komponentami com

int main(array<String^>^ args) {

	Application::EnableVisualStyles();       //w��czamy wizualny tryb aplikacji();
	Application::SetCompatibleTextRenderingDefault(false);     //ustawiamy  
						//aplikacje www kt�re b�d� domy�lnie wy��czone(false);

	kalkulator1::Plansza forms;    //odwo�ujemy si� do naszej aplikacji :: tworzymy
										//form� Plansza 
	Application::Run(% forms);          //Uruchamiamy aplikacj�
	return 0;
}

             /*
				UWAGI do wprowadzenia
				1. Je�eli nie wy�wietlany po utworzeniu projekt okienko formularza tylko b��d lub sam
				   kod to : zamykamy Visual Studio i jeszcze raz uruchamiamy
				   je�eli nie zadzia�a to :
				   zmieniamy we w�a�ciwo�ciach konfiguracyjnych og�lnych formularza zawarto�� na tak.
				2. Nazwa projektu (PPM) W�a�ciwo�ci -> konsolidator -> system -> podsystem ustawiamy
				   na Okna (/SUBSYSTEM:WINDOWS)
				3. Nazwa projektu (PPM) W�a�ciwo�ci -> konsolidator -> zaawansowane -> punkt wej�cia ustawiamy
				   na nazw� funkcji g��wnej u nas w tym projekcie main

			 */