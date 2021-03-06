# HW 0. 

**To submit homework**, you can:
* write these functions in a [circuits.io](https://circuits.io/lab) lab and share the link to the project with Ms. deBB via email. 
* attach an Arduino sketch file to an email and email it to Ms. deBB
* email a text file

**If you are stuck on these problems** come talk to Ms. deBB! I'm happy to help you through this assignment.

---
**(1)** Write a function **onOff()** that takes two arguments. The function should make the LED turn on and off and delay. The arguments represent the two delay times. (Hint: we've already written this function in class).

**(2)** Write a function **setBrightness()** that takes a single argument between 0 and 100. It sets the led to a level of brighness between 255 (max on) to 0 (off).

**(3)** Write a new function, **slowClap()** that uses a [for loop](https://www.arduino.cc/en/Reference/For) and the **onOff()** function. Each time through the loop the LED should should blink 3 times, and with each iteration the LED should blink noticeably faster. Do 10 iterations.

**(4)** Use an [if / else if/ else](https://www.arduino.cc/en/Reference/Else) structure to Serial.println() "Positive!" if x is positive, "Zero!" if x is zero, and "Negative!" if x is negative. Check the result in the Serial Monitor.

```c++
int x = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    // your code goes here
}
```