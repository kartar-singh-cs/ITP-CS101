#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidIBAEmail(string email) {
    string domain = "@khi.iba.edu.pk";
    if (email.size() <= domain.size()) return false;
    if (email.substr(email.size() - domain.size()) != domain) return false;

    int atPos = email.find('@');
    if (atPos == string::npos) return false;
    string local = email.substr(0, atPos);

    int dotPos = local.rfind('.');
    if (dotPos == string::npos || dotPos == 0 || dotPos == local.size() - 1) return false;

    string name = local.substr(0, dotPos);
    string erp = local.substr(dotPos + 1);

    if (erp.size() != 5) return false;
    for (char c : erp)
        if (!isdigit(c)) return false;

    if (name[0] == '.' || name[name.size() - 1] == '.') return false;
    for (int i = 0; i < name.size(); i++) {
        if (!(islower(name[i]) || name[i] == '.')) return false;
        if (i > 0 && name[i] == '.' && name[i - 1] == '.') return false;
    }

    return true;
}

int main() {
    string emails[] = {
        "s.raza.32448@khi.iba.edu.pk",
        "samreen.kazi.12345@khi.iba.edu.pk",
        "s.raza32448@khi.iba.edu.pk",
        "s.raza.32448@iba.edu.pk",
        "s.Taha.29208@iba.edu.pk"
    };

    cout << "Checking IBA email validity:\n";
    for (string e : emails) {
        cout << e << " --> " << (isValidIBAEmail(e) ? "Valid" : "Invalid") << endl;
    }

    return 0;
}
