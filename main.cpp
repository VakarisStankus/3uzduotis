#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int o=0; // Prietaisu skaicius
    string a; // Prietaisu pavadinimo ivedimas

    cout << "Irasykite kiek prietaisu norite prideti ?" << endl;
    cin >> o;
    string Prietaisai[o]; // Prietaisai
    string Priedai[5]; // Sujungimai su prietaisais
    string Statusas[o]; // Prietaisu statusas
    for (int i = 0; i < o; i++) {
cout << "Irasykite prietaiso pavadinima: " << endl;
cin >> a;
        Statusas[i] = "Isjungta";
        Prietaisai[i] = a;
    }
    int n=1;
    while (n != 0)
    {
        cout << "" << endl;
        cout << "Meniu:" << endl;
        cout << "1. Ijungti / Isjungti prietaisus." << endl;
        cout << "2. Parodyti prietaisu statusa." << endl;
        cout << "3. Sukurti prieda prie prietaiso." << endl;
        cout << "4. Paziureti prietaisu priedus." << endl;
        cout << "0. Iseiti" << endl;
        cin >> n;
        switch (n) {
            case 1:{
                cout << "pasirinkite kuri prietaisa norite ijungti arba isjungti ?" << endl;
                for (int i = 0; i < o; i++) {
                    cout << i << ". " << Prietaisai[i] << endl;
                }
                int u;
                cin >> u;
                if (Statusas[u] == "Isjungta")
                    Statusas[u] = "Ijungta";
                else Statusas[u] = "Isjungta";
                break;}

            case 2:{
                for (int i = 0; i < o; i++) {
                    cout << Prietaisai[i] << " = " << Statusas[i] << endl;
                }
                break;
            case 0:
                n = 0;
                break;}

            default:{

                cout << "Tokio pasirinkimo nera !" << endl;
                break; }
            case 3:{

                cout << "Pasirinkite prie kurio prietaiso norite sujungti prieda" << endl;
                int b;
                for (int i = 0; i < o; i++) {
                    cout << i << ". " << Prietaisai[i] << endl;
                }
                cin >> b;
                cout << "Irasykite priedo pavadinima: " << endl;
                string pavadinimas;
                cin >> pavadinimas;
                string tarpas = " ";
                if (Priedai[b].empty() == 1) {
                    Priedai[b] = pavadinimas;
                } else {
                    Priedai[b].append(tarpas);
                    Priedai[b].append(pavadinimas);
                }
                break;
        }
            case 4: {
                cout << "Pasirinkite Kurio prietaiso priedus norite pamatyti ?" << endl;
                int c;
                for (int i = 0; i < o; i++) {
                    cout << i << ". " << Prietaisai[i] << endl;
                }
                cin >> c;
                cout << Prietaisai[c] << " priedai yra: " << Priedai[c];
                break;
            }
            }
            }

return 0;
}

