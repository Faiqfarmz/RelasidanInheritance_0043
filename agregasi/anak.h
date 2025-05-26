#ifndef ANAK_H
#define ANAK_H

class anak {
    public :
        string nama;
        anak (string pNama) :nama(pNama) {
            cout << "Anak \"" << "\" ada \n";
        }
        ~anak() {
            cout << "Anal \"" << nama << "\" tidak ad\n"; 
        }
};
#endif