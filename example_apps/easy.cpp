// Dies ist ein Kommentar. Er endet am Ende der Zeile.
/* Dies ist ein mehrzeiliger Kommentar; er kann auch innerhalb einer Zeile beginnen und enden.
 * Er endet erst, wenn folgendes Zeichenpaar auftaucht: */

// Eine Anweisung an den Compiler, eine Datei namens "iostream" einzubinden;
// in diesem Fall ist das ein Teil der C++-Standardbibilothek, mit welchem
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
    // Rückgabewert der Funktion.
    return result;
}

// Definiere eine neue Klasse mit Namen "Contact"
class Contact {
public: // öffentliche Attribute
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

// Das Hauptprogramm. Jedes C++-Programm braucht eine Funktion mit dem Namen "main",
// wenn es in eine ausführbare Datei kompiliert werden soll.
int main() {
    // Gibt "Hello, world" auf der Konsole aus, gefolgt von einer Leerzeile.
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
