# Computer Sound

This doc will walk you through the process of triggering sounds on a computer using an Arduino.

1. Begin by **installing [Processing](http://processing.org/)** - a visual programming language that works well with Arduino.

2. Next, **upload the correct Arduino** program. The most basic example is ```Arduino > sendNote > "sendNote.ino"``` If you're using a Capacitive Touch Sensor, you may want to look at the cap_sendNote.ino example.

3. After modifying and uploading the correct Arduino program, **open ```SoundPlayer > SoundPlayer.pde```** in Processing.

4. **Select the Serial port** on which your Arduino is currently running.


Voila!


### Modifying Sound Files
To modify the sound files, check the ```SoundPlayer > audio``` folder. Replace the files in this folder, but make sure to keep the naming convention the same, e.g. "0.wav". There is a folder ```soundLibrary``` with additional sound files that you can play with.
