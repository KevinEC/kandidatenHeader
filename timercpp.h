#include <iostream>
#include <thread>
#include <chrono>

class Timers {
    bool clear = false;

    public:
        void setTimeout(const std::function< void()> function, int delay)
        {
            this->clear = false;
            std::thread t([=]() {
                if (this->clear) return;
                std::this_thread::sleep_for(std::chrono::milliseconds(delay));
                if (this->clear) return;
                function();
            });
            t.detach();
        }

        void setInterval(const std::function< void()> function, int interval)
        {
            this->clear = false;
            std::thread t([=]() {
                while (true) {
                    if (this->clear) return;
                    std::this_thread::sleep_for(std::chrono::milliseconds(interval));
                    if (this->clear) return;
                    function();
                }
            });
            t.detach();
        }

        void stop()
        {
            this->clear = true;
        }

};
/*
void Timers::setTimeout(auto function, int delay) {
    this->clear = false;
    std::thread t([=]() {
        if(this->clear) return;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
        if(this->clear) return;
        function();
    });
    t.detach();
}

void Timers::setInterval(auto function, int interval) {
    this->clear = false;
    std::thread t([=]() {
        while(true) {
            if(this->clear) return;
            std::this_thread::sleep_for(std::chrono::milliseconds(interval));
            if(this->clear) return;
            function();
        }
    });
    t.detach();
}

void Timers::stop() {
    this->clear = true;
}
*/