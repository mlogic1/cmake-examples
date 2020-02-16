#pragma once

class Car
{
    public:
        Car(const char* make, const char* model);
        ~Car() = default;

    private:
        const char* _make;
        const char* _model;
};