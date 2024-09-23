//  create a class Writer with pure virtual function write. Create classes Pen and Pencil inheriting writer.
// Create a standalone function writingKit with reference of Writer. Use this function to write with Pen or
// Pencil

#include <iostream>

using namespace std;

class Writer {
public:
    virtual void write() = 0; // Pure virtual function
};

class Pen : public Writer {
public:
    void write() override { 
        cout << "Writing with Pen." << endl;
    }
};

class Pencil : public Writer {
public:
    void write() override { 
        cout << "Writing with Pencil." << endl;
    }
};

void writingKit(Writer &writerObj) {
    writerObj.write(); 
}

int main() {
    Pen pen;
    Pencil pencil;
    writingKit(pen);
    writingKit(pencil);

    return 0;
}
