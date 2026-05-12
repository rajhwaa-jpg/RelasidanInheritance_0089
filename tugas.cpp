#include <iostream>
#include <vector>
using namespace std;

class User {
protected:
    static int globalId;

public:
    int id;
    string nama;
    string email;

    User(string pNama, string pEmail) {
        nama = pNama;
        email = pEmail;
        id = generateId();
    }

    int generateId() {
        globalId++;
        return globalId;
    }
};

