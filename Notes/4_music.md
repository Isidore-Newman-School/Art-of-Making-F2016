
# 4. Music

Arrays are ways to a collection of variables.

### Declaring Arrays
```c++
int myPins[] = {2, 4, 8, 3, 6};
```


### Accessing Elements
The values in arrays are accessed using an index, beginning with zero. E.g.:
```c++
int delayTimes[] = {200, 400, 85, 390, 610};
// delayTimes[0] is 2
// delayTimes[1] is 4
// ...
// delayTimes[4] is 6
int totalTime = delayTimes[0] + delayTimes[1];  // 600
```

To assign elements in an array to a value:
```c++
delayTimes[1] = 1000;
```

### Arrays with For Loops
```c++
for (int i = 0; i < 5; i++) {
  Serial.println(myPins[i]);
}
```



```c++
// notes to play, corresponding to the 3 sensors:
int notes[] = {500, 300, 200};

void setup() {
    tone(8, notes[0], 500);
    delay(100);
    tone(8, notes[1], 500);
    delay(100);
    tone(8, notes[2], 500);
    delay(100);
}

void loop() {
  // no need to repeat the melody.
}
```

**Exercise** 
Put the first 7 notes of "Mary Had a Little Lamb" in an array called notes[]. Use a for loop and tone() to play the notes of the array in order.

