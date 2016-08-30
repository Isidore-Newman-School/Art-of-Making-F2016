# 1. fade

## analogWrite()
In the blink sketch, we turned an LED on and off. Now we want to be able to set the brightness of the LED- to set the LED to some range of values *between* on and off. 

First we'll need to change our circuit to use a pin with a "~". These pins can do [**analogWrite()**](https://www.arduino.cc/en/Reference/AnalogWrite). We'll also need to add a resistor to our circuit since pin 13 is the only pin with a built-in resistor.

* analogWrite([pin#], [value]) 
* The value passed to analogWrite() must be between 0 (OFF/ 0 volts) and 255 (ON/ 5 volts)

To make our LED turn full on, half on, off:

```c++

int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, 255);     // max val
  delay(1000);                  
  analoglWrite(ledPin, 127);    // halfway on
  delay(1000);              
  analoglWrite(ledPin, 0);      // off
  delay(1000);              
}
```

## for loop
To make the LED fade in and out, we'll use a control structure known as a [**for** loop](https://www.arduino.cc/en/Reference/For). For loops help us iterate/ repeat for a certain number of cycles.

![alt text](https://www.arduino.cc/en/uploads/Reference/ForLoopIllustrated.png)


To fade in and out:

```c++

int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  fadeIn();
  fadeOut();
}

void fadeIn() {
    for (int i = 0; i < 255; i++) {
    analogWrite(ledPin, i);
    delay(10);
  }
}

void fadeOut() {
    for (int i = 255; i > 0; i--) {
    analogWrite(ledPin, i);
    delay(10);
  }
}
```