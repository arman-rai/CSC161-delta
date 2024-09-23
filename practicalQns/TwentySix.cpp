//  Create an class Classifier with a method classify(). Leave the body of classifier() blank. Create two
// classes DecisionTree and NeuralNetwork inheriting classify. These methods override the classify() to
// display “Classifying with DesicisionTree” and “Classifying with NeuralNetwork” within their respective
// class. Now, create pointer of Classifier. The pointer firstly points the object of DecisionTree and calls the
// classify() then it points to the object of NeuralNetwork and calls classify(). See the results

#include <iostream>

using namespace std;

class Classifier {
public:
    virtual void classify() {}
};

class DecisionTree : public Classifier {
public:
    void classify() override {
        cout << "Classifying with DecisionTree" << endl;
    }
};

class NeuralNetwork : public Classifier {
public:
    void classify() override { 
        cout << "Classifying with NeuralNetwork" << endl;
    }
};

int main() {
    Classifier* classifierPointer;
    DecisionTree tree;
    classifierPointer = &tree;
    classifierPointer->classify();
    NeuralNetwork network;
    classifierPointer = &network;
    classifierPointer->classify();

    return 0;
}
