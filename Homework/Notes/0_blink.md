# Notes 0. Blink
Open the blink example: File > Examples > Basics > Blink.  

## Comments
The grayed-out text at the top of this example is an extended line comment. Comments are for humans, not computers. There are two ways to make comments:

```c++
/*
   This is an extended line comment
 */


// This is a single line comment
```

## Functions
Built-in functions
* [setup()](https://www.arduino.cc/en/Reference/Setup) - Every Arduino sketch must have a setup()- called one time at the beginning.
* [loop()](https://www.arduino.cc/en/Reference/Loop) - Every Arduino sketch must have a loop()- called over and over as long as the Arduino is plugged in. 
* [digitalWrite()](https://www.arduino.cc/en/Reference/DigitalWrite)
* [delay()](https://www.arduino.cc/en/Reference/Delay)

Writing our own functions:

Passing arguments to functions:

## Variables

Variables in computer science allow us to store values. Variables help to make our code easier to change and easier to read. For example, we can replace the number 13 (representing pin 13) with the variable "ledPin":

```c++
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
```