# PRODIGY_CS_04
# Simple keylogger for windows in keylogger.cpp
All similar as keylogger in python but only suitable for windows.

# Cross-Platform Keylogger in Python

This is a simple, cross-platform keylogger written in Python that captures keystrokes and logs them into a text file. The keylogger is implemented using the `pynput` library, which works on Windows, macOS, and Linux.

## Features

- **Cross-Platform**: Works on Windows, Linux, and macOS.
- **Keystroke Logging**: Logs pressed keys into a file (`log.txt`).
- **Special Key Support**: Recognizes common special keys such as backspace, enter, shift, control, caps lock, tab, and alt.
- **Log to File**: All keystrokes are logged into a file for later inspection.
- **Escape Key**: The keylogger stops logging when the `Escape` key is pressed.

## Installation

### Requirements

- Python 3.x
- `pynput` library for capturing keyboard events

### Steps to Install

1. Clone this repository to your local machine.

   ```bash
   git clone https://github.com/chandrakamalsingh007/PRODIGY_CS_04.git
   cd PRODIGY_CS_04
2. Install the required dependencies:

    pip install pynput

3. Usage
    To start the keylogger, simply run the Python script:
    python keylogger.py
The keylogger will begin logging keystrokes to log.txt in the current directory.
4.  Logging Format
The following keys are logged with their respective descriptions:

Backspace: [backspace]
Enter: [enter]
Shift: [shift]
Control: [control]
Caps Lock: [caps lock]
Tab: [tab]
Alt: [alt]
Space: (logged as a space character)
All other normal keys are logged as their character representation.

To stop the keylogger, press the Escape key.

5. Important Notes
- Ensure that you have the necessary permissions to run the keylogger, especially on macOS and Linux where capturing global key events might require elevated privileges.
- This project is for educational purposes only. Use it responsibly and never use it to invade someone's privacy without their consent.

6.  Image of keylogger

    ![live website](https://github.com/chandrakamalsingh007/PRODIGY_CS_04/blob/main/keylogger.jpg)




