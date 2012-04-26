//============================================================================
// Name        : hello-world.cpp
// Author      : Robert
// Version     :
// Copyright   : � cpp-workshop
// Description : Hello World in C++
//============================================================================


#include <iostream>	// fuer cout, endl

using namespace std;


int factorial(int n)
{
	int result = 1;


	for(int i = 1; i < n; ++i)
	{
		result *= i;
	}


	return result;
}


int main()
{
	// Wir sparen uns diesmal die Kommentare zum code,
	// da beim Debuggen beobachtet werden soll,
	// was geschieht.


	//+ text auf den Standard-Output ausgeben (Konsole)
	cout << "    Textausgabe auf den Standard-Output (cout)" << endl;

		cout << "!!!Hello World!!!" << endl;

		cout << "Mehr Text " << "und ein Zeilenumbruch:" << endl
		     << "Noch mehr Text." << endl;

		cout << "Ein *anderer* Zeilenumbruch:\n";
		cout << "Geschah soeben." << endl;
	//- Textausgabe




	cout << endl << endl;




	// nicht über diese Klammer wundern (ist nur für anschaulicheres Verhalten beim Debuggen)
	{


	//+ Variablen, Arithmetik
	cout << "    Variablen, Arithmetik" << endl;

		int foo = 25;

		++foo;
		foo *= 2;
		foo = foo - 10;

		cout << "Wert von foo: " << foo << endl;


		int bar;
		cout << "Wert von bar *vor* der Zuweisung: " << bar << endl;

		bar = foo;

		cout << "Wert von bar *nach* der Zuweisung: " << bar << endl;
	//- Variablen, Arithmetik




	cout << endl << endl;




	//+ Logik, Sprünge
	cout << "    Logik, Sprünge" << endl;

		if(foo == bar)
		{
			cout << "foo == bar" << endl;
		}else
		{
			cout << "foo != bar" << endl;
		}


		// versuche mal "step over" (F6)
		factorial(4);

		// versuche mal "step into" (F5)
		factorial(3);

		cout << "Fakultaet von 5: " << factorial(5) << endl;
	//- Logik, Sprünge


	// nicht über diese Klammer wundern
	}




	cout << endl << endl;




	//+ continue, Breakpoints
	cout << "    Logik, Sprünge" << endl;

		// Mit (F8) wird die Ausführung des Programms bis zum nächsten geplanten Stopp fortgesetzt

		//+ um dies zu demonstrieren, folgen ein paar unspektakuläre Zeilen
			cout << "Don't panic!" << endl;
			cout << "brain, the size of a planet" << endl;

			for(int i = 0; i < 42; ++i)
			{
				cout << i << " is not the solution, ";
			}
			cout << "42 is the solution!" << endl;
		//- ein paar unspektakuläre Zeilen


		// hier sollte ein breakpoint gesetzt sein
		cout << "I think you ought to know I'm feeling very depressed." << endl;


		cout << "Life! Don't talk to me about life." << endl;
		cout << "25 May is Towel Day!" << endl;
	//- continue, Breakpoints




	return 0;
}
