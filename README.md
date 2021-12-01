# Embedded C Programming-SeatHeatingApp

## In Action

* The buttons have to be switched on before the app starts working.
* Potentiometer acts as temperature sensor. It gives signal which is converted by ADC and used to make a PWM signal pf corresponding duty cycle, as seen in the oscilloscope.
* As potentiometer is varied, message containing detected temperature is shown in serial monitor.

![Sample gif](simulation/sample.gif)

#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/264046/SeatHeatingApp/actions/workflows/Compile.yml/badge.svg)](https://github.com/264046/SeatHeatingApp/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/264046/SeatHeatingApp/actions/workflows/Codequality.yml/badge.svg)](https://github.com/264046/SeatHeatingApp/actions/workflows/Codequality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/c5b19591521c41fb98574997eeda1c5c)](https://www.codacy.com/gh/264046/SeatHeatingApp/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=264046/SeatHeatingApp&amp;utm_campaign=Badge_Grade)|


