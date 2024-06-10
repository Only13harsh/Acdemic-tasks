#include <iostream>
#include <thread>
#include <chrono>

enum class LightState {
    RED,
    YELLOW,
    GREEN
};

void printLightState(LightState state) {
    switch(state) {
        case LightState::RED:
            std::cout << "RED\n";
            break;
        case LightState::YELLOW:
            std::cout << "YELLOW\n";
            break;
        case LightState::GREEN:
            std::cout << "GREEN\n";
            break;
    }
}

int main() {
    LightState trafficLight1 = LightState::GREEN;
    LightState trafficLight2 = LightState::RED;

    while(true) {
        std::cout << "Traffic Light 1: ";
        printLightState(trafficLight1);
        std::cout << "Traffic Light 2: ";
        printLightState(trafficLight2);

        if(trafficLight1 == LightState::GREEN) {
            std::this_thread::sleep_for(std::chrono::seconds(10));
            trafficLight1 = LightState::YELLOW;
        } else if(trafficLight1 == LightState::YELLOW) {
            std::this_thread::sleep_for(std::chrono::seconds(2));
            trafficLight1 = LightState::RED;
            trafficLight2 = LightState::GREEN;
        } else if(trafficLight1 == LightState::RED) {
            std::this_thread::sleep_for(std::chrono::seconds(10));
            if(trafficLight2 == LightState::GREEN) {
                trafficLight2 = LightState::YELLOW;
            }
        }

        if(trafficLight2 == LightState::YELLOW) {
            std::this_thread::sleep_for(std::chrono::seconds(2));
            trafficLight2 = LightState::RED;
            trafficLight1 = LightState::GREEN;
        }
    }

    return 0;
}
