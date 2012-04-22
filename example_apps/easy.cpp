// Dies ist ein Kommentar. Er endet am Ende der Zeile.
/* Dies ist ein mehrzeiliger Kommentar; er kann auch innerhalb einer Zeile beginnen und enden.
 * Er endet erst, wenn folgendes Zeichenpaar auftaucht: */

// Eine Anweisung an den Compiler, eine Datei namens "iostream" einzubinden.
// ("Datei einbinden" ist etwas ungenau, wer es genau wissen will: siehe
// Standard 17.4.1.2 Headers, Fußnote 158)
// In diesem Fall ist die Datei ein Teil der C++-Standardbibilothek, mit welchem
// Ein- und Ausgabe (IO) von Text möglich ist
#include <iostream>
// Die "String"-Klassen aus der C++-Standardbibilothek
#include <string>
#include <sstream>

// Benutze den Namensraum der Standardbibilothek
using namespace std;

// Definiert eine Funktion mit dem Namen "faculty", welche
// eine ganze Zahl (int) zurück gibt, und eine weitere ganze Zahl
// als Parameter nimmt.
int faculty(int n) {
    // Lege eine neue lokale Variable mit dem Namen "result" an,
    // und setze deren Wert auf 1
    int result = 1;
    // Lege eine neue lokale Variable mit Namen "i" an, und führe
    // die Befehle zwischen den Klammern {}, bis i <= n nicht mehr
    // erfüllt ist. Nach jedem Durchlauf, erhöhe i um 1 ("i++").
    for ( int i = 1; i <= n; i++ ) {
        result = result * i;
    }
    // Lege den Rückgabewert der Funktion fest und verlasse die Funktion.
    return result;
}

// Definiere eine neue Klasse mit Namen "Contact"
class Contact {
public: // public members
    // Konstruktor: nimmt einen String als Argument
    Contact(string contactName) {
        // setze das Attribut "name" der Klasse auf den übergebenen Wert
        // äquivalent wäre "this->name = contactName", das ist aber sehr unüblich
        name = contactName;
    };
    
    // Eine Funktion, um den Kontakt hübsch formatiert auszugeben
    string toString() {
        stringstream stream;
        stream << name << " : ";
        stream << "phone " << phoneNumber << ", ";
        stream << "postal code " << postalCode;
        return stream.str();
    }
    
    string name;
    string phoneNumber;
    int postalCode;
};

// Die Hauptfunktion oder Einstiegspunkt.
// Jedes C++-Programm braucht eine Funktion mit dem Namen "main",
// wenn es in eine ausführbare Datei kompiliert werden soll. Hier wird mit der
// Ausführung des codes begonnen (abgesehen von Initialisierungen).
int main() {
    // Gibt "Hello, world" auf der Konsole aus, gefolgt von einer Leerzeile.
	// Detail: endl leert den Puffer, d.h. es wird tatsächlich angezeigt und nicht
	// (möglicherweise) noch vor der Anzeige gesammelt (gepuffert).
    cout << "Hello, world!" << endl;
    
    // Berechnet 8! und gibt das Ergebnis auf der Konsole aus.
    cout << "8! = " << faculty(8) << endl;
    
    // Erstelle ein neues Objekt vom Typ Contact auf dem Stack und speichere einen
    // Zeiger darauf in der Variable my_contact
    Contact* my_contact = new Contact("Klaus");
    my_contact->phoneNumber = "0721 748283";
    my_contact->postalCode = 76183;
    
    cout << my_contact->toString() << endl;
    
    // Der Rückgabewert des Programms: 0 bedeutet "Erfolg".
    return 0;
}
