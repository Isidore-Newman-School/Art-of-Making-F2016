# 2. Night Light

We've used the following built-in functions to turn LEDs on/off:
* digitalWrite()
* analogWrite()

## Circuit
Now it's time to learn about reading. Begin by setting up the following circuit:

![alt text](http://s4a.cat/examples/photoresistor_led.png)

## analogRead()
We're going to use a new function, analogRead(), to get a value from the light sensor, and we're going to set the variable "input" equal to the light reading. Eventually, we'll use this value to determine whether or not to turn on the night light (LED).

```c++

int ledPin = 13;
int lightPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(lightPin, INPUT);
}

void loop() {
  int input = analogRead(lightPin);
}
```

## Serial.println()
Cool! We're reading the value of the light sensor, but unless we print it to the screen, we have no idea if it's working. Time to use the Serial Monitor! Add the following line to your setup():

```c++
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(lightPin, INPUT);

  // tell the Arduino at what speed to communicate with computer
  Serial.begin(9600);
}
```

Now we can print the value to the screen with **Serial.println()**:
```c++
void loop() {
  int input = analogRead(lightPin);
  Serial.println(input);
}
```

When you open your Serial Monitor, you should see the values printed ot the screen.

![alt text](https://camo.githubusercontent.com/e926b7f0e8f6b818436d0d8bf6f93057f33f4ab6/687474703a2f2f617263626f746963732e636f6d2f686f7374696e672f6c742f696d616765732f5475746f7269616c732f53657269616c5f4d6f6e69746f72312e706e67)

## if / else 
Now it's time to create the nightlight. We want the LED to come on when the light in the room goes dim. We will use a very useful structure in computer science: if / else statment.

```c++

int ledPin = 13;
int lightPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int input = analogRead(lightPin);
  Serial.println(input);

  // if the light sensor reading is low, turn on LED
  if (input < 400) {
    digitalWrite(ledPin, HIGH);
  }
  // otherwise ...
  else {
    digitalWrite(ledPin, LOW);
  }
}
```
