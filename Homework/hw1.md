# HW 1. 
### Arrays

**To submit homework**, you can:
* write these functions in a [circuits.io](https://circuits.io/lab) lab and share the link to the project with Ms. deBB via email. 
* attach an Arduino sketch file to an email and email it to Ms. deBB
* email a text file

**If you are stuck on these problems** come talk to Ms. deBB! I'm happy to help you through this assignment.

---

**(0)** Write a function **testHearing()** that uses a for loop to play the frequencies from 100 to 10000 on a speaker. Delay for one millisecond for each frequency. 

```c++
void loop() {
  testHearing();
}

void testHearing() {
  // your code here 
  // tone(pin, note, duration);
}
```


**(1)** In computer science the "%" (a.k.a. the modulo operator) is surprisingly useful. It is used to calculate the remainder after dividing two numbers. E.g.:

    5%2 = 1;
    4%2 = 0;
    3%2 = 1;
    2%2 = 0;
    1%2 = 1;
    0%2 = 0;

Use the modulo operator to write a function **fizzBuzz()** that uses Serial.print() to print the numbers from 1 to 100, with two exceptions:
  
1. For numbers divisible by 3, print "Fizz" instead of the number
2. For numbers divisible by 5 (and not 3), print "Buzz" instead.

```c++
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    fizzBuzz();
}

void fizzBuzz() {

}
```


**(2)**
What does sum equal?

```c++
int lotteryTicket[] = { 40, 23, 11, 12, 52};
int sum = lotteryTicket[0] + lotteryTicket[3];
```


**(3)** Create two arrays: 
1. an array of 5 elements called lightLevels[] with numbers between 0 and 255.
2. an array called durations[] with 5 numbers between 100 and 1000.  

Use a for loop to cycle through the elements of the arrays. Use **analogWrite()** to turn on an LED at the brightness level in the lightLevels[] array and keep it on for the amount of time in the durations[] array.


**(4)** Write some code that turns all of the Neopixels blue when you press a button. Otherwise, it turns them all off.

```c++
#include <Adafruit_NeoPixel.h>
#define BUTTON_PIN   2    
#define PIXEL_PIN    6   
#define PIXEL_COUNT  7

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  strip.begin();
  strip.show(); 
}

void loop() {
  if ( /* button is pressed? */ ) {
    // turn all Neopixels on
  }
  else {
    // turn all Neopixels off
  }
}

```







