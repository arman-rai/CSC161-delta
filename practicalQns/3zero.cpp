// Write a program showing the example of composition.

class Engine {
public:
    void start() {
    }
};

class Car {
public:
    Car() : engine(new Engine()) {}
    void startCar() {
        engine->start();
    }
private:
    Engine* engine;
};

int main() {
    Car car;
    car.startCar();
    return 0;
}